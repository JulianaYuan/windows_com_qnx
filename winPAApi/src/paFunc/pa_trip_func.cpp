#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_trip.h"
#include <vector>
using namespace std;
void* funcPA_DGS_GearLvrIndcn(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DGS_GearLvrIndcn data availability");
   }else
   {
      PA_DGS_Gear value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DGS_GearLvrIndcn.setValue(value);
   }
}
void* funcPA_DGS_GearIndcn(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DGS_GearIndcn data availability");
   }else
   {
      PA_DGS_Gear value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DGS_GearIndcn.setValue(value);
   }
}
void* funcPA_DGS_GearShiftIndcn(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DGS_GearShiftIndcn data availability");
   }else
   {
      PA_DGS_Gear value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DGS_GearShiftIndcn.setValue(value);
   }
}
void* funcPA_DD_OdometerIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DD_OdometerIndicated data format status availability");
   }else
   {
      PA_ODO_TripMeter value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_DD_OdometerIndicated.setValue(value);
   }
}
void* funcPA_DD_OdometerTripMeter1(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DD_OdometerTripMeter1 data format status availability");
   }else
   {
      PA_ODO_TripMeter value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_DD_OdometerTripMeter1.setValue(value);
   }
}
void* funcPA_DD_OdometerTripMeter2(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DD_OdometerTripMeter2 data format status availability");
   }else
   {
      PA_ODO_TripMeter value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_DD_OdometerTripMeter2.setValue(value);
   }
}
void* funcPA_DD_TripMeterRadioButton(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DD_TripMeterRadioButton data format status availability");
   }else
   {
      PA_TripMeterRadioButton value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_DD_TripMeterRadioButton.setValue(value);
   }
}
void* funcPA_TC_DTEHVBattIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DTEHVBattIndicated data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_DTEHVBattIndicated.setValue(value);
   }
}
void* funcPA_TC_EDT1Indicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_EDT1Indicated data availability status");
   }else
   {
      PA_TC_EDTIndicated value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.status = atoi(argv[4]);
      PA_TC_EDT1Indicated.setValue(value);
   }
}
void* funcPA_TC_EDT2Indicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_EDT2Indicated data availability status");
   }else
   {
      PA_TC_EDTIndicated value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.status = atoi(argv[4]);
      PA_TC_EDT2Indicated.setValue(value);
   }
}
void* funcPA_TC_AVS1Indicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_AVS1Indicated data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_AVS1Indicated.setValue(value);
   }
}
void* funcPA_TC_AVS2Indicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_AVS2Indicated data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_AVS2Indicated.setValue(value);
   }
}
void* funcPA_TC_AEC1Indicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_AEC1Indicated data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_AEC1Indicated.setValue(value);
   }
}
void* funcPA_TC_AEC2Indicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_AEC2Indicated data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_AEC2Indicated.setValue(value);
   }
}
void* funcPA_TC_IECIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_IECIndicated data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_IECIndicated.setValue(value);
   }
}
void* funcPA_TC_Zero_Emission(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_Zero_Emission data availability status");
   }else
   {
      PA_TC_Zero value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      value.status = atoi(argv[4]);
      PA_TC_Zero_Emission.setValue(value);
   }
}
void* funcPA_TC_DTEIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+5))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DTEIndicated data format availability status triggered");
   }else
   {
      PA_TC_DTE value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      value.triggered = atoi(argv[6]);
      PA_TC_DTEIndicated.setValue(value);
   }
}
void* funcPA_TC_AFC1Indicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_AFC1Indicated data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_AFC1Indicated.setValue(value);
   }
}
void* funcPA_TC_AFC2Indicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_AFC2Indicated data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_AFC2Indicated.setValue(value);
   }
}
void* funcPA_TC_IFCIndicatedCalc(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_IFCIndicatedCalc data format availability status");
   }else
   {
      PA_TC value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      value.status = atoi(argv[5]);
      PA_TC_IFCIndicatedCalc.setValue(value);
   }
}
void* funcPA_ZeroEmissionTime(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ZeroEmissionTime data format availability");
   }else
   {
      PA_TC_EnergyPowerBenefit value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_ZeroEmissionTime.setValue(value);
   }
}
void* funcPA_SailingTime(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SailingTime data format availability");
   }else
   {
      PA_TC_SailingTime value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_SailingTime.setValue(value);
   }
}
void* funcPA_BoostTime(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BoostTime data format availability");
   }else
   {
      PA_TC_EnergyPowerBenefit value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_BoostTime.setValue(value);
   }
}
void* funcPA_EconomicalMileage(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_EconomicalMileage data format availability");
   }else
   {
      PA_TC_EnergyPowerBenefit value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_EconomicalMileage.setValue(value);
   }
}
void* funcPA_DIM_PHEVPowerFlowIndic(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_PHEVPowerFlowIndic data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_PHEVPowerFlowIndic.setValue(value);
   }
}
void* funcPA_DIM_BEVPowerFlowIndic(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_BEVPowerFlowIndic data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_BEVPowerFlowIndic.setValue(value);
   }
}
void* funcPA_DIM_BSGPowerFlowIndic(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_BSGPowerFlowIndic data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_BSGPowerFlowIndic.setValue(value);
   }
}
void* funcPA_DIM_HEVPowerFlowIndic(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_HEVPowerFlowIndic data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_HEVPowerFlowIndic.setValue(value);
   }
}
void* funcPA_ODT_TempIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ODT_TempIndicated data format reserve availability");
   }else
   {
      PA_OAT value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_ODT_TempIndicated.setValue(value);
   }
}
void* funcPA_ODT_SnowFlakeLit(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ODT_SnowFlakeLit data format reserve availability");
   }else
   {
      PA_OAT value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_ODT_SnowFlakeLit.setValue(value);
   }
}
void* funcPA_DIM_USAGE_MODE(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_USAGE_MODE data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_USAGE_MODE.setValue(value);
   }
}
void* funcPA_DIM_GpilotDisplay(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_GpilotDisplay data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_GpilotDisplay.setValue(value);
   }
}
void* funcPA_DIM_DriverDisplay(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_DriverDisplay data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_DriverDisplay.setValue(value);
   }
}
void* funcPA_DIM_DriverDisplayBg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_DriverDisplayBg data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_DriverDisplayBg.setValue(value);
   }
}
void* funcPA_DIM_DriverDisplayBg2(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_DriverDisplayBg2 data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DIM_DriverDisplayBg2.setValue(value);
   }
}
void* funcPA_LeFrntTireMsgP(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeFrntTireMsgP data format timeout availability");
   }else
   {
      PA_TireMsgP value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_LeFrntTireMsgP.setValue(value);
   }
}
void* funcPA_RiFrntTireMsgP(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiFrntTireMsgP data format timeout availability");
   }else
   {
      PA_TireMsgP value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_RiFrntTireMsgP.setValue(value);
   }
}
void* funcPA_LeReTireMsgP(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeReTireMsgP data format timeout availability");
   }else
   {
      PA_TireMsgP value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_LeReTireMsgP.setValue(value);
   }
}
void* funcPA_RiReTireMsgP(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiReTireMsgP data format timeout availability");
   }else
   {
      PA_TireMsgP value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_RiReTireMsgP.setValue(value);
   }
}
void* funcPA_LeFrntTireMsgT(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeFrntTireMsgT data format timeout availability");
   }else
   {
      PA_TireMsgT value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_LeFrntTireMsgT.setValue(value);
   }
}
void* funcPA_RiFrntTireMsgT(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiFrntTireMsgT data format timeout availability");
   }else
   {
      PA_TireMsgT value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_RiFrntTireMsgT.setValue(value);
   }
}
void* funcPA_LeReTireMsgT(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeReTireMsgT data format timeout availability");
   }else
   {
      PA_TireMsgT value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_LeReTireMsgT.setValue(value);
   }
}
void* funcPA_RiReTireMsgT(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiReTireMsgT data format timeout availability");
   }else
   {
      PA_TireMsgT value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_RiReTireMsgT.setValue(value);
   }
}
void* funcPA_LeFrntTireMsgMsgOldFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeFrntTireMsgMsgOldFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeFrntTireMsgMsgOldFlg.setValue(value);
   }
}
void* funcPA_LeReTireMsgMsgOldFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeReTireMsgMsgOldFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeReTireMsgMsgOldFlg.setValue(value);
   }
}
void* funcPA_RiFrntTireMsgMsgOldFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiFrntTireMsgMsgOldFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiFrntTireMsgMsgOldFlg.setValue(value);
   }
}
void* funcPA_RiReTireMsgMsgOldFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiReTireMsgMsgOldFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiReTireMsgMsgOldFlg.setValue(value);
   }
}
void* funcPA_LeFrntTireMsgPWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeFrntTireMsgPWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeFrntTireMsgPWarnFlg.setValue(value);
   }
}
void* funcPA_LeReTireMsgPWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeReTireMsgPWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeReTireMsgPWarnFlg.setValue(value);
   }
}
void* funcPA_RiFrntTireMsgPWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiFrntTireMsgPWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiFrntTireMsgPWarnFlg.setValue(value);
   }
}
void* funcPA_RiReTireMsgPWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiReTireMsgPWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiReTireMsgPWarnFlg.setValue(value);
   }
}
void* funcPA_LeFrntTireMsgTWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeFrntTireMsgTWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeFrntTireMsgTWarnFlg.setValue(value);
   }
}
void* funcPA_LeReTireMsgTWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeReTireMsgTWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeReTireMsgTWarnFlg.setValue(value);
   }
}
void* funcPA_RiFrntTireMsgTWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiFrntTireMsgTWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiFrntTireMsgTWarnFlg.setValue(value);
   }
}
void* funcPA_RiReTireMsgTWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiReTireMsgTWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiReTireMsgTWarnFlg.setValue(value);
   }
}
void* funcPA_LeFrntTireMsgSysWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeFrntTireMsgSysWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeFrntTireMsgSysWarnFlg.setValue(value);
   }
}
void* funcPA_LeReTireMsgSysWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeReTireMsgSysWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeReTireMsgSysWarnFlg.setValue(value);
   }
}
void* funcPA_RiFrntTireMsgSysWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiFrntTireMsgSysWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiFrntTireMsgSysWarnFlg.setValue(value);
   }
}
void* funcPA_RiReTireMsgSysWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiReTireMsgSysWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiReTireMsgSysWarnFlg.setValue(value);
   }
}
void* funcPA_LeFrntTireMsgFastLoseWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeFrntTireMsgFastLoseWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeFrntTireMsgFastLoseWarnFlg.setValue(value);
   }
}
void* funcPA_LeReTireMsgFastLoseWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeReTireMsgFastLoseWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeReTireMsgFastLoseWarnFlg.setValue(value);
   }
}
void* funcPA_RiFrntTireMsgFastLoseWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiFrntTireMsgFastLoseWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiFrntTireMsgFastLoseWarnFlg.setValue(value);
   }
}
void* funcPA_RiReTireMsgFastLoseWarnFlg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiReTireMsgFastLoseWarnFlg data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiReTireMsgFastLoseWarnFlg.setValue(value);
   }
}
void* funcPA_LeFrntTireMsgBattLoSt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeFrntTireMsgBattLoSt data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeFrntTireMsgBattLoSt.setValue(value);
   }
}
void* funcPA_LeReTireMsgBattLoSt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_LeReTireMsgBattLoSt data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_LeReTireMsgBattLoSt.setValue(value);
   }
}
void* funcPA_RiFrntTireMsgBattLoSt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiFrntTireMsgBattLoSt data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiFrntTireMsgBattLoSt.setValue(value);
   }
}
void* funcPA_RiReTireMsgBattLoSt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RiReTireMsgBattLoSt data timeout");
   }else
   {
      PA_TireMsgFlg value;
      value.data = atoi(argv[2]);
      value.timeout = atoi(argv[3]);
      PA_RiReTireMsgBattLoSt.setValue(value);
   }
}
void* funcPA_CI_TimeAndDateIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+8))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_CI_TimeAndDateIndicated year month day hour minute second format availability");
   }else
   {
      PA_Clock value;
      value.year = atoi(argv[2]);
      value.month = atoi(argv[3]);
      value.day = atoi(argv[4]);
      value.hour = atoi(argv[5]);
      value.minute = atoi(argv[6]);
      value.second = atoi(argv[7]);
      value.format = atoi(argv[8]);
      value.availability = atoi(argv[9]);
      PA_CI_TimeAndDateIndicated.setValue(value);
   }
}
void* funcPA_TC_ACChargingAvailable(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_ACChargingAvailable value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_TC_ACChargingAvailable.setValue(value);
   }
}
void* funcPA_TC_DispHvBattLvlOfChrg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DispHvBattLvlOfChrg value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_DispHvBattLvlOfChrg.setValue(value);
   }
}
void* funcPA_TC_OnBdChrgrIAct(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_OnBdChrgrIAct value");
   }else
   {
      signed int value;
      value = atoi(argv[2]);
      PA_TC_OnBdChrgrIAct.setValue(value);
   }
}
void* funcPA_TC_OnBdChrgrUAct(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_OnBdChrgrUAct value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_OnBdChrgrUAct.setValue(value);
   }
}
void* funcPA_TC_ChrgnSpd(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_ChrgnSpd value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_ChrgnSpd.setValue(value);
   }
}
void* funcPA_TC_HvBattChrgnTiEstimd(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_HvBattChrgnTiEstimd value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_HvBattChrgnTiEstimd.setValue(value);
   }
}
void* funcPA_TC_OnBdChrgrHndlSts1(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_OnBdChrgrHndlSts1 value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_TC_OnBdChrgrHndlSts1.setValue(value);
   }
}
void* funcPA_TC_DCChrgnHndlSts(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DCChrgnHndlSts value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_TC_DCChrgnHndlSts.setValue(value);
   }
}
void* funcPA_TC_ChrgnOrDisChrgnStsFb(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_ChrgnOrDisChrgnStsFb value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_TC_ChrgnOrDisChrgnStsFb.setValue(value);
   }
}
void* funcPA_TC_DCChrgSt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DCChrgSt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_TC_DCChrgSt.setValue(value);
   }
}
void* funcPA_TC_DCChargingAvailable(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DCChargingAvailable value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_TC_DCChargingAvailable.setValue(value);
   }
}
void* funcPA_TC_HvBattIDc1(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_HvBattIDc1 value");
   }else
   {
      signed int value;
      value = atoi(argv[2]);
      PA_TC_HvBattIDc1.setValue(value);
   }
}
void* funcPA_TC_HvBattUDc(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_HvBattUDc value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_HvBattUDc.setValue(value);
   }
}
void* funcPA_TC_DischargingAvailable(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DischargingAvailable value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_TC_DischargingAvailable.setValue(value);
   }
}
void* funcPA_TC_DchaIAct(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DchaIAct value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_DchaIAct.setValue(value);
   }
}
void* funcPA_TC_DchaUAct(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DchaUAct value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_DchaUAct.setValue(value);
   }
}
void* funcPA_TC_HvBattDchaTiEstimd(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_HvBattDchaTiEstimd value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_HvBattDchaTiEstimd.setValue(value);
   }
}
void* funcPA_TC_DchaEgyAct(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DchaEgyAct value");
   }else
   {
      unsigned short value;
      value = atoi(argv[2]);
      PA_TC_DchaEgyAct.setValue(value);
   }
}
void* funcPA_OnBdChrgrSt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_OnBdChrgrSt value ub timeout");
   }else
   {
      PA_value_6bit value;
      value.value = atoi(argv[2]);
      value.ub = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      PA_OnBdChrgrSt.setValue(value);
   }
}
void* funcPA_BookChargeSetResponse(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BookChargeSetResponse value ub timeout");
   }else
   {
      PA_value_6bit value;
      value.value = atoi(argv[2]);
      value.ub = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      PA_BookChargeSetResponse.setValue(value);
   }
}
void* funcPA_TC_DchaStopByTarDrvrIndcn(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TC_DchaStopByTarDrvrIndcn value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_TC_DchaStopByTarDrvrIndcn.setValue(value);
   }
}
void* funcPA_Color_HVBattSOC(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Color_HVBattSOC data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_Color_HVBattSOC.setValue(value);
   }
}
void* funcPA_DIM_StateOfCharge(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_StateOfCharge data format status availability");
   }else
   {
      PA_Charge value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.status = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_DIM_StateOfCharge.setValue(value);
   }
}
void* funcPA_TR_TurboPressureIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TR_TurboPressureIndicated data format availability");
   }else
   {
      PA_TurboPressure value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_TR_TurboPressureIndicated.setValue(value);
   }
}
void* funcPA_TR_MaxTurboPressureIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TR_MaxTurboPressureIndicated data format availability");
   }else
   {
      PA_TurboPressure value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_TR_MaxTurboPressureIndicated.setValue(value);
   }
}
void* funcPA_EC_EcoMeter(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_EC_EcoMeter data availability");
   }else
   {
      PA_ECOcoach value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_EC_EcoMeter.setValue(value);
   }
}
void* funcPA_EC_EcoGrade(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_EC_EcoGrade data availability");
   }else
   {
      PA_ECOcoach value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_EC_EcoGrade.setValue(value);
   }
}
void* funcPA_RewardMileage(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_RewardMileage data format timeout availability");
   }else
   {
      PA_Reward value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.timeout = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_RewardMileage.setValue(value);
   }
}
void* funcPA_HDCTargetSpeed(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_HDCTargetSpeed data value reserve availability");
   }else
   {
      PA_TargetSpeed value;
      value.data = atoi(argv[2]);
      value.value = atoi(argv[3]);
      value.reserve = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_HDCTargetSpeed.setValue(value);
   }
}
void* funcPA_DOW_WarningFlash(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DOW_WarningFlash data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_DOW_WarningFlash.setValue(value);
   }
}
void* funcPA_EnergyRegenerativeLevel(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_EnergyRegenerativeLevel data availability");
   }else
   {
      PA_Trip value;
      value.data = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_EnergyRegenerativeLevel.setValue(value);
   }
}
void* funcPA_HMITrip_View(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_HMITrip_View value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_HMITrip_View.setValue(value);
   }
}


