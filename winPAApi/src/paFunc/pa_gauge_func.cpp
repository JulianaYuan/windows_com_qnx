#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_gauge.h"
#include <vector>
using namespace std;
void* funcPA_VS_VehicleSpeedIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_VS_VehicleSpeedIndicated data status format availability");
   }else
   {
      PA_Speedometer value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.format = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_VS_VehicleSpeedIndicated.setValue(value);
   }
}
void* funcPA_VS_VehicleSpeedDigital(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_VS_VehicleSpeedDigital data status format availability");
   }else
   {
      PA_Speedometer value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.format = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_VS_VehicleSpeedDigital.setValue(value);
   }
}
void* funcPA_VS_VehicleSpeedExtendedCheckbox(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_VS_VehicleSpeedExtendedCheckbox data status format availability");
   }else
   {
      PA_Checkbox value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.format = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_VS_VehicleSpeedExtendedCheckbox.setValue(value);
   }
}
void* funcPA_BLI_HVBattLevelIndication(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+5))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_BLI_HVBattLevelIndication data status level reserve availability");
   }else
   {
      PA_SOCGauge value;
      value.data = atoi(argv[2]);
      value.status = atoi(argv[3]);
      value.level = atoi(argv[4]);
      value.reserve = atoi(argv[5]);
      value.availability = atoi(argv[6]);
      PA_BLI_HVBattLevelIndication.setValue(value);
   }
}
void* funcPA_PDS_DriverSupportIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_PDS_DriverSupportIndicated value reserve data availability");
   }else
   {
      PA_DriverSupportIndicated value;
      value.value = atoi(argv[2]);
      value.reserve = atoi(argv[3]);
      value.data = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_PDS_DriverSupportIndicated.setValue(value);
   }
}
void* funcPA_PDS_DriverSupportEngineStart(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_PDS_DriverSupportEngineStart value reserve data availability");
   }else
   {
      PA_EngineStart value;
      value.value = atoi(argv[2]);
      value.reserve = atoi(argv[3]);
      value.data = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_PDS_DriverSupportEngineStart.setValue(value);
   }
}
void* funcPA_PDS_DriverSupportPrplMode(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_PDS_DriverSupportPrplMode value reserve data availability");
   }else
   {
      PA_EngineStart value;
      value.value = atoi(argv[2]);
      value.reserve = atoi(argv[3]);
      value.data = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_PDS_DriverSupportPrplMode.setValue(value);
   }
}
void* funcPA_PDS_DriverSupportAvailableRagan(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_PDS_DriverSupportAvailableRagan value reserve data availability");
   }else
   {
      PA_DriverSupportIndicated value;
      value.value = atoi(argv[2]);
      value.reserve = atoi(argv[3]);
      value.data = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_PDS_DriverSupportAvailableRagan.setValue(value);
   }
}
void* funcPA_DIM_BSGPowerRegeneration(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_BSGPowerRegeneration value reserve availability");
   }else
   {
      PA_BSGPowerRegeneration value;
      value.value = atoi(argv[2]);
      value.reserve = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_DIM_BSGPowerRegeneration.setValue(value);
   }
}
void* funcPA_ES_EngSpeedIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ES_EngSpeedIndicated data format availability");
   }else
   {
      PA_EngSpeed value;
      value.data = atoi(argv[2]);
      value.format = atoi(argv[3]);
      value.availability = atoi(argv[4]);
      PA_ES_EngSpeedIndicated.setValue(value);
   }
}
void* funcPA_ES_MaxEngSpeedIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ES_MaxEngSpeedIndicated data reserve_1 reserve_2 availability");
   }else
   {
      PA_MaxEngSpeed value;
      value.data = atoi(argv[2]);
      value.reserve_1 = atoi(argv[3]);
      value.reserve_2 = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_ES_MaxEngSpeedIndicated.setValue(value);
   }
}
void* funcPA_DIM_EngineCoolantTemperatureLevelIndication(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DIM_EngineCoolantTemperatureLevelIndication data values color availability");
   }else
   {
      PA_Coolent value;
      value.data = atoi(argv[2]);
      value.values = atoi(argv[3]);
      value.color = atoi(argv[4]);
      value.availability = atoi(argv[5]);
      PA_DIM_EngineCoolantTemperatureLevelIndication.setValue(value);
   }
}
void* funcPA_FL_FuelLevelIndicated(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_FL_FuelLevelIndicated Data Availability Status");
   }else
   {
      PA_FuelLevel value;
      value.Data = atoi(argv[2]);
      value.Availability = atoi(argv[3]);
      value.Status = atoi(argv[4]);
      PA_FL_FuelLevelIndicated.setValue(value);
   }
}
void* funcPA_FL_LowFuelWarningLamp(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_FL_LowFuelWarningLamp Data Availability");
   }else
   {
      PA_value value;
      value.Data = atoi(argv[2]);
      value.Availability = atoi(argv[3]);
      PA_FL_LowFuelWarningLamp.setValue(value);
   }
}
void* funcPA_GFR_Long(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_GFR_Long Data Status Availability");
   }else
   {
      PA_Coordinates value;
      value.Data = atoi(argv[2]);
      value.Status = atoi(argv[3]);
      value.Availability = atoi(argv[4]);
      PA_GFR_Long.setValue(value);
   }
}
void* funcPA_GFR_Acc_Value(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_GFR_Acc_Value Data Availability");
   }else
   {
      PA_value value;
      value.Data = atoi(argv[2]);
      value.Availability = atoi(argv[3]);
      PA_GFR_Acc_Value.setValue(value);
   }
}
void* funcPA_GFR_Brake_Value(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_GFR_Brake_Value Data Availability");
   }else
   {
      PA_value value;
      value.Data = atoi(argv[2]);
      value.Availability = atoi(argv[3]);
      PA_GFR_Brake_Value.setValue(value);
   }
}
void* funcPA_GFR_Lat(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+3))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_GFR_Lat Data Status Availability");
   }else
   {
      PA_Coordinates value;
      value.Data = atoi(argv[2]);
      value.Status = atoi(argv[3]);
      value.Availability = atoi(argv[4]);
      PA_GFR_Lat.setValue(value);
   }
}
void* funcPA_GFR_Right_Value(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_GFR_Right_Value Data Availability");
   }else
   {
      PA_value value;
      value.Data = atoi(argv[2]);
      value.Availability = atoi(argv[3]);
      PA_GFR_Right_Value.setValue(value);
   }
}
void* funcPA_GFR_Left_Value(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_GFR_Left_Value Data Availability");
   }else
   {
      PA_value value;
      value.Data = atoi(argv[2]);
      value.Availability = atoi(argv[3]);
      PA_GFR_Left_Value.setValue(value);
   }
}


