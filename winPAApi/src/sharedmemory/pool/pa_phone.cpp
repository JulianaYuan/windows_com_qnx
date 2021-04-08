#include "pa_phone.h"

SharedMemory::Pool SharedMemoryPool_PA_Phone{ "PA_Phone", 65535 };

SharedMemory::AtomicStruct<PA_PhonePage> PA_PhoneInfo(SharedMemoryPool_PA_Phone, "PA_PhoneInfo", {0,0,0,0});
SharedMemory::AtomicString PA_PhoneInfoFirstName(SharedMemoryPool_PA_Phone, "PA_PhoneInfoFirstName", "");// the first phone name
SharedMemory::AtomicString PA_PhoneInfoSecondName(SharedMemoryPool_PA_Phone, "PA_PhoneInfoSecondName", "");// the second phone name
SharedMemory::AtomicString PA_PhoneInfoWorkName(SharedMemoryPool_PA_Phone, "PA_PhoneInfoWorkName", "");// the phone work name
SharedMemory::AtomicString PA_PhoneInfoOldName(SharedMemoryPool_PA_Phone, "PA_PhoneInfoOldName", "");// the old phone name

SharedMemory::AtomicStringVector PA_PhoneList(SharedMemoryPool_PA_Phone,"PA_PhoneList");
SharedMemory::AtomicStringVector PA_FavoriteList(SharedMemoryPool_PA_Phone, "PA_FavoriteList");