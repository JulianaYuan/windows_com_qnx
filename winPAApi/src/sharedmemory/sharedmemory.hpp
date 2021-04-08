#ifndef SHARED_MEMORY_HPP
#define SHARED_MEMORY_HPP

#define BOOST_DATE_TIME_NO_LIB
#include <boost/interprocess/managed_shared_memory.hpp>
#include <boost/interprocess/allocators/allocator.hpp>
#include <boost/interprocess/containers/string.hpp>
#include <boost/interprocess/containers/vector.hpp>
#include <list>
#include <fcntl.h>

namespace SharedMemory
{
	using namespace std;

	class AtomicLocker
	{
	public:
		AtomicLocker(const string& name): m_fd( open(name.c_str(), O_CREAT | O_RDWR) )
	{
		assert(m_fd > 0);
	}

	void atomic(function<void(void)> func){
		flock(m_fd , LOCK_EX);
		func();
		flock(m_fd , LOCK_UN);
	}

	private:
		int m_fd;
	};

	class Pool: public AtomicLocker, public boost::interprocess::managed_shared_memory
	{
	public:
		Pool(const string& name, const size_t& maxSize):
			AtomicLocker(string("/tmp/")+ name+".locker"),
			boost::interprocess::managed_shared_memory(boost::interprocess::open_or_create, name.c_str(), maxSize)
		{}
	};

	template <typename NumberType>
	class AtomicNumber
	{
		static_assert(
			is_same<NumberType, signed char>::value ||
			is_same<NumberType, unsigned char>::value ||
			is_same<NumberType, signed short>::value ||
			is_same<NumberType, unsigned short>::value ||
			is_same<NumberType, signed int>::value ||
			is_same<NumberType, unsigned int>::value,
			"class AtomicNumber's template type isn't number type.");

		static constexpr int NumberSize = sizeof(NumberType);

		void atomic(function<void(void)> func)
		{
			if(NumberSize >= 4) //TODO: check 32bits or 64bits by precompile macro.
				m_pool.atomic(func);
			else
				func();
		}

	public:
		AtomicNumber(Pool& pool, const char* name, const NumberType& initValue):
			m_pool(pool)
		{
			m_pool.atomic([&]() {
				auto result = pool.find_no_lock<NumberType>(name);
				if (result.first)
					m_ptr = result.first;
				else
					m_ptr = pool.construct<NumberType>(name)(initValue);
			});
			assert(m_ptr != nullptr);
			m_local = initValue;
		}

		bool isModified()
		{
			bool ret;
			atomic([&]() {  ret = (m_local != *m_ptr); });
			return ret;
		}

		NumberType getValue()
		{
			atomic([&]() {  m_local = *m_ptr; });
			return m_local;
		}

		bool syncValue(NumberType& dst)
		{
			NumberType cur = getValue();
			if(dst != cur)
			{
				dst = cur;
				return true;
			}
			return false;
		}

		void setValue(const NumberType& value)
		{
			atomic([&]() { *m_ptr = value; });
		}

		void operator=(const NumberType& value) { setValue(value); }

		bool operator==(const NumberType& value) { return (value == getValue()); }

		bool operator!=(const NumberType& value){ return (value != getValue()); }

	private:
		Pool& m_pool;
		NumberType* m_ptr;
		NumberType m_local;
	};

	class AtomicString
	{
		typedef boost::interprocess::allocator<char, boost::interprocess::managed_shared_memory::segment_manager> string_allocator;
		typedef boost::interprocess::basic_string<char, std::char_traits<char>, string_allocator > shm_string;

	public:
		AtomicString(Pool& pool, const char* name, const string& initValue) :
			m_pool(pool)
		{
			m_pool.atomic([&]() {
				auto result = pool.find_no_lock<shm_string>(name);
				if (result.first)
					m_ptr = result.first;
				else
					m_ptr = pool.construct<shm_string>(name)(initValue.c_str(), pool.get_segment_manager());
			});

			assert(m_ptr != nullptr);
			m_local = initValue;
		}

		bool isModified()
		{
			bool ret;
			m_pool.atomic([&]() { ret = (m_local != m_ptr->c_str()); });
			return ret;
		}

		string getValue() {
			m_pool.atomic([&]() { m_local = m_ptr->c_str(); });
			return m_local;
		}

		bool syncValue(string& dst)
		{
			string cur = getValue();
			if(dst != cur)
			{
				dst = cur;
				return true;
			}
			return false;
		}

		void setValue(const string& value)
		{
			m_pool.atomic([&](){ *m_ptr = value.c_str(); });
		}

