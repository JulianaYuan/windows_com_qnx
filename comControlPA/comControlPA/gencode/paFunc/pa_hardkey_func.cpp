#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_hardkey.h"
#include <vector>
using namespace std;
void* funcPA_LeftSteerWhlTopKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlTopKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlTopKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlBottomKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlBottomKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlBottomKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlRiKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlRiKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlRiKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlLeKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlLeKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlLeKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlConfirmKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlConfirmKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlConfirmKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlTiGapKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlTiGapKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlTiGapKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlViewKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlViewKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlViewKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlResuKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlResuKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlResuKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlCancleKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlCancleKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlCancleKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhADASKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhADASKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhADASKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlTiGapCtrlr(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlTiGapCtrlr status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlTiGapCtrlr.setValue(value);
   }
}
void* funcPA_LeftSteerWhlAPAKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlAPAKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlAPAKey.setValue(value);
   }
}
void* funcPA_LeftSteerWhlHozlSwp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlHozlSwp status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlHozlSwp.setValue(value);
   }
}
void* funcPA_LeftSteerWhlVertSwp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftSteerWhlVertSwp status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_LeftSteerWhlVertSwp.setValue(value);
   }
}
void* funcPA_RightSteerWhlTopKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlTopKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlTopKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlBottomKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlBottomKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlBottomKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlLeKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlLeKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlLeKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlRiKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlRiKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlRiKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlRollKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlRollKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlRollKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlConfirmKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlConfirmKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlConfirmKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlVRKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlVRKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlVRKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlMenuKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlMenuKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlMenuKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlCustomDefdKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlCustomDefdKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlCustomDefdKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlMuteKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlMuteKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlMuteKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlVertMove(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlVertMove status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlVertMove.setValue(value);
   }
}
void* funcPA_RightSteerWhlHozlSwp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlHozlSwp status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlHozlSwp.setValue(value);
   }
}
void* funcPA_RightSteerWhlVertSwp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlVertSwp status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlVertSwp.setValue(value);
   }
}
void* funcPA_RightSteerWhlTripKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlTripKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlTripKey.setValue(value);
   }
}
void* funcPA_RightSteerWhlWeChatKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightSteerWhlWeChatKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_RightSteerWhlWeChatKey.setValue(value);
   }
}
void* funcPA_SngTripKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SngTripKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_SngTripKey.setValue(value);
   }
}
void* funcPA_DrvrModPadl(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DrvrModPadl status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_DrvrModPadl.setValue(value);
   }
}
void* funcPA_CustomDefKey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_CustomDefKey status availability value");
   }else
   {
      PA_Hardkey value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.value = atoi(argv[4]);
      PA_CustomDefKey.setValue(value);
   }
}
void* funcPA_SteerPosnAdjmtCtrl(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SteerPosnAdjmtCtrl value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_SteerPosnAdjmtCtrl.setValue(value);
   }
}
void* funcPA_HMI_VibrationFbToSwtp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_HMI_VibrationFbToSwtp type data");
   }else
   {
      PA_Vibration value;
      value.type = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_HMI_VibrationFbToSwtp.setValue(value);
   }
}
void* funcPA_RiTopReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiTopReq value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_RiTopReq.setValue(value);
   }
}
void* funcPA_RiDownReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiDownReq value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_RiDownReq.setValue(value);
   }
}
void* funcPA_RiLeftReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiLeftReq value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_RiLeftReq.setValue(value);
   }
}
void* funcPA_RiRightReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiRightReq value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_RiRightReq.setValue(value);
   }
}
void* funcPA_BtnConfiReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BtnConfiReq value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_BtnConfiReq.setValue(value);
   }
}
void* funcPA_SteerAdjSwtUpSts(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SteerAdjSwtUpSts value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_SteerAdjSwtUpSts.setValue(value);
   }
}
void* funcPA_SteerAdjSwtDwnSts(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SteerAdjSwtDwnSts value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_SteerAdjSwtDwnSts.setValue(value);
   }
}
void* funcPA_SteerAdjSwtFwdSts(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SteerAdjSwtFwdSts value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_SteerAdjSwtFwdSts.setValue(value);
   }
}
void* funcPA_SteerAdjSwtBackSts(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SteerAdjSwtBackSts value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_SteerAdjSwtBackSts.setValue(value);
   }
}