void initpa_gaugeFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_VS_VehicleSpeedIndicated", (long)&funcPA_VS_VehicleSpeedIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_VS_VehicleSpeedDigital", (long)&funcPA_VS_VehicleSpeedDigital));
   mFuncPtr.insert(make_pair<string, long>("PA_VS_VehicleSpeedExtendedCheckbox", (long)&funcPA_VS_VehicleSpeedExtendedCheckbox));
   mFuncPtr.insert(make_pair<string, long>("PA_BLI_HVBattLevelIndication", (long)&funcPA_BLI_HVBattLevelIndication));
   mFuncPtr.insert(make_pair<string, long>("PA_PDS_DriverSupportIndicated", (long)&funcPA_PDS_DriverSupportIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_PDS_DriverSupportEngineStart", (long)&funcPA_PDS_DriverSupportEngineStart));
   mFuncPtr.insert(make_pair<string, long>("PA_PDS_DriverSupportPrplMode", (long)&funcPA_PDS_DriverSupportPrplMode));
   mFuncPtr.insert(make_pair<string, long>("PA_PDS_DriverSupportAvailableRagan", (long)&funcPA_PDS_DriverSupportAvailableRagan));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_BSGPowerRegeneration", (long)&funcPA_DIM_BSGPowerRegeneration));
   mFuncPtr.insert(make_pair<string, long>("PA_ES_EngSpeedIndicated", (long)&funcPA_ES_EngSpeedIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_ES_MaxEngSpeedIndicated", (long)&funcPA_ES_MaxEngSpeedIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_DIM_EngineCoolantTemperatureLevelIndication", (long)&funcPA_DIM_EngineCoolantTemperatureLevelIndication));
   mFuncPtr.insert(make_pair<string, long>("PA_FL_FuelLevelIndicated", (long)&funcPA_FL_FuelLevelIndicated));
   mFuncPtr.insert(make_pair<string, long>("PA_FL_LowFuelWarningLamp", (long)&funcPA_FL_LowFuelWarningLamp));
   mFuncPtr.insert(make_pair<string, long>("PA_GFR_Long", (long)&funcPA_GFR_Long));
   mFuncPtr.insert(make_pair<string, long>("PA_GFR_Acc_Value", (long)&funcPA_GFR_Acc_Value));
   mFuncPtr.insert(make_pair<string, long>("PA_GFR_Brake_Value", (long)&funcPA_GFR_Brake_Value));
   mFuncPtr.insert(make_pair<string, long>("PA_GFR_Lat", (long)&funcPA_GFR_Lat));
   mFuncPtr.insert(make_pair<string, long>("PA_GFR_Right_Value", (long)&funcPA_GFR_Right_Value));
   mFuncPtr.insert(make_pair<string, long>("PA_GFR_Left_Value", (long)&funcPA_GFR_Left_Value));
}
