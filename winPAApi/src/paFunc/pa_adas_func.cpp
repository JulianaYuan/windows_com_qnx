#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_adas.h"
#include <vector>
using namespace std;
void* funcPA_AEB_lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_AEB_lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_AEB_lamp.setValue(value);
   }
}
void* funcPA_FCTAleft_animation(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_FCTAleft_animation status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_FCTAleft_animation.setValue(value);
   }
}
void* funcPA_FCTARight_animation(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_FCTARight_animation status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_FCTARight_animation.setValue(value);
   }
}
void* funcPA_FCTA_HUDwarning_Picture(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_FCTA_HUDwarning_Picture status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_FCTA_HUDwarning_Picture.setValue(value);
   }
}
void* funcPA_RCW_animation(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RCW_animation status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_RCW_animation.setValue(value);
   }
}
void* funcPA_RsdsSysSts_Lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RsdsSysSts_Lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_RsdsSysSts_Lamp.setValue(value);
   }
}
void* funcPA_ELOW_EmgyLane(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ELOW_EmgyLane data status availability");
   }else
   {
      PA_ema value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_ELOW_EmgyLane.setValue(value);
   }
}
void* funcPA_Callback_DPS(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Callback_DPS value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Callback_DPS.setValue(value);
   }
}
void* funcPA_TLA_Lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TLA_Lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_TLA_Lamp.setValue(value);
   }
}
void* funcPA_CC_Mode(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_CC_Mode status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_CC_Mode.setValue(value);
   }
}
void* funcPA_CC_lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_CC_lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_CC_lamp.setValue(value);
   }
}
void* funcPA_CC_target_bar(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_CC_target_bar data status availability");
   }else
   {
      PA_Targetbar value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_CC_target_bar.setValue(value);
   }
}
void* funcPA_CC_SetSpeed(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+5))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_CC_SetSpeed data status format feedback availability");
   }else
   {
      PA_CC_Speed value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.format = atoi(argv[4]);
      value.feedback = atoi(argv[5]);
      value.availability = atoi(argv[6]);
      PA_CC_SetSpeed.setValue(value);
   }
}
void* funcPA_First_speedlimt_icon(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_First_speedlimt_icon status value position reserve");
   }else
   {
      PA_speedlimt_icon value;
      value.status = atoi(argv[2]);
      value.value = atoi(argv[3]);
      value.position = atoi(argv[4]);
      value.reserve = atoi(argv[5]);
      PA_First_speedlimt_icon.setValue(value);
   }
}
void* funcPA_Second_speedlimt_icon(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Second_speedlimt_icon status value position reserve");
   }else
   {
      PA_speedlimt_icon value;
      value.status = atoi(argv[2]);
      value.value = atoi(argv[3]);
      value.position = atoi(argv[4]);
      value.reserve = atoi(argv[5]);
      PA_Second_speedlimt_icon.setValue(value);
   }
}
void* funcPA_First_speedlimt_supplement_icon(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_First_speedlimt_supplement_icon status position");
   }else
   {
      PA_traffic_icon value;
      value.status = atoi(argv[2]);
      value.position = atoi(argv[3]);
      PA_First_speedlimt_supplement_icon.setValue(value);
   }
}
void* funcPA_Traffic_sign_icon(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Traffic_sign_icon status position");
   }else
   {
      PA_traffic_icon value;
      value.status = atoi(argv[2]);
      value.position = atoi(argv[3]);
      PA_Traffic_sign_icon.setValue(value);
   }
}
void* funcPA_Camera_sign_icon(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Camera_sign_icon status position");
   }else
   {
      PA_traffic_icon value;
      value.status = atoi(argv[2]);
      value.position = atoi(argv[3]);
      PA_Camera_sign_icon.setValue(value);
   }
}
void* funcPA_Entrance_Exit_sign_icon(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Entrance_Exit_sign_icon value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Entrance_Exit_sign_icon.setValue(value);
   }
}
void* funcPA_TSI_speed_dial_icon(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TSI_speed_dial_icon location status reserve");
   }else
   {
      PA_tsi value;
      value.location = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      PA_TSI_speed_dial_icon.setValue(value);
   }
}
void* funcCPA_CtryForRoadSgnInfo(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi CPA_CtryForRoadSgnInfo value timeout ub");
   }else
   {
      PA_adas_6bit value;
      value.value = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      value.ub = atoi(argv[4]);
      CPA_CtryForRoadSgnInfo.setValue(value);
   }
}
void* funcPA_LCA_left_Animation(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LCA_left_Animation status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_LCA_left_Animation.setValue(value);
   }
}
void* funcPA_LCA_right_Animation(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LCA_right_Animation status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_LCA_right_Animation.setValue(value);
   }
}
void* funcPA_LeftLine(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftLine data color status availability");
   }else
   {
      PA_line value;
      value.data = atoi(argv[2]);
      value.color = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_LeftLine.setValue(value);
   }
}
void* funcPA_LeftLine2(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftLine2 data color status availability");
   }else
   {
      PA_line value;
      value.data = atoi(argv[2]);
      value.color = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_LeftLine2.setValue(value);
   }
}
void* funcPA_RightLine(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightLine data color status availability");
   }else
   {
      PA_line value;
      value.data = atoi(argv[2]);
      value.color = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_RightLine.setValue(value);
   }
}
void* funcPA_RightLine2(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightLine2 data color status availability");
   }else
   {
      PA_line value;
      value.data = atoi(argv[2]);
      value.color = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_RightLine2.setValue(value);
   }
}
void* funcPA_LKA_lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LKA_lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_LKA_lamp.setValue(value);
   }
}
void* funcPA_ASL_lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ASL_lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ASL_lamp.setValue(value);
   }
}
void* funcPA_ASL_SetSpeed(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ASL_SetSpeed data format display availability");
   }else
   {
      PA_ASL_Speed value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.display = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_ASL_SetSpeed.setValue(value);
   }
}
void* funcPA_ACC_lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ACC_lamp.setValue(value);
   }
}
void* funcPA_ACC_Timegap(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_Timegap data format status availability");
   }else
   {
      PA_timegap value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_ACC_Timegap.setValue(value);
   }
}
void* funcPA_ACC_AdjustTimeGap(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_AdjustTimeGap status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ACC_AdjustTimeGap.setValue(value);
   }
}
void* funcPS_ACC_TargetBar(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PS_ACC_TargetBar data status availability");
   }else
   {
      PA_Targetbar value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PS_ACC_TargetBar.setValue(value);
   }
}
void* funcPA_ACC_SetSpeed(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+6))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_SetSpeed status data type format reserve availability");
   }else
   {
      PA_ACC_Speed value;
      value.status = atoi(argv[2]);
      value.data = atoi(argv[3]);
      value.type = atoi(argv[4]);
      value.format = atoi(argv[5]);
      value.reserve = atoi(argv[6]);
      value.availability = atoi(argv[7]);
      PA_ACC_SetSpeed.setValue(value);
   }
}
void* funcPA_ACC_AdjustSetSpeed(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_AdjustSetSpeed status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ACC_AdjustSetSpeed.setValue(value);
   }
}
void* funcPA_ACC_FrontObj1(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_FrontObj1 Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_ACC_FrontObj1.setValue(value);
   }
}
void* funcPA_ACC_FrontObj2(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_FrontObj2 Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_ACC_FrontObj2.setValue(value);
   }
}
void* funcPA_ACC_FrntLeObj(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_FrntLeObj Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_ACC_FrntLeObj.setValue(value);
   }
}
void* funcPA_ACC_FrntRiObj(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ACC_FrntRiObj Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_ACC_FrntRiObj.setValue(value);
   }
}
void* funcPA_SC_Override(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SC_Override status data format availability");
   }else
   {
      PA_override value;
      value.status = atoi(argv[2]);
      value.data = atoi(argv[3]);
      value.format = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_SC_Override.setValue(value);
   }
}
void* funcPA_GpilotStatus_Lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_GpilotStatus_Lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_GpilotStatus_Lamp.setValue(value);
   }
}
void* funcPA_GpilotHandOff_Lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_GpilotHandOff_Lamp status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_GpilotHandOff_Lamp.setValue(value);
   }
}
void* funcPA_Gpilot_FrntObj1(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_FrntObj1 Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_Gpilot_FrntObj1.setValue(value);
   }
}
void* funcPA_Gpilot_FrntObj2(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_FrntObj2 Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_Gpilot_FrntObj2.setValue(value);
   }
}
void* funcPA_Gpilot_FrntLeObj(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_FrntLeObj Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_Gpilot_FrntLeObj.setValue(value);
   }
}
void* funcPA_Gpilot_FrntLeObj2(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_FrntLeObj2 Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_Gpilot_FrntLeObj2.setValue(value);
   }
}
void* funcPA_Gpilot_FrntRiObj(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_FrntRiObj Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_Gpilot_FrntRiObj.setValue(value);
   }
}
void* funcPA_Gpilot_FrntRiObj2(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+7))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_FrntRiObj2 Dx Dy color heading status reserve availability");
   }else
   {
      PA_object value;
      value.Dx = atoi(argv[2]);
      value.Dy = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.heading = atoi(argv[5]);
      value.status = atoi(argv[6]);
      value.reserve = atoi(argv[7]);
      value.availability = atoi(argv[8]);
      PA_Gpilot_FrntRiObj2.setValue(value);
   }
}
void* funcPA_LeftLineRamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeftLineRamp data status reserve availability");
   }else
   {
      PA_ramp value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_LeftLineRamp.setValue(value);
   }
}
void* funcPA_Left2LineRamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Left2LineRamp data status reserve availability");
   }else
   {
      PA_ramp value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_Left2LineRamp.setValue(value);
   }
}
void* funcPA_RightLineRamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RightLineRamp data status reserve availability");
   }else
   {
      PA_ramp value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_RightLineRamp.setValue(value);
   }
}
void* funcPA_Right2LineRamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Right2LineRamp data status reserve availability");
   }else
   {
      PA_ramp value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_Right2LineRamp.setValue(value);
   }
}
void* funcPA_SelfLane(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SelfLane data status reserve availability");
   }else
   {
      PA_ramp value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_SelfLane.setValue(value);
   }
}
void* funcPA_BoundaryWarn(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BoundaryWarn status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_BoundaryWarn.setValue(value);
   }
}
void* funcPA_ADAS_Tunnel(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ADAS_Tunnel data status reserve availability");
   }else
   {
      PA_tunnel value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_ADAS_Tunnel.setValue(value);
   }
}
void* funcPA_Left_line_animation(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Left_line_animation status color availability");
   }else
   {
      PA_line_animation value;
      value.status = atoi(argv[2]);
      value.color = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_Left_line_animation.setValue(value);
   }
}
void* funcPA_Right_line_animation(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Right_line_animation status color availability");
   }else
   {
      PA_line_animation value;
      value.status = atoi(argv[2]);
      value.color = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_Right_line_animation.setValue(value);
   }
}
void* funcPA_ADAS_ODD(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ADAS_ODD status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ADAS_ODD.setValue(value);
   }
}
void* funcPA_LaneChange(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LaneChange status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_LaneChange.setValue(value);
   }
}
void* funcPA_Gpilot_TimeGap(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_TimeGap data format status availability");
   }else
   {
      PA_timegap value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_Gpilot_TimeGap.setValue(value);
   }
}
void* funcPA_Gpilot_AdjustTimeGap(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_AdjustTimeGap status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_Gpilot_AdjustTimeGap.setValue(value);
   }
}
void* funcPA_Gpilot_SetSpeed(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+6))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_SetSpeed status data type format reserve availability");
   }else
   {
      PA_ACC_Speed value;
      value.status = atoi(argv[2]);
      value.data = atoi(argv[3]);
      value.type = atoi(argv[4]);
      value.format = atoi(argv[5]);
      value.reserve = atoi(argv[6]);
      value.availability = atoi(argv[7]);
      PA_Gpilot_SetSpeed.setValue(value);
   }
}
void* funcPA_Gpilot_TargetBar(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_TargetBar data status availability");
   }else
   {
      PA_Targetbar value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_Gpilot_TargetBar.setValue(value);
   }
}
void* funcPA_Gpilot_AdjustSetSpeed(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_AdjustSetSpeed status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_Gpilot_AdjustSetSpeed.setValue(value);
   }
}
void* funcPA_Gpilot_DIMLight(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Gpilot_DIMLight status availability");
   }else
   {
      PA_ADAS value;
      value.status = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_Gpilot_DIMLight.setValue(value);
   }
}
void* funcPA_SCFunction_Menu(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+5))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SCFunction_Menu data type status reserve availability");
   }else
   {
      PA_Menu value;
      value.data = atoi(argv[2]);
      value.type = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.reserve = atoi(argv[5]);
      value.availability = atoi(argv[6]);
      PA_SCFunction_Menu.setValue(value);
   }
}
void* funcPA_Callback_SCFunction(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Callback_SCFunction value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Callback_SCFunction.setValue(value);
   }
}
void* funcPA_Internal_SCFunctionMode(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Internal_SCFunctionMode value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Internal_SCFunctionMode.setValue(value);
   }
}
void* funcPA_SCFunction_MenuConfig(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SCFunction_MenuConfig CC ASL ACC GPilot");
   }else
   {
      PA_config value;
      value.CC = atoi(argv[2]);
      value.ASL = atoi(argv[3]);
      value.ACC = atoi(argv[4]);
      value.GPilot = atoi(argv[5]);
      PA_SCFunction_MenuConfig.setValue(value);
   }
}
void* funcPA_Callback_AdjustMenu(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Callback_AdjustMenu value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Callback_AdjustMenu.setValue(value);
   }
}
void* funcPA_ADAS_Cursor_Position(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ADAS_Cursor_Position value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_ADAS_Cursor_Position.setValue(value);
   }
}