void initpa_hardkeyFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlTopKey", (long)&funcPA_LeftSteerWhlTopKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlBottomKey", (long)&funcPA_LeftSteerWhlBottomKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlRiKey", (long)&funcPA_LeftSteerWhlRiKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlLeKey", (long)&funcPA_LeftSteerWhlLeKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlConfirmKey", (long)&funcPA_LeftSteerWhlConfirmKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlTiGapKey", (long)&funcPA_LeftSteerWhlTiGapKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlViewKey", (long)&funcPA_LeftSteerWhlViewKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlResuKey", (long)&funcPA_LeftSteerWhlResuKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlCancleKey", (long)&funcPA_LeftSteerWhlCancleKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhADASKey", (long)&funcPA_LeftSteerWhADASKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlTiGapCtrlr", (long)&funcPA_LeftSteerWhlTiGapCtrlr));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlAPAKey", (long)&funcPA_LeftSteerWhlAPAKey));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlHozlSwp", (long)&funcPA_LeftSteerWhlHozlSwp));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftSteerWhlVertSwp", (long)&funcPA_LeftSteerWhlVertSwp));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlTopKey", (long)&funcPA_RightSteerWhlTopKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlBottomKey", (long)&funcPA_RightSteerWhlBottomKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlLeKey", (long)&funcPA_RightSteerWhlLeKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlRiKey", (long)&funcPA_RightSteerWhlRiKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlRollKey", (long)&funcPA_RightSteerWhlRollKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlConfirmKey", (long)&funcPA_RightSteerWhlConfirmKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlVRKey", (long)&funcPA_RightSteerWhlVRKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlMenuKey", (long)&funcPA_RightSteerWhlMenuKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlCustomDefdKey", (long)&funcPA_RightSteerWhlCustomDefdKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlMuteKey", (long)&funcPA_RightSteerWhlMuteKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlVertMove", (long)&funcPA_RightSteerWhlVertMove));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlHozlSwp", (long)&funcPA_RightSteerWhlHozlSwp));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlVertSwp", (long)&funcPA_RightSteerWhlVertSwp));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlTripKey", (long)&funcPA_RightSteerWhlTripKey));
   mFuncPtr.insert(make_pair<string, long>("PA_RightSteerWhlWeChatKey", (long)&funcPA_RightSteerWhlWeChatKey));
   mFuncPtr.insert(make_pair<string, long>("PA_SngTripKey", (long)&funcPA_SngTripKey));
   mFuncPtr.insert(make_pair<string, long>("PA_DrvrModPadl", (long)&funcPA_DrvrModPadl));
   mFuncPtr.insert(make_pair<string, long>("PA_CustomDefKey", (long)&funcPA_CustomDefKey));
   mFuncPtr.insert(make_pair<string, long>("PA_SteerPosnAdjmtCtrl", (long)&funcPA_SteerPosnAdjmtCtrl));
   mFuncPtr.insert(make_pair<string, long>("PA_HMI_VibrationFbToSwtp", (long)&funcPA_HMI_VibrationFbToSwtp));
   mFuncPtr.insert(make_pair<string, long>("PA_RiTopReq", (long)&funcPA_RiTopReq));
   mFuncPtr.insert(make_pair<string, long>("PA_RiDownReq", (long)&funcPA_RiDownReq));
   mFuncPtr.insert(make_pair<string, long>("PA_RiLeftReq", (long)&funcPA_RiLeftReq));
   mFuncPtr.insert(make_pair<string, long>("PA_RiRightReq", (long)&funcPA_RiRightReq));
   mFuncPtr.insert(make_pair<string, long>("PA_BtnConfiReq", (long)&funcPA_BtnConfiReq));
   mFuncPtr.insert(make_pair<string, long>("PA_SteerAdjSwtUpSts", (long)&funcPA_SteerAdjSwtUpSts));
   mFuncPtr.insert(make_pair<string, long>("PA_SteerAdjSwtDwnSts", (long)&funcPA_SteerAdjSwtDwnSts));
   mFuncPtr.insert(make_pair<string, long>("PA_SteerAdjSwtFwdSts", (long)&funcPA_SteerAdjSwtFwdSts));
   mFuncPtr.insert(make_pair<string, long>("PA_SteerAdjSwtBackSts", (long)&funcPA_SteerAdjSwtBackSts));
}
