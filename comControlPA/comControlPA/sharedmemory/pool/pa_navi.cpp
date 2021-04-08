#include "pa_navi.h"

SharedMemory::Pool SharedMemoryPool_PA_Navi{ "PA_Navi", 65535 };

SharedMemory::AtomicStruct<PA_Navi> PA_NaviInof(SharedMemoryPool_PA_Navi,"PA_NaviInof",{0,0});
SharedMemory::AtomicString PA_NaviRouteName(SharedMemoryPool_PA_Navi,"PA_NaviRouteName","");
SharedMemory::AtomicString PA_NaviRouteInfo(SharedMemoryPool_PA_Navi,"PA_NaviRouteInfo","");

SharedMemory::AtomicStruct<PA_TBT> PA_TBTInof(SharedMemoryPool_PA_Navi,"PA_TBTInof",{0,0,0,0});
SharedMemory::AtomicString PA_TBTString(SharedMemoryPool_PA_Navi,"PA_TBTString","");
SharedMemory::AtomicString PA_TBTUnit(SharedMemoryPool_PA_Navi,"PA_TBTUnit","");

SharedMemory::AtomicStringVector PA_NaviList(SharedMemoryPool_PA_Navi,"PA_NaviList");
