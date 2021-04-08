#ifndef PA_GAUGE_H
#define PA_GAUGE_H

#include "../sharedmemory.hpp"

struct PA_Speedometer
{
	unsigned short data : 9;			// default value is 0,	Range: 0 to 260(when format is km/h, the max value is 260; when format is mph, the max value is 160)
	unsigned short status : 3;			// default value is 0,	Range: N/A
	unsigned short format : 1;			// default value is 0,	Range: 0 = km/h, 1 = mph
	unsigned short availability : 3;	// default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_Checkbox
{
	unsigned char data : 1;				//default value is 0,	Range: 0 = Check box is unchecked, 1 = Check box is checked
	unsigned char status : 3;			//default value is 0,	Range: N/A
	unsigned char format : 1;			//default value is 0,	Range: 0 = km/h, 1 = mph
	unsigned char availability : 3;		//default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_SOCGauge
{
	unsigned int data : 10;				//default value is 0,	Range: 0 to 1000, Expand 10 times
	unsigned int status : 2;			//default value is 0,	Range: 0 = Norequest, 1 = Save, 2 = Charge
	unsigned int level : 8;				//default value is 0,	Range: 0 to 100
	unsigned int reserve : 9;			//padding with 0
	unsigned int availability : 3;		//default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_DriverSupportIndicated
{
	signed short value : 11;			//default value is 0,	Range: -100 to 102
	signed short reserve : 5;			//padding with 0
	unsigned char data : 5;				//default value is 0,	SRD not define value
	unsigned char availability : 3;		//default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_EngineStart
{
	unsigned short value : 10;			//default value is 0,	Range: 0 to 102
	unsigned short reserve : 6;			//padding with 0
	unsigned char data : 5;				//default value is 0,	Range: 0 = No Propulsion source, 1 = Only combustion engine, 2 = Only electrical motor, 3 = Both combustion and Electrical motor
	unsigned char availability : 3;		//default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_BSGPowerRegeneration
{
	unsigned short value : 8;			//default value is 0,	Range: 0 to 100
	unsigned short reserve : 5;			//padding with 0
	unsigned short availability : 3;	//default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_EngSpeed
{
	float data;							//default value is 0.0, Range: 0.0 to 16383.5(according to signal EngSpdDispd)
	unsigned char format : 5;			//only 0, so padding with 0
	unsigned char availability : 3;		//default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_MaxEngSpeed
{
	unsigned short data : 15;			//data
	unsigned short reserve_1 : 1;		//padding with 0
	unsigned char reserve_2 : 5;		//padding withe 0
	unsigned char availability : 3;		//default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_Coolent
{
	unsigned short data : 8;			//default value is 0,	Range: 0 to 100
	unsigned short values : 4;			//default value is 0,	Range: 0 to 8
	unsigned short color : 1;			//default value is 0, 	Range: 0 = Normal, 1 = Red
	unsigned short availability : 3;	//default value is 4,	Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_FuelLevel						//refer to bitmap
{
	unsigned char Data;
	unsigned char Availability;
	unsigned char Status;
};

struct PA_Coordinates					//refer to bitmap
{
	unsigned char Data;
	unsigned char Status;
	unsigned char Availability;
};

struct PA_value							//refer to bitmap
{
	unsigned char Data;
	unsigned char Availability;
};

extern SharedMemory::Pool SharedMemoryPool_PA_Gauge;

//speedometer
extern SharedMemory::AtomicStruct<PA_Speedometer> PA_VS_VehicleSpeedIndicated;
extern SharedMemory::AtomicStruct<PA_Speedometer> PA_VS_VehicleSpeedDigital;
extern SharedMemory::AtomicStruct<PA_Checkbox> PA_VS_VehicleSpeedExtendedCheckbox;

//SOC Gauge
extern SharedMemory::AtomicStruct<PA_SOCGauge> PA_BLI_HVBattLevelIndication;

//Power Gauge
extern SharedMemory::AtomicStruct<PA_DriverSupportIndicated> PA_PDS_DriverSupportIndicated;
extern SharedMemory::AtomicStruct<PA_EngineStart> PA_PDS_DriverSupportEngineStart;
extern SharedMemory::AtomicStruct<PA_EngineStart> PA_PDS_DriverSupportPrplMode;
extern SharedMemory::AtomicStruct<PA_DriverSupportIndicated> PA_PDS_DriverSupportAvailableRagan;
extern SharedMemory::AtomicStruct<PA_BSGPowerRegeneration> PA_DIM_BSGPowerRegeneration;

//Engine Speed Gauge
extern SharedMemory::AtomicStruct<PA_EngSpeed> PA_ES_EngSpeedIndicated;
extern SharedMemory::AtomicStruct<PA_MaxEngSpeed> PA_ES_MaxEngSpeedIndicated;

//Water Temperature Gauge
extern SharedMemory::AtomicStruct<PA_Coolent> PA_DIM_EngineCoolantTemperatureLevelIndication;

//Fuel Gauge
extern SharedMemory::AtomicStruct<PA_FuelLevel> PA_FL_FuelLevelIndicated;
extern SharedMemory::AtomicStruct<PA_value> PA_FL_LowFuelWarningLamp;

//G-force
extern SharedMemory::AtomicStruct<PA_Coordinates> PA_GFR_Long;
extern SharedMemory::AtomicStruct<PA_value> PA_GFR_Acc_Value;
extern SharedMemory::AtomicStruct<PA_value> PA_GFR_Brake_Value;
extern SharedMemory::AtomicStruct<PA_Coordinates> PA_GFR_Lat;
extern SharedMemory::AtomicStruct<PA_value> PA_GFR_Right_Value;
extern SharedMemory::AtomicStruct<PA_value> PA_GFR_Left_Value;

#endif // !PA_GAUGE_H
