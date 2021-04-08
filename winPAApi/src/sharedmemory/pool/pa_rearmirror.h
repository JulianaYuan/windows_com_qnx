#ifndef PA_REARMIRROR_H
#define PA_REARMIRROR_H

#include "../sharedmemory.hpp"

struct PA_Mirror
{
	unsigned char value : 5;					// Range and default value refer to pa
	unsigned char availability : 3;				// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};


extern SharedMemory::Pool SharedMemoryPool_PA_RearMirror;

//3.5
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_ERMDAdjustmentEntrance_Grey;		// default value is 0, Range: 0=OFF, 1=ON
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_ERMDAdjustmentEntrance_Normal;		// default value is 0, Range: 0=OFF, 1=ON
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_ERMDAdjustmentEntrance_Highlight;	// default value is 0, Range: 0=OFF, 1=ON
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Left_Normal;						// default value is 0, Range: 0=OFF, 1=ON
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Left_Highlight;					// default value is 0, Range: 0=OFF, 1=ON
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Left_Grey;							// default value is 0, Range: 0=OFF, 1=ON
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Right_Normal;						// default value is 0, Range: 0=OFF, 1=ON
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Right_Highlight;					// default value is 0, Range: 0=OFF, 1=ON
extern SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Right_Grey;						// default value is 0, Range: 0=OFF, 1=ON


// callback for HMI to inform MW the adjustment condition
//3.3
extern SharedMemory::AtomicNumber<unsigned char> PA_ExtrMirrAdjHmiReq;			// default value is 0
																				// 0 = MirrDirReqTyp_Idle
																				// 1 = MirrDirReqTyp_Up
																				// 2 = MirrDirReqTyp_Down
																				// 3 = MirrDirReqTyp_Left
																				// 4 = MirrDirReqTyp_Right
//3.4
extern SharedMemory::AtomicNumber<unsigned char> PA_ExtrMirrSelnHmiReq;			// default value is 0, Range: 0 = idle, 1 = left, 2 = right

//3.5
extern SharedMemory::AtomicNumber<unsigned char> PA_ExtrReViewMirrDispAdjHmiReq;	// default value is 0, Range:
																					// 0 = MirrDirReqTyp_Idle
																					// 1 = MirrDirReqTyp_Up
																					// 2 = MirrDirReqTyp_Down
																					// 3 = MirrDirReqTyp_Left
																					// 4 = MirrDirReqTyp_Right
extern SharedMemory::AtomicNumber<unsigned char> PA_ExtrReViewMirrDispRstSetg;		// default value is 0, Range: 0 = RstSetg_Idle, 1 = RstSetg_Cancel, 2 = RstSetg_Confirm


//callback for 3.5.5.6.4 [321180 State active]
extern SharedMemory::AtomicNumber<unsigned char> PA_Select_ERMD_Entrance;			// default value is 0, Range: 0 = not select, 1 = select
//the following callback is for T5(quit the ERMD adjustment interface via SWS)
extern SharedMemory::AtomicNumber<unsigned char> PA_Enter_ERMD_Entrance;			// default value is 0, Range:
																					// 0 = not display ERMD Entrance,
																					// 1 = display ERMD Entrance, but not quit form ERMD adjustment
																					// 2 = display ERMD Entrance, quit form ERMD adjustment
extern SharedMemory::AtomicNumber<unsigned char> PA_Enter_ERMD_Adjustment;			// default value is 0, Range: 0 = not enter ERMD Adjustment, 1 = enter ERMD Adjustment
extern SharedMemory::AtomicNumber<unsigned char> PA_Select_ERMD_Adjustment;			// default value is 0, Range: 0 = not select, 1 = select left, 2 = select right
#endif
