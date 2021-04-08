#ifndef PA_NAVI_H
#define PA_NAVI_H

#include "../sharedmemory.hpp"

struct PA_Navi
{
	unsigned char active   : 4;				    // default value is 0, Range: 0=None, 1=active
    unsigned char mute     : 4;				    // default value is 0, Range: 0=None, 1=mute
};

struct PA_TBT
{
	unsigned char active   : 1;				    // default value is 0, Range: 0=None, 1=active
    unsigned char progress : 7;                 // default value is 0, Range: 0 - 100
    unsigned char icon     : 8;				    // default value is 0, Range: 0=None, 1=mute
    unsigned short distance;                    // default value is 0
};

extern SharedMemory::Pool SharedMemoryPool_PA_Navi;

extern SharedMemory::AtomicStruct<PA_Navi> PA_NaviInof;
extern SharedMemory::AtomicString PA_NaviRouteName;
extern SharedMemory::AtomicString PA_NaviRouteInfo;

extern SharedMemory::AtomicStruct<PA_TBT> PA_TBTInof;
extern SharedMemory::AtomicString PA_TBTString;
extern SharedMemory::AtomicString PA_TBTUnit;

extern SharedMemory::AtomicStringVector PA_NaviList;//itemText

#endif