void initpa_adasFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_AEB_lamp", (long)&funcPA_AEB_lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_FCTAleft_animation", (long)&funcPA_FCTAleft_animation));
   mFuncPtr.insert(make_pair<string, long>("PA_FCTARight_animation", (long)&funcPA_FCTARight_animation));
   mFuncPtr.insert(make_pair<string, long>("PA_FCTA_HUDwarning_Picture", (long)&funcPA_FCTA_HUDwarning_Picture));
   mFuncPtr.insert(make_pair<string, long>("PA_RCW_animation", (long)&funcPA_RCW_animation));
   mFuncPtr.insert(make_pair<string, long>("PA_RsdsSysSts_Lamp", (long)&funcPA_RsdsSysSts_Lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_ELOW_EmgyLane", (long)&funcPA_ELOW_EmgyLane));
   mFuncPtr.insert(make_pair<string, long>("PA_Callback_DPS", (long)&funcPA_Callback_DPS));
   mFuncPtr.insert(make_pair<string, long>("PA_TLA_Lamp", (long)&funcPA_TLA_Lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_CC_Mode", (long)&funcPA_CC_Mode));
   mFuncPtr.insert(make_pair<string, long>("PA_CC_lamp", (long)&funcPA_CC_lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_CC_target_bar", (long)&funcPA_CC_target_bar));
   mFuncPtr.insert(make_pair<string, long>("PA_CC_SetSpeed", (long)&funcPA_CC_SetSpeed));
   mFuncPtr.insert(make_pair<string, long>("PA_First_speedlimt_icon", (long)&funcPA_First_speedlimt_icon));
   mFuncPtr.insert(make_pair<string, long>("PA_Second_speedlimt_icon", (long)&funcPA_Second_speedlimt_icon));
   mFuncPtr.insert(make_pair<string, long>("PA_First_speedlimt_supplement_icon", (long)&funcPA_First_speedlimt_supplement_icon));
   mFuncPtr.insert(make_pair<string, long>("PA_Traffic_sign_icon", (long)&funcPA_Traffic_sign_icon));
   mFuncPtr.insert(make_pair<string, long>("PA_Camera_sign_icon", (long)&funcPA_Camera_sign_icon));
   mFuncPtr.insert(make_pair<string, long>("PA_Entrance_Exit_sign_icon", (long)&funcPA_Entrance_Exit_sign_icon));
   mFuncPtr.insert(make_pair<string, long>("PA_TSI_speed_dial_icon", (long)&funcPA_TSI_speed_dial_icon));
   mFuncPtr.insert(make_pair<string, long>("CPA_CtryForRoadSgnInfo", (long)&funcCPA_CtryForRoadSgnInfo));
   mFuncPtr.insert(make_pair<string, long>("PA_LCA_left_Animation", (long)&funcPA_LCA_left_Animation));
   mFuncPtr.insert(make_pair<string, long>("PA_LCA_right_Animation", (long)&funcPA_LCA_right_Animation));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftLine", (long)&funcPA_LeftLine));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftLine2", (long)&funcPA_LeftLine2));
   mFuncPtr.insert(make_pair<string, long>("PA_RightLine", (long)&funcPA_RightLine));
   mFuncPtr.insert(make_pair<string, long>("PA_RightLine2", (long)&funcPA_RightLine2));
   mFuncPtr.insert(make_pair<string, long>("PA_LKA_lamp", (long)&funcPA_LKA_lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_ASL_lamp", (long)&funcPA_ASL_lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_ASL_SetSpeed", (long)&funcPA_ASL_SetSpeed));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_lamp", (long)&funcPA_ACC_lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_Timegap", (long)&funcPA_ACC_Timegap));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_AdjustTimeGap", (long)&funcPA_ACC_AdjustTimeGap));
   mFuncPtr.insert(make_pair<string, long>("PS_ACC_TargetBar", (long)&funcPS_ACC_TargetBar));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_SetSpeed", (long)&funcPA_ACC_SetSpeed));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_AdjustSetSpeed", (long)&funcPA_ACC_AdjustSetSpeed));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_FrontObj1", (long)&funcPA_ACC_FrontObj1));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_FrontObj2", (long)&funcPA_ACC_FrontObj2));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_FrntLeObj", (long)&funcPA_ACC_FrntLeObj));
   mFuncPtr.insert(make_pair<string, long>("PA_ACC_FrntRiObj", (long)&funcPA_ACC_FrntRiObj));
   mFuncPtr.insert(make_pair<string, long>("PA_SC_Override", (long)&funcPA_SC_Override));
   mFuncPtr.insert(make_pair<string, long>("PA_GpilotStatus_Lamp", (long)&funcPA_GpilotStatus_Lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_GpilotHandOff_Lamp", (long)&funcPA_GpilotHandOff_Lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_FrntObj1", (long)&funcPA_Gpilot_FrntObj1));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_FrntObj2", (long)&funcPA_Gpilot_FrntObj2));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_FrntLeObj", (long)&funcPA_Gpilot_FrntLeObj));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_FrntLeObj2", (long)&funcPA_Gpilot_FrntLeObj2));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_FrntRiObj", (long)&funcPA_Gpilot_FrntRiObj));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_FrntRiObj2", (long)&funcPA_Gpilot_FrntRiObj2));
   mFuncPtr.insert(make_pair<string, long>("PA_LeftLineRamp", (long)&funcPA_LeftLineRamp));
   mFuncPtr.insert(make_pair<string, long>("PA_Left2LineRamp", (long)&funcPA_Left2LineRamp));
   mFuncPtr.insert(make_pair<string, long>("PA_RightLineRamp", (long)&funcPA_RightLineRamp));
   mFuncPtr.insert(make_pair<string, long>("PA_Right2LineRamp", (long)&funcPA_Right2LineRamp));
   mFuncPtr.insert(make_pair<string, long>("PA_SelfLane", (long)&funcPA_SelfLane));
   mFuncPtr.insert(make_pair<string, long>("PA_BoundaryWarn", (long)&funcPA_BoundaryWarn));
   mFuncPtr.insert(make_pair<string, long>("PA_ADAS_Tunnel", (long)&funcPA_ADAS_Tunnel));
   mFuncPtr.insert(make_pair<string, long>("PA_Left_line_animation", (long)&funcPA_Left_line_animation));
   mFuncPtr.insert(make_pair<string, long>("PA_Right_line_animation", (long)&funcPA_Right_line_animation));
   mFuncPtr.insert(make_pair<string, long>("PA_ADAS_ODD", (long)&funcPA_ADAS_ODD));
   mFuncPtr.insert(make_pair<string, long>("PA_LaneChange", (long)&funcPA_LaneChange));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_TimeGap", (long)&funcPA_Gpilot_TimeGap));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_AdjustTimeGap", (long)&funcPA_Gpilot_AdjustTimeGap));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_SetSpeed", (long)&funcPA_Gpilot_SetSpeed));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_TargetBar", (long)&funcPA_Gpilot_TargetBar));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_AdjustSetSpeed", (long)&funcPA_Gpilot_AdjustSetSpeed));
   mFuncPtr.insert(make_pair<string, long>("PA_Gpilot_DIMLight", (long)&funcPA_Gpilot_DIMLight));
   mFuncPtr.insert(make_pair<string, long>("PA_SCFunction_Menu", (long)&funcPA_SCFunction_Menu));
   mFuncPtr.insert(make_pair<string, long>("PA_Callback_SCFunction", (long)&funcPA_Callback_SCFunction));
   mFuncPtr.insert(make_pair<string, long>("PA_Internal_SCFunctionMode", (long)&funcPA_Internal_SCFunctionMode));
   mFuncPtr.insert(make_pair<string, long>("PA_SCFunction_MenuConfig", (long)&funcPA_SCFunction_MenuConfig));
   mFuncPtr.insert(make_pair<string, long>("PA_Callback_AdjustMenu", (long)&funcPA_Callback_AdjustMenu));
   mFuncPtr.insert(make_pair<string, long>("PA_ADAS_Cursor_Position", (long)&funcPA_ADAS_Cursor_Position));
}
