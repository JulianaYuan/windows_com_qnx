#include "pa_domain.h"

SharedMemory::Pool SharedMemoryPool_PA_Domain{ "PA_Domain", 65535 };

//Middleware internal PA
//3.3 Units And Formats in DIM
SharedMemory::AtomicNumber<unsigned char> PA_ClkFmtForUseInt(SharedMemoryPool_PA_Domain,			"PA_ClkFmtForUseInt",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_DateFmtForUseInt(SharedMemoryPool_PA_Domain,			"PA_DateFmtForUseInt",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_DstLongUnitForUseInt(SharedMemoryPool_PA_Domain,		"PA_DstLongUnitForUseInt",			{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_DstShoUnitForUseInt(SharedMemoryPool_PA_Domain,		"PA_DstShoUnitForUseInt",			{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_FuCnsUnitForUseInt(SharedMemoryPool_PA_Domain,			"PA_FuCnsUnitForUseInt",			{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_VehSpdUnitForUseInt(SharedMemoryPool_PA_Domain,		"PA_VehSpdUnitForUseInt",			{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_AmbTUnitForUseInt(SharedMemoryPool_PA_Domain,			"PA_AmbTUnitForUseInt",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_VolUnitForUseInt(SharedMemoryPool_PA_Domain,			"PA_VolUnitForUseInt",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_PUnitForUseInt(SharedMemoryPool_PA_Domain,				"PA_PUnitForUseInt",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_SaveSetgToMemPrmnt(SharedMemoryPool_PA_Domain,			"PA_SaveSetgToMemPrmnt",			{ 0 });




SharedMemory::AtomicNumber<unsigned char> PA_DOM_DIMSequence(SharedMemoryPool_PA_Domain,			"PA_DOM_DIMSequence",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_NoticeDisplayStatus(SharedMemoryPool_PA_Domain, 		"PA_NoticeDisplayStatus",			{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_WelcomeDisplayFinish(SharedMemoryPool_PA_Domain, 		"PA_WelcomeDisplayFinish",			{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_MemoryFailure(SharedMemoryPool_PA_Domain, 				"PA_MemoryFailure",					{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_Trip_ScreenSwitch_Request(SharedMemoryPool_PA_Domain, 	"PA_Trip_ScreenSwitch_Request",		{ 0 });
