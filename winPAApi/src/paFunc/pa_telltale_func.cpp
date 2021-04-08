#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_telltale.h"
#include <vector>
using namespace std;
void* funcPA_AFSLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_AFSLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_AFSLamp.setValue(value);
   }
}
void* funcPA_PositionLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_PositionLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_PositionLamp.setValue(value);
   }
}
void* funcPA_HighBeamLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_HighBeamLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_HighBeamLamp.setValue(value);
   }
}
void* funcPA_LowBeamLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LowBeamLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_LowBeamLamp.setValue(value);
   }
}
void* funcPA_ABLLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ABLLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_ABLLamp.setValue(value);
   }
}
void* funcPA_ManualLevelingLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ManualLevelingLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_ManualLevelingLamp.setValue(value);
   }
}
void* funcPA_FrontFogLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_FrontFogLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_FrontFogLamp.setValue(value);
   }
}
void* funcPA_RearFogLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RearFogLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_RearFogLamp.setValue(value);
   }
}
void* funcPA_TurnLeftLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TurnLeftLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_TurnLeftLamp.setValue(value);
   }
}
void* funcPA_TurnRightLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TurnRightLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_TurnRightLamp.setValue(value);
   }
}
void* funcPA_BrakeLightFailure(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BrakeLightFailure availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BrakeLightFailure.setValue(value);
   }
}
void* funcPA_AHBCLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_AHBCLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_AHBCLamp.setValue(value);
   }
}
void* funcPA_DIM_ReadyLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_ReadyLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_ReadyLamp.setValue(value);
   }
}
void* funcPA_DIM_CheckEngineLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_CheckEngineLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_CheckEngineLamp.setValue(value);
   }
}
void* funcPA_BATT_BatteryLowIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BATT_BatteryLowIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BATT_BatteryLowIndicator.setValue(value);
   }
}
void* funcPA_BATT_BatteryFailureIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BATT_BatteryFailureIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BATT_BatteryFailureIndicator.setValue(value);
   }
}
void* funcPA_BATT_ChargingHandleIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BATT_ChargingHandleIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BATT_ChargingHandleIndicator.setValue(value);
   }
}
void* funcPA_DIM_OilPressureLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_OilPressureLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_OilPressureLamp.setValue(value);
   }
}
void* funcPA_DIM_PowerLimitationLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_PowerLimitationLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_PowerLimitationLamp.setValue(value);
   }
}
void* funcPA_DIM_SystemFaultLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_SystemFaultLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_SystemFaultLamp.setValue(value);
   }
}
void* funcPA_DIM_ElectricalMachineErrorLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_ElectricalMachineErrorLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_ElectricalMachineErrorLamp.setValue(value);
   }
}
void* funcPA_DIM_SRSLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_SRSLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_SRSLamp.setValue(value);
   }
}
void* funcPA_BRK_ESCIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_ESCIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_ESCIndicator.setValue(value);
   }
}
void* funcPA_BRK_EscSportIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_EscSportIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_EscSportIndicator.setValue(value);
   }
}
void* funcPA_BRK_ABSIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_ABSIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_ABSIndicator.setValue(value);
   }
}
void* funcPA_BRK_HDCWhiteIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_HDCWhiteIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_HDCWhiteIndicator.setValue(value);
   }
}
void* funcPA_BRK_HDCGreenIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_HDCGreenIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_HDCGreenIndicator.setValue(value);
   }
}
void* funcPA_BRK_HDCYellowIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_HDCYellowIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_HDCYellowIndicator.setValue(value);
   }
}
void* funcPA_BRK_BrakeReleaseIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_BrakeReleaseIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_BrakeReleaseIndicator.setValue(value);
   }
}
void* funcPA_BRK_EPBIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_EPBIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_EPBIndicator.setValue(value);
   }
}
void* funcPA_BRK_BrakeYellowIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_BrakeYellowIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_BrakeYellowIndicator.setValue(value);
   }
}
void* funcPA_BRK_BrakeRedIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_BrakeRedIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_BrakeRedIndicator.setValue(value);
   }
}
void* funcPA_BRK_AutoHoldIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BRK_AutoHoldIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_BRK_AutoHoldIndicator.setValue(value);
   }
}
void* funcPA_DIM_EngineCoolantWarningLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_EngineCoolantWarningLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_EngineCoolantWarningLamp.setValue(value);
   }
}
void* funcPA_TowbarUnlockLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TowbarUnlockLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_TowbarUnlockLamp.setValue(value);
   }
}
void* funcPA_TrailerLightStatusLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TrailerLightStatusLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_TrailerLightStatusLamp.setValue(value);
   }
}
void* funcPA_TrailerServiceLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TrailerServiceLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_TrailerServiceLamp.setValue(value);
   }
}
void* funcPA_DIM_StartStopLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_StartStopLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_StartStopLamp.setValue(value);
   }
}
void* funcPA_LVE_BatteryIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LVE_BatteryIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_LVE_BatteryIndicator.setValue(value);
   }
}
void* funcPA_DIM_LeftChildLockStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_LeftChildLockStatus availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_LeftChildLockStatus.setValue(value);
   }
}
void* funcPA_DIM_RightChildLockStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_RightChildLockStatus availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_RightChildLockStatus.setValue(value);
   }
}
void* funcPA_TIR_TirePressureFault(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TIR_TirePressureFault availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_TIR_TirePressureFault.setValue(value);
   }
}
void* funcPA_SteeringIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SteeringIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SteeringIndicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionYellowIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionYellowIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionYellowIndicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionRedIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionRedIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionRedIndicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionMovingUpIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionMovingUpIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionMovingUpIndicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionMovingDownIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionMovingDownIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionMovingDownIndicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionStopIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionStopIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionStopIndicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionCurrentLevelLL1Indicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionCurrentLevelLL1Indicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionCurrentLevelLL1Indicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionCurrentLevelLL2Indicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionCurrentLevelLL2Indicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionCurrentLevelLL2Indicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionCurrentLevelNRHIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionCurrentLevelNRHIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionCurrentLevelNRHIndicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionCurrentLevelHL1Indicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionCurrentLevelHL1Indicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionCurrentLevelHL1Indicator.setValue(value);
   }
}
void* funcPA_SUSP_SuspensionCurrentLevelHL2Indicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SUSP_SuspensionCurrentLevelHL2Indicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SUSP_SuspensionCurrentLevelHL2Indicator.setValue(value);
   }
}
void* funcPA_DPS_coffeecup_lamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DPS_coffeecup_lamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DPS_coffeecup_lamp.setValue(value);
   }
}
void* funcPA_DIM_ExternalArtIficialSoundLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_ExternalArtIficialSoundLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_ExternalArtIficialSoundLamp.setValue(value);
   }
}
void* funcPA_DIM_ParkingEmergencyBrakeLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_ParkingEmergencyBrakeLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_DIM_ParkingEmergencyBrakeLamp.setValue(value);
   }
}
void* funcPA_EPWISt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_EPWISt availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_EPWISt.setValue(value);
   }
}
void* funcPA_EPWIStUS(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_EPWIStUS availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_EPWIStUS.setValue(value);
   }
}
void* funcPA_RWSIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RWSIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_RWSIndicator.setValue(value);
   }
}
void* funcPA_EpedalIndicator(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_EpedalIndicator availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_EpedalIndicator.setValue(value);
   }
}
void* funcPA_Seatbelt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_Seatbelt.setValue(value);
   }
}
void* funcPA_SVSLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SVSLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_SVSLamp.setValue(value);
   }
}
void* funcPA_TCMLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TCMLamp availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_TCMLamp.setValue(value);
   }
}
void* funcPA_OLI_OilLevelIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_OLI_OilLevelIndicated availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      PA_OLI_OilLevelIndicated.setValue(value);
   }
}
void* funcPA_Seatbelt_Driver(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_Driver value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_Driver.setValue(value);
   }
}
void* funcPA_Seatbelt_Passenger(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_Passenger value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_Passenger.setValue(value);
   }
}
void* funcPA_Seatbelt_MidPassenger(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_MidPassenger value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_MidPassenger.setValue(value);
   }
}
void* funcPA_Seatbelt_SecLeft(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_SecLeft value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_SecLeft.setValue(value);
   }
}
void* funcPA_Seatbelt_SecMid(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_SecMid value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_SecMid.setValue(value);
   }
}
void* funcPA_Seatbelt_SecRight(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_SecRight value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_SecRight.setValue(value);
   }
}
void* funcPA_Seatbelt_ThrdLeft(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_ThrdLeft value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_ThrdLeft.setValue(value);
   }
}
void* funcPA_Seatbelt_ThrdMid(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_ThrdMid value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_ThrdMid.setValue(value);
   }
}
void* funcPA_Seatbelt_ThrdRight(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_ThrdRight value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_ThrdRight.setValue(value);
   }
}
void* funcPA_Seatbelt_FrthLeft(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_FrthLeft value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_FrthLeft.setValue(value);
   }
}
void* funcPA_Seatbelt_FrthMid(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_FrthMid value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_FrthMid.setValue(value);
   }
}
void* funcPA_Seatbelt_FrthRight(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_FrthRight value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_FrthRight.setValue(value);
   }
}
void* funcCPA_UsgModSts(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi CPA_UsgModSts availability data");
   }else
   {
      PA_Telltale value;
      value.availability = atoi(argv[2]);
      value.data = atoi(argv[3]);
      CPA_UsgModSts.setValue(value);
   }
}
void* funcCPA_Carconfig8(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi CPA_Carconfig8 value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      CPA_Carconfig8.setValue(value);
   }
}
void* funcPA_Seatbelt_output(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Seatbelt_output value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Seatbelt_output.setValue(value);
   }
}


