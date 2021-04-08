#ifndef PA_TRIP_H
#define PA_TRIP_H

#include "../sharedmemory.hpp"

struct PA_value_6bit
{
	unsigned char value : 6;
	unsigned char ub : 1;
	unsigned char timeout : 1;
};

// SOC PA
struct PA_Trip
{
	unsigned char data : 5;					// default value is 0, Range and value refer to signal
	unsigned char availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_Charge
{
	unsigned char data;							// default value is 0,		Range is according to signal PrpsnHvBattUsgOfDispSoc(confirm)
	unsigned char format : 1;					// N/A, padding with 0
	unsigned char status : 4;					// default value is 0,		Range: 0 = off, 1 = charge, 2 = hold
	unsigned char availability : 3;				// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_OAT {
	signed short data;							// default value is 0,
	unsigned char format : 1;					// default value is 0,		Range: 0 = degC, 1 = degF
	unsigned char reserve : 4;					// N/A
	unsigned char availability : 3;				// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_TargetSpeed {
	unsigned short data : 2;					// default value is 0, 		Range: SRD not define
	unsigned short value : 9;					// default value is 0,		Range: 511(Nodisplay), VehSpdLgtTar
	unsigned short reserve : 2;					// padding with 0
	unsigned short availability : 3;			// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_TireMsgP {
	double data;								// default value is 0
	unsigned char format : 4;					// default value is 0, 		Range: 0 = Pa, 1 = Psi, 2 = bar, 3 = Atm, 4 = Ukwn
	unsigned char timeout : 1;					// default value is 0, 		1 = timeout
	unsigned char availability : 3;				// default value is 2,		Range: 1 = Active, 2 = NotActive
};

struct PA_TireMsgT {
	signed short data;							// default value is 0,
	unsigned char format : 4;					// default value is 0,		Range: 0 = degC, 1 = degF, 3 = Ukwn
	unsigned char timeout : 1;					// default value is 0, 		1 = timeout
	unsigned char availability : 3;				// default value is 2,		Range: 1 = Active, 2 = NotActive
};

struct PA_TireMsgFlg {
	unsigned char data : 7;						// default value is 0,		Range: 0 = Normal, 1 = Warning
	unsigned char timeout : 1;					// default value is 0, 1 = timeout
};

struct PA_Clock {
	unsigned short year;						// default value is 0,		Range: 0 - 99
	unsigned char month;						// default value is 0,		Range: 1 - 12
	unsigned char day;							// default value is 0,		Range: 1 - 31
	unsigned char hour;							// default value is 0,		Range: 0 - 23
	unsigned char minute;						// default value is 0,		Range: 0 - 59
	unsigned char second;						// default value is 0,		Range: 0 - 59
	unsigned char format;						// default value is 0, 		0 - 24h, 1 - 12h(AM), 2 - 12h(PM)
	unsigned char availability;					// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_TurboPressure {
	unsigned short data;						// default value is 0,
	unsigned char format : 5;					// default value is 0, 		Always 0 = kPa
	unsigned char availability : 3;				// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_ECOcoach {
	unsigned short data : 13;					// default value is 0
	unsigned short availability : 3;			// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_Reward {
	unsigned short data;						// default value is 0
	unsigned char format : 4;					// default value is 0, 		0 = km, 1 = mile
	unsigned char timeout : 1;					// default value is 0,
	unsigned char availability : 3;				// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

// VP->SOC PA
struct PA_DGS_Gear {
	unsigned char data;							// default value is 0, 		Range: refer to signals
	unsigned char availability;					// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_ODO_TripMeter {
	unsigned int data : 24;						// default value is 0,		Range: refer to signals
	unsigned int format : 8;					// default value is 0, 		Range: 0 = km, 1 = miles
	unsigned char status;						// default value is 0, 		Range: 0 = Reset mode, 1 = normal Mode
	unsigned char availability;					// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_TripMeterRadioButton {
	unsigned char data;							// default value is 2,		Range: 0 - Trip1, 1 - Trip2, 2 - Neither
	unsigned char format;						// not define, padding with 0
	unsigned char status;						// not define, padding with 0
	unsigned char availability;					// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
};

struct PA_TC
{
	unsigned short data;						// default value is 0,		Range: refer to signals
	unsigned char format;						// default value is 0,		Range: refer to signals
	unsigned char availability;					// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
	unsigned char status;						// default value is 0,		Range: refer to signals
};

struct PA_TC_EDTIndicated
{
	unsigned int data : 24;						// default value is 0,		Dynamic(Elapsed driving time ##:##)
	unsigned int availability : 8;				// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
	unsigned char status;						// default value is 0,		Range: 0 = Resetmode, 1 =normal mode
};

struct PA_TC_Zero
{
	unsigned char data;							// default value is 0,		Range: 0 to 100, Integer, Resolution: 1
	unsigned char availability;					// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
	unsigned char status;						// default value is 0,		Range: 0 = Resetmode, 1 =normal mode
};

struct PA_TC_DTE
{
	unsigned short data;						// default value is 0, 		Dynamic(value of DTE ###)
	unsigned char format;						// default value is 0, 		Range: 0 = km, 1 = miles
	unsigned char availability;					// default value is 4,		Range: 1 = Active, 2 = NotActive, 3 = Error, 4 = NotAvailable
	unsigned char status;						// default value is 0,		Range: 0 = Low fuel status ON. 1 = Low fuel status OFF
	unsigned char triggered;					// default value is 0,		Range: 0 = Not triggered, 1 =Triggered
};

struct PA_TC_EnergyPowerBenefit
{
	unsigned int data : 24;						// refer to bitmap
	unsigned int format : 8;					// refer to bitmap
	unsigned char availability;					// refer to bitmap
};

struct PA_TC_SailingTime
{
	unsigned short data;						// refer to bitmap
	unsigned char format;						// refer to bitmap
	unsigned char availability;					// refer to bitmap
};


extern SharedMemory::Pool SharedMemoryPool_PA_Trip;

///////// VP->SOC PA///////////////////

// 3.3 Gear
extern SharedMemory::AtomicStruct<PA_DGS_Gear> PA_DGS_GearLvrIndcn;			// data : 0 = ParkIndcn, 1 = RvsIndcn, 2 = NeutIndcn, 3 = DrvIndcn, 4 = ManMode
extern SharedMemory::AtomicStruct<PA_DGS_Gear> PA_DGS_GearIndcn;			// data : 0 = Off, 1~8 -> 1~8, 9 = N, 10 = R
extern SharedMemory::AtomicStruct<PA_DGS_Gear> PA_DGS_GearShiftIndcn;		// data : 0 = Off, 1 = Up, 2 = DownCoolShift, 3 = Down

// 3.5 Odo and Trip1, Trip2
extern SharedMemory::AtomicStruct<PA_ODO_TripMeter> PA_DD_OdometerIndicated;			// data : default value is 0, Range is 0 to 999999
extern SharedMemory::AtomicStruct<PA_ODO_TripMeter> PA_DD_OdometerTripMeter1;			// data : default value is 0, Range is 0 to 9999.9
extern SharedMemory::AtomicStruct<PA_ODO_TripMeter> PA_DD_OdometerTripMeter2;			// data : default value is 0, Range is 0 to 9999.9
extern SharedMemory::AtomicStruct<PA_TripMeterRadioButton> PA_DD_TripMeterRadioButton;	// refer to struct

// 3.9 CalcnOfTripInfo
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_DTEHVBattIndicated;			// data: value of DTE ###; format: 0 = km, 1 =miles; Status: 0 = Short distance status ON. 1 = Short distance status OFF
extern SharedMemory::AtomicStruct<PA_TC_EDTIndicated> PA_TC_EDT1Indicated;	// refer to struct
extern SharedMemory::AtomicStruct<PA_TC_EDTIndicated> PA_TC_EDT2Indicated;	// refer to struct
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_AVS1Indicated;				// data: Dynamic; format: 0 = km/h, 1 =miles/h; Status: 0 = Resetmode, 1 =normal mode
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_AVS2Indicated;				// data: Dynamic(Average Speed###); format: 0 = km/h, 1 =miles/h; Status: 0 = Resetmode, 1 =normal mode
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_AEC1Indicated;				// data: Dynamic; format: 0 = (kWh/100 km), 1 =(kWh/100 mile); Status: 0 = Resetmode, 1 =normal mode
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_AEC2Indicated;				// data: Dynamic; format: 0 = (kWh/100 km), 1 =(kWh/100 mile); Status: 0 = Resetmode, 1 =normal mode
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_IECIndicated;				// data: Dynamic; format: 0 = (kWh/100 km), 1 =(kWh/100 mile); Status: 0 = Low speed Indication active 1 = Low speed Indication inactive
extern SharedMemory::AtomicStruct<PA_TC_Zero> PA_TC_Zero_Emission;			// refer to struct
extern SharedMemory::AtomicStruct<PA_TC_DTE> PA_TC_DTEIndicated;			// refer to struct
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_AFC1Indicated;				// data: Dynamic(AFC value ##.#); format: 0 =liter/100 km, 1 =km/liter, 2 =miles/UK Gallon, 3 =Miles/USGallon; Status: 0 = Resetmode, 1 =normal mode
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_AFC2Indicated;				// data: Dynamic(AFC value ##.#); format: 0 =liter/100 km, 1 =km/liter, 2 =miles/UK Gallon, 3 =Miles/USGallon; Status: 0 = Resetmode, 1 =normal mode
extern SharedMemory::AtomicStruct<PA_TC> PA_TC_IFCIndicatedCalc;			// data: Dynamic; format: 0 =liter/100 km, 1 =km/liter, 2 =miles/UK Gallon, 3 =Miles/USGallon; Status: 0 = Lowspeed Indication active, 1 = Low speed Indication inactive

// 3.20 Energy and Power Benefit Display
extern SharedMemory::AtomicStruct<PA_TC_EnergyPowerBenefit> PA_ZeroEmissionTime;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TC_SailingTime> PA_SailingTime;					// refer to struct
extern SharedMemory::AtomicStruct<PA_TC_EnergyPowerBenefit> PA_BoostTime;				// refer to struct
extern SharedMemory::AtomicStruct<PA_TC_EnergyPowerBenefit> PA_EconomicalMileage;		// refer to struct


///////// End VP->SOC PA///////////////////

//////// SOC PA

// 3.4 Power Flow Indication
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_PHEVPowerFlowIndic;		// data: 0 to 12
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_BEVPowerFlowIndic;		// data: 0 to 6
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_BSGPowerFlowIndic;		// data: 0 to 8
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_HEVPowerFlowIndic;		// data: 0 to 14

// 3.6 Outdoor Temperature Indication(OAT)
extern SharedMemory::AtomicStruct<PA_OAT> PA_ODT_TempIndicated;				// refer to struct
extern SharedMemory::AtomicStruct<PA_OAT> PA_ODT_SnowFlakeLit;				// refer to struct

// 3.7 Drive Mode and Theme
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_USAGE_MODE;				// data: 0 = ABANDONED, 1 = INACTIVE, 2 = CONVENIANCE, 11 = ACTIVE, 13 = DRIVING; availability: not used, always 1(Active)
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_GpilotDisplay;			// data: 0 = Off, 1 = On; availability: 1 = Active, 2 = NotActive, 3 = Error, 4 = Not availability
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_DriverDisplay;			// data: 0 = Comfort, 1 = Eco, 2 = Dynamic, 3 = Offroad, 4 = Individual, 5 = Sport+/Race, 6 = Pure, 7 = Hybrid, 8 = Power, 9 = Snow, 10 = Sand, 11 = Mud, 12 = Rock; availability: 1 = Active, 2 = NotActive, 3 = Error
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_DriverDisplayBg;			// data: 0 = Comfort, 1 = Eco, 2 = Dynamic, 3 = Offroad, 4 = Individual, 5 = Sport+/Race, 6 = Pure, 7 = Hybrid, 8 = Power, 9 = Snow, 10 = Sand, 11 = Mud, 12 = Rock; availability: 1 = Active, 2 = NotActive, 3 = Error
extern SharedMemory::AtomicStruct<PA_Trip> PA_DIM_DriverDisplayBg2;			// data: 0 = Comfort, 1 = Eco, 2 = Dynamic, 3 = Offroad, 4 = Individual, 5 = Sport+/Race, 6 = Pure, 7 = Hybrid, 8 = Power, 9 = Snow, 10 = Sand, 11 = Mud, 12 = Rock; availability: 1 = Active, 2 = NotActive, 3 = Error

// 3.8 TPMS
// 3.8.4.1.1 Pressure Display
extern SharedMemory::AtomicStruct<PA_TireMsgP> PA_LeFrntTireMsgP;				// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgP> PA_RiFrntTireMsgP;				// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgP> PA_LeReTireMsgP;					// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgP> PA_RiReTireMsgP;					// refer to struct
// 3.8.4.1.2 Temperature Display
extern SharedMemory::AtomicStruct<PA_TireMsgT> PA_LeFrntTireMsgT;				// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgT> PA_RiFrntTireMsgT;				// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgT> PA_LeReTireMsgT;					// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgT> PA_RiReTireMsgT;					// refer to struct
// 3.8.4.1.3 Message Old
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgMsgOldFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgMsgOldFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgMsgOldFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgMsgOldFlg;		// refer to struct
// 3.8.4.1.5.1 Notification # TireLowPressure Req. ID 93314
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgPWarnFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgPWarnFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgPWarnFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgPWarnFlg;		// refer to struct
// 3.8.4.1.5.2 Notification # TireTemperature Req. ID 93320
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgTWarnFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgTWarnFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgTWarnFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgTWarnFlg;		// refer to struct
// 3.8.4.1.5.3 Notification # TireSystem  Req. ID 93335
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgSysWarnFlg;	// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgSysWarnFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgSysWarnFlg;	// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgSysWarnFlg;		// refer to struct
//3.8.4.1.5.4 Notification # TireFastLose  Req. ID 93339
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgFastLoseWarnFlg;	// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgFastLoseWarnFlg;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgFastLoseWarnFlg;	// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgFastLoseWarnFlg;		// refer to struct
//3.8.4.1.5.5	Notification # TireBatteryLost Req. ID 93343
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgBattLoSt;			// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgBattLoSt;			// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgBattLoSt;			// refer to struct
extern SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgBattLoSt;			// refer to struct

// 3.10 Clock
extern SharedMemory::AtomicStruct<PA_Clock> PA_CI_TimeAndDateIndicated;				// refer to struct

// 3.11	Screen switch on charging or discharging
extern SharedMemory::AtomicNumber<unsigned char> PA_TC_ACChargingAvailable;		// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_DispHvBattLvlOfChrg;	// factor = 0.1
extern SharedMemory::AtomicNumber<signed int> PA_TC_OnBdChrgrIAct;				// factor = 0.1
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_OnBdChrgrUAct;			// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_ChrgnSpd;				// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_HvBattChrgnTiEstimd;	// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned char> PA_TC_OnBdChrgrHndlSts1;		// default value is 0, 1 = AC charging or discharging cable is connected, 2 = AC charging cable connected, 3 = The cable plugged in is not match,try to change another one, 4 = AC Discharging Cable is connected
extern SharedMemory::AtomicNumber<unsigned char> PA_TC_DCChrgnHndlSts;			// default value is 0, 1 = DC charging cable is connected
extern SharedMemory::AtomicNumber<unsigned char> PA_TC_ChrgnOrDisChrgnStsFb;	// default value is 0, 8 = Discharging, 9 = Discharging End, 12 = Show Discharge failure\nSee user manual, 2 = AC Charging, 3 = ChargingEnd due to softButton click or other reasons, 4 = ChargingComplete due to reach the setting SOC, 5 = AC Charge heating\nPlease waite, 6 = Reserving
extern SharedMemory::AtomicNumber<unsigned char> PA_TC_DCChrgSt;				// default value is 0, 1= DC charging finished, 2 = DC charging, 3 = Charging failure\nSee User Manual
extern SharedMemory::AtomicNumber<unsigned char> PA_TC_DCChargingAvailable;		// detail info refer to bitmap
extern SharedMemory::AtomicNumber<signed int> PA_TC_HvBattIDc1;					// factor = 0.1
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_HvBattUDc;				// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned char> PA_TC_DischargingAvailable;	// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_DchaIAct;				// factor = 0.1
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_DchaUAct;				// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_HvBattDchaTiEstimd;		// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned short> PA_TC_DchaEgyAct;				// factor = 0.1
extern SharedMemory::AtomicStruct<PA_value_6bit> PA_OnBdChrgrSt;				// detail info refer to bitmap
extern SharedMemory::AtomicStruct<PA_value_6bit> PA_BookChargeSetResponse;		// detail info refer to bitmap
extern SharedMemory::AtomicNumber<unsigned char> PA_TC_DchaStopByTarDrvrIndcn;	// detail info refer to bitmap
extern SharedMemory::AtomicStruct<PA_Trip> PA_Color_HVBattSOC;					// detail info refer to bitmap

// 3.13	HV Battery Usage Mode Indication
extern SharedMemory::AtomicStruct<PA_Charge> PA_DIM_StateOfCharge;				// refer to struct

// 3.14 Turbo Pressure Indication
extern SharedMemory::AtomicStruct<PA_TurboPressure> PA_TR_TurboPressureIndicated;		// refer to struct
extern SharedMemory::AtomicStruct<PA_TurboPressure> PA_TR_MaxTurboPressureIndicated;	// refer to struct

// 3.15 ECO coach Indication
extern SharedMemory::AtomicStruct<PA_ECOcoach> PA_EC_EcoMeter;					// factor = 0.1
extern SharedMemory::AtomicStruct<PA_ECOcoach> PA_EC_EcoGrade;					// factor = 0.1

// 3.16 Reward Mileage (GHS)
extern SharedMemory::AtomicStruct<PA_Reward> PA_RewardMileage;					// factor = 0.1, format: 0 - km, 1 - mile

// 3.18	HDC target speed display
extern SharedMemory::AtomicStruct<PA_TargetSpeed> PA_HDCTargetSpeed;			// refer to struct

// 3.21	[DIM_FC_507_021]Door Open Warning Flash
extern SharedMemory::AtomicStruct<PA_Trip> PA_DOW_WarningFlash;					// refer to struct

// 3.23	[DIM_FC_507_023]Energy Regeneration level
extern SharedMemory::AtomicStruct<PA_Trip> PA_EnergyRegenerativeLevel;			// refer to struct


///////////From HMI ////////////////////
extern SharedMemory::AtomicNumber<unsigned char> PA_HMITrip_View;


#endif // !PA_TRIP_H
