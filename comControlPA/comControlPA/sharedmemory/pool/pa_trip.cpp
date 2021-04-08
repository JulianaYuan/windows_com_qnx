#include "pa_trip.h"

SharedMemory::Pool SharedMemoryPool_PA_Trip{ "PA_Trip", 65535 };

/////////// VP->SOC PA///////////

// 3.3 Gear
SharedMemory::AtomicStruct<PA_DGS_Gear> PA_DGS_GearLvrIndcn(SharedMemoryPool_PA_Trip,	"PA_DGS_GearLvrIndcn",		{ 0, 4 });
SharedMemory::AtomicStruct<PA_DGS_Gear> PA_DGS_GearIndcn(SharedMemoryPool_PA_Trip,		"PA_DGS_GearIndcn",			{ 0, 4 });
SharedMemory::AtomicStruct<PA_DGS_Gear> PA_DGS_GearShiftIndcn(SharedMemoryPool_PA_Trip,	"PA_DGS_GearShiftIndcn",	{ 0, 4 });

// 3.5 Odo and Trip1, Trip2
SharedMemory::AtomicStruct<PA_ODO_TripMeter> PA_DD_OdometerIndicated(SharedMemoryPool_PA_Trip,			"PA_DD_OdometerIndicated",		{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_ODO_TripMeter> PA_DD_OdometerTripMeter1(SharedMemoryPool_PA_Trip,			"PA_DD_OdometerTripMeter1",		{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_ODO_TripMeter> PA_DD_OdometerTripMeter2(SharedMemoryPool_PA_Trip,			"PA_DD_OdometerTripMeter2",		{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_TripMeterRadioButton> PA_DD_TripMeterRadioButton(SharedMemoryPool_PA_Trip,"PA_DD_TripMeterRadioButton",	{ 2, 0, 0, 4 });

// 3.9 CalcnOfTripInfo
SharedMemory::AtomicStruct<PA_TC> PA_TC_DTEHVBattIndicated(SharedMemoryPool_PA_Trip,		"PA_TC_DTEHVBattIndicated",	{ 0, 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC_EDTIndicated> PA_TC_EDT1Indicated(SharedMemoryPool_PA_Trip,"PA_TC_EDT1Indicated",		{ 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC_EDTIndicated> PA_TC_EDT2Indicated(SharedMemoryPool_PA_Trip,"PA_TC_EDT2Indicated",		{ 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC> PA_TC_AVS1Indicated(SharedMemoryPool_PA_Trip,				"PA_TC_AVS1Indicated",		{ 0, 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC> PA_TC_AVS2Indicated(SharedMemoryPool_PA_Trip,				"PA_TC_AVS2Indicated",		{ 0, 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC> PA_TC_AEC1Indicated(SharedMemoryPool_PA_Trip,				"PA_TC_AEC1Indicated",		{ 0, 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC> PA_TC_AEC2Indicated(SharedMemoryPool_PA_Trip,				"PA_TC_AEC2Indicated",		{ 0, 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC> PA_TC_IECIndicated(SharedMemoryPool_PA_Trip,				"PA_TC_IECIndicated",		{ 0, 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC_Zero> PA_TC_Zero_Emission(SharedMemoryPool_PA_Trip,		"PA_TC_Zero_Emission",		{ 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC_DTE> PA_TC_DTEIndicated(SharedMemoryPool_PA_Trip,			"TC_DTEIndicated",			{ 0, 0, 4, 0, 0 });
SharedMemory::AtomicStruct<PA_TC> PA_TC_AFC1Indicated(SharedMemoryPool_PA_Trip,				"PA_TC_AFC1Indicated",		{ 0, 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC> PA_TC_AFC2Indicated(SharedMemoryPool_PA_Trip,				"PA_TC_AFC2Indicated",		{ 0, 0, 4, 0 });
SharedMemory::AtomicStruct<PA_TC> PA_TC_IFCIndicatedCalc(SharedMemoryPool_PA_Trip,			"PA_TC_IFCIndicatedCalc",	{ 0, 0, 4, 0 });

// 3.20 Energy and Power Benefit Display
SharedMemory::AtomicStruct<PA_TC_EnergyPowerBenefit> PA_ZeroEmissionTime(SharedMemoryPool_PA_Trip,	"PA_ZeroEmissionTime",	{ 0, 0, 4});
SharedMemory::AtomicStruct<PA_TC_SailingTime> PA_SailingTime(SharedMemoryPool_PA_Trip,				"PA_SailingTime",	{ 0, 0, 4});
SharedMemory::AtomicStruct<PA_TC_EnergyPowerBenefit> PA_BoostTime(SharedMemoryPool_PA_Trip,			"PA_BoostTime",	{ 0, 0, 4});
SharedMemory::AtomicStruct<PA_TC_EnergyPowerBenefit> PA_EconomicalMileage(SharedMemoryPool_PA_Trip,	"PA_EconomicalMileage",	{ 0, 0, 4});

///////// SOC PA////////////

// 3.4 Power Flow Indication
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_PHEVPowerFlowIndic(SharedMemoryPool_PA_Trip,		"PA_DIM_PHEVPowerFlowIndic",	{ 0, 4 });
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_BEVPowerFlowIndic(SharedMemoryPool_PA_Trip,		"PA_DIM_BEVPowerFlowIndic",		{ 0, 4 });
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_BSGPowerFlowIndic(SharedMemoryPool_PA_Trip,		"PA_DIM_BSGPowerFlowIndic",		{ 0, 4 });
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_HEVPowerFlowIndic(SharedMemoryPool_PA_Trip,		"PA_DIM_HEVPowerFlowIndic",		{ 0, 4 });

// 3.6 Outdoor Temperature Indication(OAT)
SharedMemory::AtomicStruct<PA_OAT> PA_ODT_TempIndicated(SharedMemoryPool_PA_Trip,			"PA_ODT_TempIndicated",			{ 0, 0, 0, 4 });
SharedMemory::AtomicStruct<PA_OAT> PA_ODT_SnowFlakeLit(SharedMemoryPool_PA_Trip,			"PA_ODT_SnowFlakeLit",			{ 0, 0, 0, 4 });

// 3.7 Drive Mode and Theme
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_USAGE_MODE(SharedMemoryPool_PA_Trip,				"PA_DIM_USAGE_MODE",			{ 0, 1 });
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_GpilotDisplay(SharedMemoryPool_PA_Trip,			"PA_DIM_GpilotDisplay",			{ 0, 4 });
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_DriverDisplay(SharedMemoryPool_PA_Trip,			"PA_DIM_DriverDisplay",			{ 0, 2 });
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_DriverDisplayBg(SharedMemoryPool_PA_Trip,		"PA_DIM_DriverDisplayBg",		{ 0, 4 });
SharedMemory::AtomicStruct<PA_Trip> PA_DIM_DriverDisplayBg2(SharedMemoryPool_PA_Trip,		"PA_DIM_DriverDisplayBg2",		{ 0, 4 });

// 3.8 TPMS
// 3.8.4.1.1 Pressure Display
SharedMemory::AtomicStruct<PA_TireMsgP> PA_LeFrntTireMsgP(SharedMemoryPool_PA_Trip,			"PA_LeFrntTireMsgP",	{ 0, 0, 0, 2 });
SharedMemory::AtomicStruct<PA_TireMsgP> PA_RiFrntTireMsgP(SharedMemoryPool_PA_Trip,			"PA_RiFrntTireMsgP",	{ 0, 0, 0, 2 });
SharedMemory::AtomicStruct<PA_TireMsgP> PA_LeReTireMsgP(SharedMemoryPool_PA_Trip,			"PA_LeReTireMsgP",		{ 0, 0, 0, 2 });
SharedMemory::AtomicStruct<PA_TireMsgP> PA_RiReTireMsgP(SharedMemoryPool_PA_Trip,			"PA_RiReTireMsgP",		{ 0, 0, 0, 2 });
// 3.8.4.1.2 Temperature Display
SharedMemory::AtomicStruct<PA_TireMsgT> PA_LeFrntTireMsgT(SharedMemoryPool_PA_Trip,			"PA_LeFrntTireMsgT",	{ 0, 0, 0, 2 });
SharedMemory::AtomicStruct<PA_TireMsgT> PA_RiFrntTireMsgT(SharedMemoryPool_PA_Trip,			"PA_RiFrntTireMsgT",	{ 0, 0, 0, 2 });
SharedMemory::AtomicStruct<PA_TireMsgT> PA_LeReTireMsgT(SharedMemoryPool_PA_Trip,			"PA_LeReTireMsgT",		{ 0, 0, 0, 2 });
SharedMemory::AtomicStruct<PA_TireMsgT> PA_RiReTireMsgT(SharedMemoryPool_PA_Trip,			"PA_RiReTireMsgT",		{ 0, 0, 0, 2 });
// 3.8.4.1.3 Message Old
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgMsgOldFlg(SharedMemoryPool_PA_Trip,		"PA_LeFrntTireMsgMsgOldFlg",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgMsgOldFlg(SharedMemoryPool_PA_Trip,			"PA_LeReTireMsgMsgOldFlg",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgMsgOldFlg(SharedMemoryPool_PA_Trip,		"PA_RiFrntTireMsgMsgOldFlg",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgMsgOldFlg(SharedMemoryPool_PA_Trip,			"PA_RiReTireMsgMsgOldFlg",		{ 0, 0 });
// 3.8.4.1.5.1 Notification # TireLowPressure Req. ID 93314
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgPWarnFlg(SharedMemoryPool_PA_Trip,		"PA_LeFrntTireMsgPWarnFlg",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgPWarnFlg(SharedMemoryPool_PA_Trip,			"PA_LeReTireMsgPWarnFlg",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgPWarnFlg(SharedMemoryPool_PA_Trip,		"PA_RiFrntTireMsgPWarnFlg",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgPWarnFlg(SharedMemoryPool_PA_Trip,			"PA_RiReTireMsgPWarnFlg",		{ 0, 0 });
// 3.8.4.1.5.2 Notification # TireTemperature Req. ID 93320
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgTWarnFlg(SharedMemoryPool_PA_Trip,		"PA_LeFrntTireMsgTWarnFlg",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgTWarnFlg(SharedMemoryPool_PA_Trip,			"PA_LeReTireMsgTWarnFlg",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgTWarnFlg(SharedMemoryPool_PA_Trip,		"PA_RiFrntTireMsgTWarnFlg",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgTWarnFlg(SharedMemoryPool_PA_Trip,			"PA_RiReTireMsgTWarnFlg",		{ 0, 0 });
// 3.8.4.1.5.3 Notification # TireSystem  Req. ID 93335
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgSysWarnFlg(SharedMemoryPool_PA_Trip,		"PA_LeFrntTireMsgSysWarnFlg",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgSysWarnFlg(SharedMemoryPool_PA_Trip,		"PA_LeReTireMsgSysWarnFlg",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgSysWarnFlg(SharedMemoryPool_PA_Trip,		"PA_RiFrntTireMsgSysWarnFlg",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgSysWarnFlg(SharedMemoryPool_PA_Trip,		"PA_RiReTireMsgSysWarnFlg",		{ 0, 0 });
//3.8.4.1.5.4 Notification # TireFastLose  Req. ID 93339
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgFastLoseWarnFlg(SharedMemoryPool_PA_Trip,	"PA_LeFrntTireMsgFastLoseWarnFlg",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgFastLoseWarnFlg(SharedMemoryPool_PA_Trip,	"PA_LeReTireMsgFastLoseWarnFlg",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgFastLoseWarnFlg(SharedMemoryPool_PA_Trip,	"PA_RiFrntTireMsgFastLoseWarnFlg",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgFastLoseWarnFlg(SharedMemoryPool_PA_Trip,	"PA_RiReTireMsgFastLoseWarnFlg",	{ 0, 0 });
//3.8.4.1.5.5	Notification # TireBatteryLost Req. ID 93343
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeFrntTireMsgBattLoSt(SharedMemoryPool_PA_Trip,		"PA_LeFrntTireMsgBattLoSt",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_LeReTireMsgBattLoSt(SharedMemoryPool_PA_Trip,			"PA_LeReTireMsgBattLoSt",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiFrntTireMsgBattLoSt(SharedMemoryPool_PA_Trip,		"PA_RiFrntTireMsgBattLoSt",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_TireMsgFlg> PA_RiReTireMsgBattLoSt(SharedMemoryPool_PA_Trip,			"PA_RiReTireMsgBattLoSt",		{ 0, 0 });

// 3.10 Clock
SharedMemory::AtomicStruct<PA_Clock> PA_CI_TimeAndDateIndicated(SharedMemoryPool_PA_Trip,			"PA_CI_TimeAndDateIndicated",		{ 0, 0, 0, 0, 0, 0, 0, 3 });


// 3.11	Screen switch on charging or discharging
SharedMemory::AtomicNumber<unsigned char> PA_TC_ACChargingAvailable(SharedMemoryPool_PA_Trip,			"PA_TC_ACChargingAvailable",	{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_DispHvBattLvlOfChrg(SharedMemoryPool_PA_Trip,			"PA_TC_DispHvBattLvlOfChrg",	{ 0 });
SharedMemory::AtomicNumber<signed int> PA_TC_OnBdChrgrIAct(SharedMemoryPool_PA_Trip,					"PA_TC_OnBdChrgrIAct",			{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_OnBdChrgrUAct(SharedMemoryPool_PA_Trip,				"PA_TC_OnBdChrgrUAct",			{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_ChrgnSpd(SharedMemoryPool_PA_Trip,						"PA_TC_ChrgnSpd",				{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_HvBattChrgnTiEstimd(SharedMemoryPool_PA_Trip,			"PA_TC_HvBattChrgnTiEstimd",	{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_TC_OnBdChrgrHndlSts1(SharedMemoryPool_PA_Trip,				"PA_TC_OnBdChrgrHndlSts1",		{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_TC_DCChrgnHndlSts(SharedMemoryPool_PA_Trip,				"PA_TC_DCChrgnHndlSts",			{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_TC_ChrgnOrDisChrgnStsFb(SharedMemoryPool_PA_Trip,			"PA_TC_ChrgnOrDisChrgnStsFb",	{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_TC_DCChrgSt(SharedMemoryPool_PA_Trip,						"PA_TC_DCChrgSt",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_TC_DCChargingAvailable(SharedMemoryPool_PA_Trip,			"PA_TC_DCChargingAvailable",	{ 0 });
SharedMemory::AtomicNumber<signed int> PA_TC_HvBattIDc1(SharedMemoryPool_PA_Trip,						"PA_TC_HvBattIDc1",				{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_HvBattUDc(SharedMemoryPool_PA_Trip,					"PA_TC_HvBattUDc",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_TC_DischargingAvailable(SharedMemoryPool_PA_Trip,			"PA_TC_DischargingAvailable",	{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_DchaIAct(SharedMemoryPool_PA_Trip,						"PA_TC_DchaIAct",				{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_DchaUAct(SharedMemoryPool_PA_Trip,						"PA_TC_DchaUAct",				{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_HvBattDchaTiEstimd(SharedMemoryPool_PA_Trip,			"PA_TC_HvBattDchaTiEstimd",		{ 0 });
SharedMemory::AtomicNumber<unsigned short> PA_TC_DchaEgyAct(SharedMemoryPool_PA_Trip,					"PA_TC_DchaEgyAct",				{ 0 });
SharedMemory::AtomicStruct<PA_value_6bit> PA_OnBdChrgrSt(SharedMemoryPool_PA_Trip, 						"PA_OnBdChrgrSt",				{ 0, 0, 0 });
SharedMemory::AtomicStruct<PA_value_6bit> PA_BookChargeSetResponse(SharedMemoryPool_PA_Trip, 			"PA_BookChargeSetResponse",		{ 0, 0, 0 });
SharedMemory::AtomicNumber<unsigned char> PA_TC_DchaStopByTarDrvrIndcn(SharedMemoryPool_PA_Trip,		"PA_TC_DchaStopByTarDrvrIndcn",	{ 0 });
SharedMemory::AtomicStruct<PA_Trip> PA_Color_HVBattSOC(SharedMemoryPool_PA_Trip,						"PA_Color_HVBattSOC",			{ 0, 0 });


// 3.13	HV Battery Usage Mode Indication
SharedMemory::AtomicStruct<PA_Charge> PA_DIM_StateOfCharge(SharedMemoryPool_PA_Trip,		"PA_DIM_StateOfCharge",			{ 0, 0, 0, 4 });

// 3.14 Turbo Pressure Indication
SharedMemory::AtomicStruct<PA_TurboPressure> PA_TR_TurboPressureIndicated(SharedMemoryPool_PA_Trip,		"PA_TR_TurboPressureIndicated",		{ 0, 0, 4 });
SharedMemory::AtomicStruct<PA_TurboPressure> PA_TR_MaxTurboPressureIndicated(SharedMemoryPool_PA_Trip,	"PA_TR_MaxTurboPressureIndicated",	{ 0, 0, 4 });

// 3.15 ECO coach Indication
SharedMemory::AtomicStruct<PA_ECOcoach> PA_EC_EcoMeter(SharedMemoryPool_PA_Trip,			"PA_EC_EcoMeter",				{ 0, 4 });
SharedMemory::AtomicStruct<PA_ECOcoach> PA_EC_EcoGrade(SharedMemoryPool_PA_Trip,			"PA_EC_EcoGrade",				{ 0, 4 });

// 3.16 Reward Mileage (GHS)
SharedMemory::AtomicStruct<PA_Reward> PA_RewardMileage(SharedMemoryPool_PA_Trip,			"PA_RewardMileage",				{ 0, 0, 0, 4 });

// 3.18	HDC target speed display
SharedMemory::AtomicStruct<PA_TargetSpeed> PA_HDCTargetSpeed(SharedMemoryPool_PA_Trip,		"PA_HDCTargetSpeed",			{ 0, 0, 0, 4 });

// 3.21	[DIM_FC_507_021]Door Open Warning Flash
SharedMemory::AtomicStruct<PA_Trip> PA_DOW_WarningFlash(SharedMemoryPool_PA_Trip,			"PA_DOW_WarningFlash",			{ 0, 4 });

// 3.23	[DIM_FC_507_023]Energy Regeneration level
SharedMemory::AtomicStruct<PA_Trip> PA_EnergyRegenerativeLevel(SharedMemoryPool_PA_Trip,	"PA_EnergyRegenerativeLevel",	{ 0, 4 });


///////////From HMI ////////////////////
SharedMemory::AtomicNumber<unsigned char> PA_HMITrip_View(SharedMemoryPool_PA_Trip,			"PA_HMITrip_View",				{ 0 });

