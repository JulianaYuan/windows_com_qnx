#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_notification.h"
#include <vector>
using namespace std;
void* funcPA_NotificationList(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_NotificationList NotificationA NotificationB");
   }else
   {
      PA_Notification value;
      value.NotificationA = atoi(argv[2]);
      value.NotificationB = atoi(argv[3]);
      PA_NotificationList.setValue(value);
   }
}
void* funcPA_NotificationCheckList(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+12))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_NotificationCheckList CheckListNotiID1 CheckListNotiID2 CheckListNotiID3 CheckListNotiID4 CheckListNotiID5 CheckListNotiID6 CheckListNotiID7 CheckListNotiID8 CheckListNotiID9 CheckListNotiID10 NotificationTellTale SteeringAssistanceWarning");
   }else
   {
      PA_CheckList value;
      value.CheckListNotiID1 = atoi(argv[2]);
      value.CheckListNotiID2 = atoi(argv[3]);
      value.CheckListNotiID3 = atoi(argv[4]);
      value.CheckListNotiID4 = atoi(argv[5]);
      value.CheckListNotiID5 = atoi(argv[6]);
      value.CheckListNotiID6 = atoi(argv[7]);
      value.CheckListNotiID7 = atoi(argv[8]);
      value.CheckListNotiID8 = atoi(argv[9]);
      value.CheckListNotiID9 = atoi(argv[10]);
      value.CheckListNotiID10 = atoi(argv[11]);
      value.NotificationTellTale = atoi(argv[12]);
      value.SteeringAssistanceWarning = atoi(argv[13]);
      PA_NotificationCheckList.setValue(value);
   }
}
void* funcPA_NotiConfirmButton(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_NotiConfirmButton NotiConfirmButton NotiUserAction");
   }else
   {
      PA_NotiConfirm value;
      value.NotiConfirmButton = atoi(argv[2]);
      value.NotiUserAction = atoi(argv[3]);
      PA_NotiConfirmButton.setValue(value);
   }
}
void* funcPA_DIM_DriverDoorStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_DriverDoorStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_DriverDoorStatus.setValue(value);
   }
}
void* funcPA_DIM_PassengerDoorStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_PassengerDoorStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_PassengerDoorStatus.setValue(value);
   }
}
void* funcPA_DIM_DriverRearDoorStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_DriverRearDoorStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_DriverRearDoorStatus.setValue(value);
   }
}
void* funcPA_DIM_PassengerRearDoorStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_PassengerRearDoorStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_PassengerRearDoorStatus.setValue(value);
   }
}
void* funcPA_DIM_HoodStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_HoodStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_HoodStatus.setValue(value);
   }
}
void* funcPA_DIM_TrunkStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_TrunkStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_TrunkStatus.setValue(value);
   }
}
void* funcPA_DIM_TankFlapStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_TankFlapStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_TankFlapStatus.setValue(value);
   }
}
void* funcPA_DIM_ACChargeLidStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_ACChargeLidStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_ACChargeLidStatus.setValue(value);
   }
}
void* funcPA_DIM_DCChargeLidStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_DCChargeLidStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_DCChargeLidStatus.setValue(value);
   }
}
void* funcPA_DIM_ACandDCChargeLidStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_ACandDCChargeLidStatus value availability");
   }else
   {
      PA_Door value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_ACandDCChargeLidStatus.setValue(value);
   }
}


void initpa_notificationFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_NotificationList", (long)&funcPA_NotificationList));
   mFuncPtr.insert(make_pair<string, long>("PA_NotificationCheckList", (long)&funcPA_NotificationCheckList));
   mFuncPtr.insert(make_pair<string, long>("PA_NotiConfirmButton", (long)&funcPA_NotiConfirmButton));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_DriverDoorStatus", (long)&funcPA_DIM_DriverDoorStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_PassengerDoorStatus", (long)&funcPA_DIM_PassengerDoorStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_DriverRearDoorStatus", (long)&funcPA_DIM_DriverRearDoorStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_PassengerRearDoorStatus", (long)&funcPA_DIM_PassengerRearDoorStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_HoodStatus", (long)&funcPA_DIM_HoodStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_TrunkStatus", (long)&funcPA_DIM_TrunkStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_TankFlapStatus", (long)&funcPA_DIM_TankFlapStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_ACChargeLidStatus", (long)&funcPA_DIM_ACChargeLidStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_DCChargeLidStatus", (long)&funcPA_DIM_DCChargeLidStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_ACandDCChargeLidStatus", (long)&funcPA_DIM_ACandDCChargeLidStatus));
}