		void operator=(const string& value) { setValue(value); }

		bool operator==(const string& value) { return (value == getValue()); }

		bool operator!=(const string& value) { return (value != getValue()); }

	private:
		Pool& m_pool;
		shm_string* m_ptr;
		string m_local;
	};

	template <typename LiteralType>
	class AtomicStruct
	{
		static_assert(std::is_literal_type<LiteralType>::value, "class AtomicStruct's template isn't literal type");

		static constexpr int StructSize = sizeof(LiteralType);

		static bool equal(const LiteralType& src, const LiteralType& dst)
		{
			return !memcmp(&src, &dst, sizeof(LiteralType));
		}

		static void asign(LiteralType& src, const LiteralType& dst)
		{
			memcpy(&src, &dst, sizeof(LiteralType));
		}

		void atomic(function<void(void)> func)
		{
			if(StructSize > 1) //struct may not be byte align
				m_pool.atomic(func);
			else
				func();
		}

	public:
		AtomicStruct(Pool& pool, const char* name, const LiteralType& initValue):
			m_pool(pool)
		{
			m_pool.atomic([&](){
				auto result = m_pool.find_no_lock<LiteralType>(name);
				if (result.first)
					m_ptr = result.first;
				else
				{
					m_ptr = m_pool.construct<LiteralType>(name)(initValue);
				}
			});

			assert(m_ptr != nullptr);

			asign(m_local,initValue);
		}

		bool isModified()
		{
			bool ret;
			atomic([&]() { ret = !equal(m_local, *m_ptr); });
			return ret;
		}

		LiteralType getValue()
		{
			atomic([&]() { asign(m_local, *m_ptr); });
			return m_local;
		}

		bool syncValue(LiteralType& dst)
		{
			LiteralType cur = getValue();
			if(!equal(dst,cur))
			{
				dst = cur;
				return true;
			}
			return false;
		}

		void setValue(const LiteralType& value)
		{
			atomic([&]() { asign(*m_ptr,value); });
		}

		void operator=(const LiteralType& value) { setValue(value); }

		bool operator==(const LiteralType& value) { return equal(value, getValue()); }

		bool operator!=(const LiteralType& value) { return !(*this == value); }

	private:
		Pool& m_pool;
		LiteralType* m_ptr;
		LiteralType m_local;
	};

	class AtomicStringVector
	{
		template <typename T>
		using shm_allocator = boost::interprocess::allocator<T, boost::interprocess::managed_shared_memory::segment_manager>;

		typedef boost::interprocess::basic_string<char, std::char_traits<char>, shm_allocator<char> > shm_string;
		typedef shm_allocator<shm_string> shm_string_vector_allocator;
		typedef boost::interprocess::vector<shm_string, shm_string_vector_allocator > shm_string_vector;

	public:
		AtomicStringVector(Pool& pool, const char* name):
			m_pool(pool)
		{
			m_pool.atomic([&](){
				auto result = m_pool.find_no_lock<shm_string_vector>(name);
				if (result.first)
					m_ptr = result.first;
				else
				{
					shm_string_vector_allocator tallocator(m_pool.get_segment_manager());
					m_ptr = m_pool.construct<shm_string_vector>(name)(tallocator);
				}
			});

			assert(m_ptr != nullptr);
		}

		void clear()
		{
			m_pool.atomic([&](){ m_ptr->clear();} );
		}

		bool isEmpty()
		{
			bool empty = false;
			m_pool.atomic([&](){ empty = m_ptr->empty(); });
			return empty;
		}

		size_t getSize()
		{
			size_t size = false;
			m_pool.atomic([&](){ size = m_ptr->size(); });
			return size;
		}

		std::string getValueAt(const size_t& index)
		{
			std::string ret;
			m_pool.atomic([&](){ ret = m_ptr->at(index).c_str(); });
			return ret;
		}

		void setValueAt(const size_t& index, const std::string& value)
		{
			m_pool.atomic([&](){ m_ptr->at(index) = value.c_str(); });
		}

		void append(const std::string& value)
		{
			m_pool.atomic([&](){
				m_ptr->push_back(shm_string(value.c_str(), m_pool.get_segment_manager()));
			});
		}

		void removeAt(const size_t& index)
		{
			m_pool.atomic([&](){
				if( index < m_ptr->size())
				{
					m_ptr->erase(m_ptr->begin() + index);
				}
			});
		}

	private:
		Pool& m_pool;
		shm_string_vector* m_ptr;
	};
}
#endif
