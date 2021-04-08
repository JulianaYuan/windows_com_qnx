#ifndef PA_PHONE_H
#define PA_PHONE_H

#include "../sharedmemory.hpp"

struct PA_PhonePage
{
	unsigned char state;                             // default value is 0, Range: 0=none,1=incoming,2=outgoing,3=calling,4=callend,5=callfaild,6=callDeclined,7=IncomingWhenCalling,8=CallingWithHangOn
    unsigned char microphoneMute;                    // default value is 0,1=mute
    unsigned char soundMute;                         // default value is 0,1=mute
    unsigned int time;                               // default value is 0
};

extern SharedMemory::Pool SharedMemoryPool_PA_Phone;

extern SharedMemory::AtomicStruct<PA_PhonePage> PA_PhoneInfo;
extern SharedMemory::AtomicString PA_PhoneInfoFirstName;// the first phone name
extern SharedMemory::AtomicString PA_PhoneInfoSecondName;// the second phone name
extern SharedMemory::AtomicString PA_PhoneInfoWorkName;// the phone work name
extern SharedMemory::AtomicString PA_PhoneInfoOldName;// the old phone name

extern SharedMemory::AtomicStringVector PA_PhoneList;//0/1/2/3(none/incoming/ougoing/missing):itemText
extern SharedMemory::AtomicStringVector PA_FavoriteList;//itemText
#endif