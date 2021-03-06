#ifndef PA_TRIP_FUNC_H_
#define PA_TRIP_FUNC_H_


void* funcPA_DGS_GearLvrIndcn(int argc, char *argv[]);
void* funcPA_DGS_GearIndcn(int argc, char *argv[]);
void* funcPA_DGS_GearShiftIndcn(int argc, char *argv[]);
void* funcPA_DD_OdometerIndicated(int argc, char *argv[]);
void* funcPA_DD_OdometerTripMeter1(int argc, char *argv[]);
void* funcPA_DD_OdometerTripMeter2(int argc, char *argv[]);
void* funcPA_DD_TripMeterRadioButton(int argc, char *argv[]);
void* funcPA_TC_DTEHVBattIndicated(int argc, char *argv[]);
void* funcPA_TC_EDT1Indicated(int argc, char *argv[]);
void* funcPA_TC_EDT2Indicated(int argc, char *argv[]);
void* funcPA_TC_AVS1Indicated(int argc, char *argv[]);
void* funcPA_TC_AVS2Indicated(int argc, char *argv[]);
void* funcPA_TC_AEC1Indicated(int argc, char *argv[]);
void* funcPA_TC_AEC2Indicated(int argc, char *argv[]);
void* funcPA_TC_IECIndicated(int argc, char *argv[]);
void* funcPA_TC_Zero_Emission(int argc, char *argv[]);
void* funcPA_TC_DTEIndicated(int argc, char *argv[]);
void* funcPA_TC_AFC1Indicated(int argc, char *argv[]);
void* funcPA_TC_AFC2Indicated(int argc, char *argv[]);
void* funcPA_TC_IFCIndicatedCalc(int argc, char *argv[]);
void* funcPA_ZeroEmissionTime(int argc, char *argv[]);
void* funcPA_SailingTime(int argc, char *argv[]);
void* funcPA_BoostTime(int argc, char *argv[]);
void* funcPA_EconomicalMileage(int argc, char *argv[]);
void* funcPA_DIM_PHEVPowerFlowIndic(int argc, char *argv[]);
void* funcPA_DIM_BEVPowerFlowIndic(int argc, char *argv[]);
void* funcPA_DIM_BSGPowerFlowIndic(int argc, char *argv[]);
void* funcPA_DIM_HEVPowerFlowIndic(int argc, char *argv[]);
void* funcPA_ODT_TempIndicated(int argc, char *argv[]);
void* funcPA_ODT_SnowFlakeLit(int argc, char *argv[]);
void* funcPA_DIM_USAGE_MODE(int argc, char *argv[]);
void* funcPA_DIM_GpilotDisplay(int argc, char *argv[]);
void* funcPA_DIM_DriverDisplay(int argc, char *argv[]);
void* funcPA_DIM_DriverDisplayBg(int argc, char *argv[]);
void* funcPA_DIM_DriverDisplayBg2(int argc, char *argv[]);
void* funcPA_LeFrntTireMsgP(int argc, char *argv[]);
void* funcPA_RiFrntTireMsgP(int argc, char *argv[]);
void* funcPA_LeReTireMsgP(int argc, char *argv[]);
void* funcPA_RiReTireMsgP(int argc, char *argv[]);
void* funcPA_LeFrntTireMsgT(int argc, char *argv[]);
void* funcPA_RiFrntTireMsgT(int argc, char *argv[]);
void* funcPA_LeReTireMsgT(int argc, char *argv[]);
void* funcPA_RiReTireMsgT(int argc, char *argv[]);
void* funcPA_LeFrntTireMsgMsgOldFlg(int argc, char *argv[]);
void* funcPA_LeReTireMsgMsgOldFlg(int argc, char *argv[]);
void* funcPA_RiFrntTireMsgMsgOldFlg(int argc, char *argv[]);
void* funcPA_RiReTireMsgMsgOldFlg(int argc, char *argv[]);
void* funcPA_LeFrntTireMsgPWarnFlg(int argc, char *argv[]);
void* funcPA_LeReTireMsgPWarnFlg(int argc, char *argv[]);
void* funcPA_RiFrntTireMsgPWarnFlg(int argc, char *argv[]);
void* funcPA_RiReTireMsgPWarnFlg(int argc, char *argv[]);
void* funcPA_LeFrntTireMsgTWarnFlg(int argc, char *argv[]);
void* funcPA_LeReTireMsgTWarnFlg(int argc, char *argv[]);
void* funcPA_RiFrntTireMsgTWarnFlg(int argc, char *argv[]);
void* funcPA_RiReTireMsgTWarnFlg(int argc, char *argv[]);
void* funcPA_LeFrntTireMsgSysWarnFlg(int argc, char *argv[]);
void* funcPA_LeReTireMsgSysWarnFlg(int argc, char *argv[]);
void* funcPA_RiFrntTireMsgSysWarnFlg(int argc, char *argv[]);
void* funcPA_RiReTireMsgSysWarnFlg(int argc, char *argv[]);
void* funcPA_LeFrntTireMsgFastLoseWarnFlg(int argc, char *argv[]);
void* funcPA_LeReTireMsgFastLoseWarnFlg(int argc, char *argv[]);
void* funcPA_RiFrntTireMsgFastLoseWarnFlg(int argc, char *argv[]);
void* funcPA_RiReTireMsgFastLoseWarnFlg(int argc, char *argv[]);
void* funcPA_LeFrntTireMsgBattLoSt(int argc, char *argv[]);
void* funcPA_LeReTireMsgBattLoSt(int argc, char *argv[]);
void* funcPA_RiFrntTireMsgBattLoSt(int argc, char *argv[]);
void* funcPA_RiReTireMsgBattLoSt(int argc, char *argv[]);
void* funcPA_CI_TimeAndDateIndicated(int argc, char *argv[]);
void* funcPA_TC_ACChargingAvailable(int argc, char *argv[]);
void* funcPA_TC_DispHvBattLvlOfChrg(int argc, char *argv[]);
void* funcPA_TC_OnBdChrgrIAct(int argc, char *argv[]);
void* funcPA_TC_OnBdChrgrUAct(int argc, char *argv[]);
void* funcPA_TC_ChrgnSpd(int argc, char *argv[]);
void* funcPA_TC_HvBattChrgnTiEstimd(int argc, char *argv[]);
void* funcPA_TC_OnBdChrgrHndlSts1(int argc, char *argv[]);
void* funcPA_TC_DCChrgnHndlSts(int argc, char *argv[]);
void* funcPA_TC_ChrgnOrDisChrgnStsFb(int argc, char *argv[]);
void* funcPA_TC_DCChrgSt(int argc, char *argv[]);
void* funcPA_TC_DCChargingAvailable(int argc, char *argv[]);
void* funcPA_TC_HvBattIDc1(int argc, char *argv[]);
void* funcPA_TC_HvBattUDc(int argc, char *argv[]);
void* funcPA_TC_DischargingAvailable(int argc, char *argv[]);
void* funcPA_TC_DchaIAct(int argc, char *argv[]);
void* funcPA_TC_DchaUAct(int argc, char *argv[]);
void* funcPA_TC_HvBattDchaTiEstimd(int argc, char *argv[]);
void* funcPA_TC_DchaEgyAct(int argc, char *argv[]);
void* funcPA_OnBdChrgrSt(int argc, char *argv[]);
void* funcPA_BookChargeSetResponse(int argc, char *argv[]);
void* funcPA_TC_DchaStopByTarDrvrIndcn(int argc, char *argv[]);
void* funcPA_Color_HVBattSOC(int argc, char *argv[]);
void* funcPA_DIM_StateOfCharge(int argc, char *argv[]);
void* funcPA_TR_TurboPressureIndicated(int argc, char *argv[]);
void* funcPA_TR_MaxTurboPressureIndicated(int argc, char *argv[]);
void* funcPA_EC_EcoMeter(int argc, char *argv[]);
void* funcPA_EC_EcoGrade(int argc, char *argv[]);
void* funcPA_RewardMileage(int argc, char *argv[]);
void* funcPA_HDCTargetSpeed(int argc, char *argv[]);
void* funcPA_DOW_WarningFlash(int argc, char *argv[]);
void* funcPA_EnergyRegenerativeLevel(int argc, char *argv[]);
void* funcPA_HMITrip_View(int argc, char *argv[]);


void initpa_tripFuncMap();

#endif //PA_TRIP_FUNC_H_