void initpa_telltaleFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_AFSLamp", (long)&funcPA_AFSLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_PositionLamp", (long)&funcPA_PositionLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_HighBeamLamp", (long)&funcPA_HighBeamLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_LowBeamLamp", (long)&funcPA_LowBeamLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_ABLLamp", (long)&funcPA_ABLLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_ManualLevelingLamp", (long)&funcPA_ManualLevelingLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_FrontFogLamp", (long)&funcPA_FrontFogLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_RearFogLamp", (long)&funcPA_RearFogLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_TurnLeftLamp", (long)&funcPA_TurnLeftLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_TurnRightLamp", (long)&funcPA_TurnRightLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_BrakeLightFailure", (long)&funcPA_BrakeLightFailure));
   mFuncPtr.insert(make_pair<string, long>("PA_AHBCLamp", (long)&funcPA_AHBCLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_ReadyLamp", (long)&funcPA_DIM_ReadyLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_CheckEngineLamp", (long)&funcPA_DIM_CheckEngineLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_BATT_BatteryLowIndicator", (long)&funcPA_BATT_BatteryLowIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BATT_BatteryFailureIndicator", (long)&funcPA_BATT_BatteryFailureIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BATT_ChargingHandleIndicator", (long)&funcPA_BATT_ChargingHandleIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_OilPressureLamp", (long)&funcPA_DIM_OilPressureLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_PowerLimitationLamp", (long)&funcPA_DIM_PowerLimitationLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_SystemFaultLamp", (long)&funcPA_DIM_SystemFaultLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_ElectricalMachineErrorLamp", (long)&funcPA_DIM_ElectricalMachineErrorLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_SRSLamp", (long)&funcPA_DIM_SRSLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_ESCIndicator", (long)&funcPA_BRK_ESCIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_EscSportIndicator", (long)&funcPA_BRK_EscSportIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_ABSIndicator", (long)&funcPA_BRK_ABSIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_HDCWhiteIndicator", (long)&funcPA_BRK_HDCWhiteIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_HDCGreenIndicator", (long)&funcPA_BRK_HDCGreenIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_HDCYellowIndicator", (long)&funcPA_BRK_HDCYellowIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_BrakeReleaseIndicator", (long)&funcPA_BRK_BrakeReleaseIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_EPBIndicator", (long)&funcPA_BRK_EPBIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_BrakeYellowIndicator", (long)&funcPA_BRK_BrakeYellowIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_BrakeRedIndicator", (long)&funcPA_BRK_BrakeRedIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_BRK_AutoHoldIndicator", (long)&funcPA_BRK_AutoHoldIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_EngineCoolantWarningLamp", (long)&funcPA_DIM_EngineCoolantWarningLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_TowbarUnlockLamp", (long)&funcPA_TowbarUnlockLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_TrailerLightStatusLamp", (long)&funcPA_TrailerLightStatusLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_TrailerServiceLamp", (long)&funcPA_TrailerServiceLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_StartStopLamp", (long)&funcPA_DIM_StartStopLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_LVE_BatteryIndicator", (long)&funcPA_LVE_BatteryIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_LeftChildLockStatus", (long)&funcPA_DIM_LeftChildLockStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_RightChildLockStatus", (long)&funcPA_DIM_RightChildLockStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_TIR_TirePressureFault", (long)&funcPA_TIR_TirePressureFault));
   mFuncPtr.insert(make_pair<string, long>("PA_SteeringIndicator", (long)&funcPA_SteeringIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionYellowIndicator", (long)&funcPA_SUSP_SuspensionYellowIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionRedIndicator", (long)&funcPA_SUSP_SuspensionRedIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionMovingUpIndicator", (long)&funcPA_SUSP_SuspensionMovingUpIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionMovingDownIndicator", (long)&funcPA_SUSP_SuspensionMovingDownIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionStopIndicator", (long)&funcPA_SUSP_SuspensionStopIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionCurrentLevelLL1Indicator", (long)&funcPA_SUSP_SuspensionCurrentLevelLL1Indicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionCurrentLevelLL2Indicator", (long)&funcPA_SUSP_SuspensionCurrentLevelLL2Indicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionCurrentLevelNRHIndicator", (long)&funcPA_SUSP_SuspensionCurrentLevelNRHIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionCurrentLevelHL1Indicator", (long)&funcPA_SUSP_SuspensionCurrentLevelHL1Indicator));
   mFuncPtr.insert(make_pair<string, long>("PA_SUSP_SuspensionCurrentLevelHL2Indicator", (long)&funcPA_SUSP_SuspensionCurrentLevelHL2Indicator));
   mFuncPtr.insert(make_pair<string, long>("PA_DPS_coffeecup_lamp", (long)&funcPA_DPS_coffeecup_lamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_ExternalArtIficialSoundLamp", (long)&funcPA_DIM_ExternalArtIficialSoundLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_ParkingEmergencyBrakeLamp", (long)&funcPA_DIM_ParkingEmergencyBrakeLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_EPWISt", (long)&funcPA_EPWISt));
   mFuncPtr.insert(make_pair<string, long>("PA_EPWIStUS", (long)&funcPA_EPWIStUS));
   mFuncPtr.insert(make_pair<string, long>("PA_RWSIndicator", (long)&funcPA_RWSIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_EpedalIndicator", (long)&funcPA_EpedalIndicator));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt", (long)&funcPA_Seatbelt));
   mFuncPtr.insert(make_pair<string, long>("PA_SVSLamp", (long)&funcPA_SVSLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_TCMLamp", (long)&funcPA_TCMLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_OLI_OilLevelIndicated", (long)&funcPA_OLI_OilLevelIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_Driver", (long)&funcPA_Seatbelt_Driver));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_Passenger", (long)&funcPA_Seatbelt_Passenger));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_MidPassenger", (long)&funcPA_Seatbelt_MidPassenger));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_SecLeft", (long)&funcPA_Seatbelt_SecLeft));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_SecMid", (long)&funcPA_Seatbelt_SecMid));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_SecRight", (long)&funcPA_Seatbelt_SecRight));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_ThrdLeft", (long)&funcPA_Seatbelt_ThrdLeft));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_ThrdMid", (long)&funcPA_Seatbelt_ThrdMid));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_ThrdRight", (long)&funcPA_Seatbelt_ThrdRight));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_FrthLeft", (long)&funcPA_Seatbelt_FrthLeft));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_FrthMid", (long)&funcPA_Seatbelt_FrthMid));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_FrthRight", (long)&funcPA_Seatbelt_FrthRight));
   mFuncPtr.insert(make_pair<string, long>("CPA_UsgModSts", (long)&funcCPA_UsgModSts));
   mFuncPtr.insert(make_pair<string, long>("CPA_Carconfig8", (long)&funcCPA_Carconfig8));
   mFuncPtr.insert(make_pair<string, long>("PA_Seatbelt_output", (long)&funcPA_Seatbelt_output));
}
