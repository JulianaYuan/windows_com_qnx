#ifndef PA_NOTIFICATION_FUNC_H_
#define PA_NOTIFICATION_FUNC_H_


void* funcPA_NotificationList(int argc, char *argv[]);
void* funcPA_NotificationCheckList(int argc, char *argv[]);
void* funcPA_NotiConfirmButton(int argc, char *argv[]);
void* funcPA_DIM_DriverDoorStatus(int argc, char *argv[]);
void* funcPA_DIM_PassengerDoorStatus(int argc, char *argv[]);
void* funcPA_DIM_DriverRearDoorStatus(int argc, char *argv[]);
void* funcPA_DIM_PassengerRearDoorStatus(int argc, char *argv[]);
void* funcPA_DIM_HoodStatus(int argc, char *argv[]);
void* funcPA_DIM_TrunkStatus(int argc, char *argv[]);
void* funcPA_DIM_TankFlapStatus(int argc, char *argv[]);
void* funcPA_DIM_ACChargeLidStatus(int argc, char *argv[]);
void* funcPA_DIM_DCChargeLidStatus(int argc, char *argv[]);
void* funcPA_DIM_ACandDCChargeLidStatus(int argc, char *argv[]);


void initpa_notificationFuncMap();

#endif //PA_NOTIFICATION_FUNC_H_
