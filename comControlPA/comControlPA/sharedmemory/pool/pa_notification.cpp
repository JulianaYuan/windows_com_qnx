#include "pa_notification.h"

SharedMemory::Pool SharedMemoryPool_PA_Notification{ "PA_Notification", 65535 };

struct PA_Notification notifications;
SharedMemory::AtomicStruct<PA_Notification> PA_NotificationList(SharedMemoryPool_PA_Notification, 	"PA_NotificationList",		notifications);

struct PA_CheckList checklists;
SharedMemory::AtomicStruct<PA_CheckList> PA_NotificationCheckList(SharedMemoryPool_PA_Notification, "PA_NotificationCheckList",	checklists);

struct PA_NotiConfirm confirm;
SharedMemory::AtomicStruct<PA_NotiConfirm> PA_NotiConfirmButton(SharedMemoryPool_PA_Notification, 	"PA_NotiConfirmButton",		confirm);
SharedMemory::AtomicNumber<unsigned char> PA_HMIShowupStatus(SharedMemoryPool_PA_Notification, 	"PA_HMIShowupStatus",		{ 0 });

SharedMemory::AtomicStruct<PA_Door> PA_DIM_DriverDoorStatus(		SharedMemoryPool_PA_Notification, 	"PA_DIM_DriverDoorStatus",			{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_PassengerDoorStatus(		SharedMemoryPool_PA_Notification, 	"PA_DIM_PassengerDoorStatus",		{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_DriverRearDoorStatus(	SharedMemoryPool_PA_Notification,	"PA_DIM_DriverRearDoorStatus",		{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_PassengerRearDoorStatus(	SharedMemoryPool_PA_Notification,	"PA_DIM_PassengerRearDoorStatus",	{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_HoodStatus(				SharedMemoryPool_PA_Notification, 	"PA_DIM_HoodStatus",				{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_TrunkStatus(				SharedMemoryPool_PA_Notification, 	"PA_DIM_TrunkStatus",				{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_TankFlapStatus(			SharedMemoryPool_PA_Notification, 	"PA_DIM_TankFlapStatus",			{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_ACChargeLidStatus(		SharedMemoryPool_PA_Notification, 	"PA_DIM_ACChargeLidStatus",			{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_DCChargeLidStatus(		SharedMemoryPool_PA_Notification,	"PA_DIM_DCChargeLidStatus",			{ 0, 4 });
SharedMemory::AtomicStruct<PA_Door> PA_DIM_ACandDCChargeLidStatus(	SharedMemoryPool_PA_Notification,	"PA_DIM_ACandDCChargeLidStatus",	{ 0, 4 });
