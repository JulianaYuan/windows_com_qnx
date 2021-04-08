#include "pa_gauge.h"

SharedMemory::Pool SharedMemoryPool_PA_Gauge{ "PA_Gauge", 65535 };

SharedMemory::AtomicStruct<PA_Speedometer> PA_VS_VehicleSpeedIndicated(						SharedMemoryPool_PA_Gauge,	"PA_VS_VehicleSpeedIndicated",						{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_Speedometer> PA_VS_VehicleSpeedDigital(						SharedMemoryPool_PA_Gauge, 	"PA_VS_VehicleSpeedDigital",						{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_Checkbox> PA_VS_VehicleSpeedExtendedCheckbox(					SharedMemoryPool_PA_Gauge, 	"PA_VS_VehicleSpeedExtendedCheckbox",				{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_SOCGauge> PA_BLI_HVBattLevelIndication(						SharedMemoryPool_PA_Gauge, 	"PA_BLI_HVBattLevelIndication",						{ 0, 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_DriverSupportIndicated> PA_PDS_DriverSupportIndicated(		SharedMemoryPool_PA_Gauge, 	"PA_PDS_DriverSupportIndicated",					{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_EngineStart> PA_PDS_DriverSupportEngineStart(					SharedMemoryPool_PA_Gauge, 	"PA_PDS_DriverSupportEngineStart",					{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_EngineStart> PA_PDS_DriverSupportPrplMode(					SharedMemoryPool_PA_Gauge, 	"PA_PDS_DriverSupportPrplMode",						{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_DriverSupportIndicated> PA_PDS_DriverSupportAvailableRagan(	SharedMemoryPool_PA_Gauge,	"PA_PDS_DriverSupportAvailableRagan",				{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_BSGPowerRegeneration> PA_DIM_BSGPowerRegeneration(			SharedMemoryPool_PA_Gauge, 	"PA_DIM_BSGPowerRegeneration",						{ 0, 0, 4 });
SharedMemory::AtomicStruct<PA_EngSpeed> PA_ES_EngSpeedIndicated(							SharedMemoryPool_PA_Gauge, 	"PA_ES_EngSpeedIndicated",							{ 0, 0, 4 });
SharedMemory::AtomicStruct<PA_MaxEngSpeed> PA_ES_MaxEngSpeedIndicated(						SharedMemoryPool_PA_Gauge, 	"PA_ES_MaxEngSpeedIndicated",						{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_Coolent> PA_DIM_EngineCoolantTemperatureLevelIndication(		SharedMemoryPool_PA_Gauge, 	"PA_DIM_EngineCoolantTemperatureLevelIndication",	{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_FuelLevel> PA_FL_FuelLevelIndicated(							SharedMemoryPool_PA_Gauge, 	"PA_FL_FuelLevelIndicated",							{ 0, 0, 4 });
SharedMemory::AtomicStruct<PA_value> PA_FL_LowFuelWarningLamp(								SharedMemoryPool_PA_Gauge, 	"PA_FL_LowFuelWarningLamp",							{ 0, 4 });
SharedMemory::AtomicStruct<PA_Coordinates> PA_GFR_Long(										SharedMemoryPool_PA_Gauge, 	"PA_GFR_Long",										{ 0, 0, 4 });
SharedMemory::AtomicStruct<PA_value> PA_GFR_Acc_Value(										SharedMemoryPool_PA_Gauge, 	"PA_GFR_Acc_Value",									{ 0, 4 });
SharedMemory::AtomicStruct<PA_value> PA_GFR_Brake_Value(									SharedMemoryPool_PA_Gauge, 	"PA_GFR_Brake_Value",								{ 0, 4 });
SharedMemory::AtomicStruct<PA_Coordinates> PA_GFR_Lat(										SharedMemoryPool_PA_Gauge, 	"PA_GFR_Lat",										{ 0, 0, 4 });
SharedMemory::AtomicStruct<PA_value> PA_GFR_Right_Value(									SharedMemoryPool_PA_Gauge, 	"PA_GFR_Right_Value",								{ 0, 4 });
SharedMemory::AtomicStruct<PA_value> PA_GFR_Left_Value(										SharedMemoryPool_PA_Gauge, 	"PA_GFR_Left_Value",								{ 0, 4 });
