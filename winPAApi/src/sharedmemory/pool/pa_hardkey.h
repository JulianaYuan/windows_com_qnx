#ifndef PA_HARDKEY_H
#define PA_HARDKEY_H

#include "../sharedmemory.hpp"

struct PA_Hardkey
{
	unsigned char status : 5;					// default value is 0, Range and value refer to signal
	unsigned char availability : 3;				// default value is 0, Range: 0:Available, 1:Error
	unsigned char value;						// default value is 0, Range: 0x00-0x0D, value only used for type3 swipe
};

struct PA_Vibration
{
	unsigned char type;							// default value is 0, Range: 0x00: LeftSWTP, 0x01: RightSWTP
	unsigned char data;							// default value is 0, Range: 0x00: No Vibration, 0x01: Single Vibration, 0x02-0xFF: Multiple Vibration
};


extern SharedMemory::Pool SharedMemoryPool_PA_Hardkey;


/////////// PA to HMI ///////////////

// left key in SRD
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlTopKey;			// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlBottomKey;			// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlRiKey;				// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlLeKey;				// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlConfirmKey;		// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 NA
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlTiGapKey;			// type3 type4 type5 NA
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlViewKey;			// type3 type4 type5 NA
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlResuKey;			// type4 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlCancleKey;			// type4 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhADASKey;			// type4 and type5 NA
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlTiGapCtrlr;		// type5 status: 0:no set, 1:up short set, 2:up long set, 3:down short set, 4:down long set, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlAPAKey;			// type4 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlHozlSwp;			// type3 status: 0:no swipe, 1:swipe left, 2:swipe right; value: 0x00-0x0D; Availability: 0:Available, 1:Error
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_LeftSteerWhlVertSwp;			// type3 status: 0:no swipe, 1:swipe up, 2:swipe down; value: 0x00-0x0D; Availability: 0:Available, 1:Error

// right key in SRD
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlTopKey;			// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlBottomKey;		// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlLeKey;			// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlRiKey;			// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlRollKey;			// type3 type4 type5 NA
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlConfirmKey;		// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlVRKey;			// type4 and type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlMenuKey;			// type5 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlCustomDefdKey;	// type3 type4 type5 NA
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlMuteKey;			// type4 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
																				// type3 status: 0: NoPressed, 1: ShortPressed, 2: LongPressed, 3. Touch, 4. Press; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlVertMove;			// type3 type4 type5 NA
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlHozlSwp;			// status: 0:no swipe, 1:swipe left, 2:swipe right; Availability: 0:Available, 1:Error
																				// type3 value used: 0x00-0x0D
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlVertSwp;			// status: 0:no swipe, 1:swipe up, 2:swipe down; Availability: 0:Available, 1:Error
																				// type3 value used: 0x00-0x0D
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlTripKey;			// type4 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_RightSteerWhlWeChatKey;		// type4 status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used

// other key in SRD
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_SngTripKey;         			// status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_DrvrModPadl;					// status: 0:no set, 1:short up set, 2:long up set, 3:short down set, 4:long down set, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used
extern SharedMemory::AtomicStruct<PA_Hardkey> PA_CustomDefKey;					// status: 0:no pressed, 1:short pressed, 2:long pressed, 5: press, 6: long press release, 7: touch; Availability: 0:Available, 1:Error; value not used


// 5.3.2 Steering touch pad adjustment for DC1E
extern SharedMemory::AtomicNumber<unsigned char> PA_SteerPosnAdjmtCtrl;			// default value is 0, Range: 0 = OnOff1_Off, 1 = OnOff1_On; Signal CSD send to DIM / CEM


/////////// PA from HMI ///////////////
// for vibration
extern SharedMemory::AtomicStruct<PA_Vibration> PA_HMI_VibrationFbToSwtp;			// refer to PA_Vibration
// for send Tx signals
extern SharedMemory::AtomicNumber<unsigned char> PA_RiTopReq;					// default value is 0, Range: 0 = not send Tx Signals, 1 = send Tx Signals
extern SharedMemory::AtomicNumber<unsigned char> PA_RiDownReq;					// default value is 0, Range: 0 = not send Tx Signals, 1 = send Tx Signals
extern SharedMemory::AtomicNumber<unsigned char> PA_RiLeftReq;					// default value is 0, Range: 0 = not send Tx Signals, 1 = send Tx Signals
extern SharedMemory::AtomicNumber<unsigned char> PA_RiRightReq;					// default value is 0, Range: 0 = not send Tx Signals, 1 = send Tx Signals
extern SharedMemory::AtomicNumber<unsigned char> PA_BtnConfiReq;				// default value is 0, Range: 0 = not send Tx Signals, 1 = send Tx Signals
// for Steering touch pad adjustment, steering adjustment switch up/down/forward/back
extern SharedMemory::AtomicNumber<unsigned char> PA_SteerAdjSwtUpSts;			// default value is 0, Range: 0 = false, 1 = true
extern SharedMemory::AtomicNumber<unsigned char> PA_SteerAdjSwtDwnSts;			// default value is 0, Range: 0 = false, 1 = true
extern SharedMemory::AtomicNumber<unsigned char> PA_SteerAdjSwtFwdSts;			// default value is 0, Range: 0 = false, 1 = true
extern SharedMemory::AtomicNumber<unsigned char> PA_SteerAdjSwtBackSts;			// default value is 0, Range: 0 = false, 1 = true

#endif
