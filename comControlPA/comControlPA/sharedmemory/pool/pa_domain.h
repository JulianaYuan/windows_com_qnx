#ifndef PA_DOMAIN_H
#define PA_DOMAIN_H

#include "../sharedmemory.hpp"

//Middleware internal PA
//3.3 Units And Formats in DIM
extern SharedMemory::AtomicNumber<unsigned char> PA_ClkFmtForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_DateFmtForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_DstLongUnitForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_DstShoUnitForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_FuCnsUnitForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_VehSpdUnitForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_AmbTUnitForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_VolUnitForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_PUnitForUseInt;
extern SharedMemory::AtomicNumber<unsigned char> PA_SaveSetgToMemPrmnt;



extern SharedMemory::AtomicNumber<unsigned char> PA_DOM_DIMSequence;
extern SharedMemory::AtomicNumber<unsigned char> PA_NoticeDisplayStatus;
extern SharedMemory::AtomicNumber<unsigned char> PA_WelcomeDisplayFinish;
extern SharedMemory::AtomicNumber<unsigned char> PA_MemoryFailure;
extern SharedMemory::AtomicNumber<unsigned char> PA_Trip_ScreenSwitch_Request;


#endif // !PA_DOMAIN_H