void initpa_tripFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_DGS_GearLvrIndcn", (long)&funcPA_DGS_GearLvrIndcn));
   mFuncPtr.insert(make_pair<string, long>("PA_DGS_GearIndcn", (long)&funcPA_DGS_GearIndcn));
   mFuncPtr.insert(make_pair<string, long>("PA_DGS_GearShiftIndcn", (long)&funcPA_DGS_GearShiftIndcn));
   mFuncPtr.insert(make_pair<string, long>("PA_DD_OdometerIndicated", (long)&funcPA_DD_OdometerIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_DD_OdometerTripMeter1", (long)&funcPA_DD_OdometerTripMeter1));
   mFuncPtr.insert(make_pair<string, long>("PA_DD_OdometerTripMeter2", (long)&funcPA_DD_OdometerTripMeter2));
   mFuncPtr.insert(make_pair<string, long>("PA_DD_TripMeterRadioButton", (long)&funcPA_DD_TripMeterRadioButton));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DTEHVBattIndicated", (long)&funcPA_TC_DTEHVBattIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_EDT1Indicated", (long)&funcPA_TC_EDT1Indicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_EDT2Indicated", (long)&funcPA_TC_EDT2Indicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_AVS1Indicated", (long)&funcPA_TC_AVS1Indicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_AVS2Indicated", (long)&funcPA_TC_AVS2Indicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_AEC1Indicated", (long)&funcPA_TC_AEC1Indicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_AEC2Indicated", (long)&funcPA_TC_AEC2Indicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_IECIndicated", (long)&funcPA_TC_IECIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_Zero_Emission", (long)&funcPA_TC_Zero_Emission));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DTEIndicated", (long)&funcPA_TC_DTEIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_AFC1Indicated", (long)&funcPA_TC_AFC1Indicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_AFC2Indicated", (long)&funcPA_TC_AFC2Indicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_IFCIndicatedCalc", (long)&funcPA_TC_IFCIndicatedCalc));
   mFuncPtr.insert(make_pair<string, long>("PA_ZeroEmissionTime", (long)&funcPA_ZeroEmissionTime));
   mFuncPtr.insert(make_pair<string, long>("PA_SailingTime", (long)&funcPA_SailingTime));
   mFuncPtr.insert(make_pair<string, long>("PA_BoostTime", (long)&funcPA_BoostTime));
   mFuncPtr.insert(make_pair<string, long>("PA_EconomicalMileage", (long)&funcPA_EconomicalMileage));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_PHEVPowerFlowIndic", (long)&funcPA_DIM_PHEVPowerFlowIndic));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_BEVPowerFlowIndic", (long)&funcPA_DIM_BEVPowerFlowIndic));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_BSGPowerFlowIndic", (long)&funcPA_DIM_BSGPowerFlowIndic));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_HEVPowerFlowIndic", (long)&funcPA_DIM_HEVPowerFlowIndic));
   mFuncPtr.insert(make_pair<string, long>("PA_ODT_TempIndicated", (long)&funcPA_ODT_TempIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_ODT_SnowFlakeLit", (long)&funcPA_ODT_SnowFlakeLit));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_USAGE_MODE", (long)&funcPA_DIM_USAGE_MODE));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_GpilotDisplay", (long)&funcPA_DIM_GpilotDisplay));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_DriverDisplay", (long)&funcPA_DIM_DriverDisplay));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_DriverDisplayBg", (long)&funcPA_DIM_DriverDisplayBg));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_DriverDisplayBg2", (long)&funcPA_DIM_DriverDisplayBg2));
   mFuncPtr.insert(make_pair<string, long>("PA_LeFrntTireMsgP", (long)&funcPA_LeFrntTireMsgP));
   mFuncPtr.insert(make_pair<string, long>("PA_RiFrntTireMsgP", (long)&funcPA_RiFrntTireMsgP));
   mFuncPtr.insert(make_pair<string, long>("PA_LeReTireMsgP", (long)&funcPA_LeReTireMsgP));
   mFuncPtr.insert(make_pair<string, long>("PA_RiReTireMsgP", (long)&funcPA_RiReTireMsgP));
   mFuncPtr.insert(make_pair<string, long>("PA_LeFrntTireMsgT", (long)&funcPA_LeFrntTireMsgT));
   mFuncPtr.insert(make_pair<string, long>("PA_RiFrntTireMsgT", (long)&funcPA_RiFrntTireMsgT));
   mFuncPtr.insert(make_pair<string, long>("PA_LeReTireMsgT", (long)&funcPA_LeReTireMsgT));
   mFuncPtr.insert(make_pair<string, long>("PA_RiReTireMsgT", (long)&funcPA_RiReTireMsgT));
   mFuncPtr.insert(make_pair<string, long>("PA_LeFrntTireMsgMsgOldFlg", (long)&funcPA_LeFrntTireMsgMsgOldFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeReTireMsgMsgOldFlg", (long)&funcPA_LeReTireMsgMsgOldFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiFrntTireMsgMsgOldFlg", (long)&funcPA_RiFrntTireMsgMsgOldFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiReTireMsgMsgOldFlg", (long)&funcPA_RiReTireMsgMsgOldFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeFrntTireMsgPWarnFlg", (long)&funcPA_LeFrntTireMsgPWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeReTireMsgPWarnFlg", (long)&funcPA_LeReTireMsgPWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiFrntTireMsgPWarnFlg", (long)&funcPA_RiFrntTireMsgPWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiReTireMsgPWarnFlg", (long)&funcPA_RiReTireMsgPWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeFrntTireMsgTWarnFlg", (long)&funcPA_LeFrntTireMsgTWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeReTireMsgTWarnFlg", (long)&funcPA_LeReTireMsgTWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiFrntTireMsgTWarnFlg", (long)&funcPA_RiFrntTireMsgTWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiReTireMsgTWarnFlg", (long)&funcPA_RiReTireMsgTWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeFrntTireMsgSysWarnFlg", (long)&funcPA_LeFrntTireMsgSysWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeReTireMsgSysWarnFlg", (long)&funcPA_LeReTireMsgSysWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiFrntTireMsgSysWarnFlg", (long)&funcPA_RiFrntTireMsgSysWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiReTireMsgSysWarnFlg", (long)&funcPA_RiReTireMsgSysWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeFrntTireMsgFastLoseWarnFlg", (long)&funcPA_LeFrntTireMsgFastLoseWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeReTireMsgFastLoseWarnFlg", (long)&funcPA_LeReTireMsgFastLoseWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiFrntTireMsgFastLoseWarnFlg", (long)&funcPA_RiFrntTireMsgFastLoseWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_RiReTireMsgFastLoseWarnFlg", (long)&funcPA_RiReTireMsgFastLoseWarnFlg));
   mFuncPtr.insert(make_pair<string, long>("PA_LeFrntTireMsgBattLoSt", (long)&funcPA_LeFrntTireMsgBattLoSt));
   mFuncPtr.insert(make_pair<string, long>("PA_LeReTireMsgBattLoSt", (long)&funcPA_LeReTireMsgBattLoSt));
   mFuncPtr.insert(make_pair<string, long>("PA_RiFrntTireMsgBattLoSt", (long)&funcPA_RiFrntTireMsgBattLoSt));
   mFuncPtr.insert(make_pair<string, long>("PA_RiReTireMsgBattLoSt", (long)&funcPA_RiReTireMsgBattLoSt));
   mFuncPtr.insert(make_pair<string, long>("PA_CI_TimeAndDateIndicated", (long)&funcPA_CI_TimeAndDateIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_ACChargingAvailable", (long)&funcPA_TC_ACChargingAvailable));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DispHvBattLvlOfChrg", (long)&funcPA_TC_DispHvBattLvlOfChrg));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_OnBdChrgrIAct", (long)&funcPA_TC_OnBdChrgrIAct));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_OnBdChrgrUAct", (long)&funcPA_TC_OnBdChrgrUAct));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_ChrgnSpd", (long)&funcPA_TC_ChrgnSpd));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_HvBattChrgnTiEstimd", (long)&funcPA_TC_HvBattChrgnTiEstimd));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_OnBdChrgrHndlSts1", (long)&funcPA_TC_OnBdChrgrHndlSts1));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DCChrgnHndlSts", (long)&funcPA_TC_DCChrgnHndlSts));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_ChrgnOrDisChrgnStsFb", (long)&funcPA_TC_ChrgnOrDisChrgnStsFb));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DCChrgSt", (long)&funcPA_TC_DCChrgSt));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DCChargingAvailable", (long)&funcPA_TC_DCChargingAvailable));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_HvBattIDc1", (long)&funcPA_TC_HvBattIDc1));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_HvBattUDc", (long)&funcPA_TC_HvBattUDc));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DischargingAvailable", (long)&funcPA_TC_DischargingAvailable));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DchaIAct", (long)&funcPA_TC_DchaIAct));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DchaUAct", (long)&funcPA_TC_DchaUAct));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_HvBattDchaTiEstimd", (long)&funcPA_TC_HvBattDchaTiEstimd));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DchaEgyAct", (long)&funcPA_TC_DchaEgyAct));
   mFuncPtr.insert(make_pair<string, long>("PA_OnBdChrgrSt", (long)&funcPA_OnBdChrgrSt));
   mFuncPtr.insert(make_pair<string, long>("PA_BookChargeSetResponse", (long)&funcPA_BookChargeSetResponse));
   mFuncPtr.insert(make_pair<string, long>("PA_TC_DchaStopByTarDrvrIndcn", (long)&funcPA_TC_DchaStopByTarDrvrIndcn));
   mFuncPtr.insert(make_pair<string, long>("PA_Color_HVBattSOC", (long)&funcPA_Color_HVBattSOC));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_StateOfCharge", (long)&funcPA_DIM_StateOfCharge));
   mFuncPtr.insert(make_pair<string, long>("PA_TR_TurboPressureIndicated", (long)&funcPA_TR_TurboPressureIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_TR_MaxTurboPressureIndicated", (long)&funcPA_TR_MaxTurboPressureIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_EC_EcoMeter", (long)&funcPA_EC_EcoMeter));
   mFuncPtr.insert(make_pair<string, long>("PA_EC_EcoGrade", (long)&funcPA_EC_EcoGrade));
   mFuncPtr.insert(make_pair<string, long>("PA_RewardMileage", (long)&funcPA_RewardMileage));
   mFuncPtr.insert(make_pair<string, long>("PA_HDCTargetSpeed", (long)&funcPA_HDCTargetSpeed));
   mFuncPtr.insert(make_pair<string, long>("PA_DOW_WarningFlash", (long)&funcPA_DOW_WarningFlash));
   mFuncPtr.insert(make_pair<string, long>("PA_EnergyRegenerativeLevel", (long)&funcPA_EnergyRegenerativeLevel));
   mFuncPtr.insert(make_pair<string, long>("PA_HMITrip_View", (long)&funcPA_HMITrip_View));
}
