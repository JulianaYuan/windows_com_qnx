#ifndef PA_GAUGE_FUNC_H_
#define PA_GAUGE_FUNC_H_


void* funcPA_VS_VehicleSpeedIndicated(int argc, char *argv[]);
void* funcPA_VS_VehicleSpeedDigital(int argc, char *argv[]);
void* funcPA_VS_VehicleSpeedExtendedCheckbox(int argc, char *argv[]);
void* funcPA_BLI_HVBattLevelIndication(int argc, char *argv[]);
void* funcPA_PDS_DriverSupportIndicated(int argc, char *argv[]);
void* funcPA_PDS_DriverSupportEngineStart(int argc, char *argv[]);
void* funcPA_PDS_DriverSupportPrplMode(int argc, char *argv[]);
void* funcPA_PDS_DriverSupportAvailableRagan(int argc, char *argv[]);
void* funcPA_DIM_BSGPowerRegeneration(int argc, char *argv[]);
void* funcPA_ES_EngSpeedIndicated(int argc, char *argv[]);
void* funcPA_ES_MaxEngSpeedIndicated(int argc, char *argv[]);
void* funcPA_DIM_EngineCoolantTemperatureLevelIndication(int argc, char *argv[]);
void* funcPA_FL_FuelLevelIndicated(int argc, char *argv[]);
void* funcPA_FL_LowFuelWarningLamp(int argc, char *argv[]);
void* funcPA_GFR_Long(int argc, char *argv[]);
void* funcPA_GFR_Acc_Value(int argc, char *argv[]);
void* funcPA_GFR_Brake_Value(int argc, char *argv[]);
void* funcPA_GFR_Lat(int argc, char *argv[]);
void* funcPA_GFR_Right_Value(int argc, char *argv[]);
void* funcPA_GFR_Left_Value(int argc, char *argv[]);


void initpa_gaugeFuncMap();

#endif //PA_GAUGE_FUNC_H_
