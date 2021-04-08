#ifndef PA_NOTIFICATION_H
#define PA_NOTIFICATION_H

#include "../sharedmemory.hpp"

struct PA_Notification
{
	unsigned short NotificationA = 0;
	unsigned short NotificationB = 0;

};

struct PA_CheckList
{
	unsigned short CheckListNotiID1 = 0;
	unsigned short CheckListNotiID2 = 0;
	unsigned short CheckListNotiID3 = 0;
	unsigned short CheckListNotiID4 = 0;
	unsigned short CheckListNotiID5 = 0;
	unsigned short CheckListNotiID6 = 0;
	unsigned short CheckListNotiID7 = 0;
	unsigned short CheckListNotiID8 = 0;
	unsigned short CheckListNotiID9 = 0;
	unsigned short CheckListNotiID10 = 0;
//	unsigned short CheckListNotiID11 = 0;
//	unsigned short CheckListNotiID12 = 0;
//	unsigned short CheckListNotiID13 = 0;
//	unsigned short CheckListNotiID14 = 0;
//	unsigned short CheckListNotiID15 = 0;
//	unsigned short CheckListNotiID16 = 0;
//	unsigned short CheckListNotiID17 = 0;
//	unsigned short CheckListNotiID18 = 0;
//	unsigned short CheckListNotiID19 = 0;
//	unsigned short CheckListNotiID20 = 0;
	unsigned char NotificationTellTale = 0;
	unsigned char SteeringAssistanceWarning = 0;
};

struct PA_NotiConfirm
{
	unsigned char NotiConfirmButton = 0;
	unsigned char NotiUserAction = 0;
};

//TC 3.19 Display Door Status
struct PA_Door
{
	unsigned char value : 5;				// default value is 0, Range and value refer to signal
	unsigned char availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

extern SharedMemory::AtomicStruct<PA_Notification> PA_NotificationList;
extern SharedMemory::AtomicStruct<PA_CheckList> PA_NotificationCheckList;
extern SharedMemory::AtomicStruct<PA_NotiConfirm> PA_NotiConfirmButton;
extern SharedMemory::AtomicNumber<unsigned char> PA_HMIShowupStatus;

//TC 3.19 Display Door Status
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_DriverDoorStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_PassengerDoorStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_DriverRearDoorStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_PassengerRearDoorStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_HoodStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_TrunkStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_TankFlapStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_ACChargeLidStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_DCChargeLidStatus;
extern SharedMemory::AtomicStruct<PA_Door> PA_DIM_ACandDCChargeLidStatus;


#endif
