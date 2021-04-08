#ifndef PA_TELLTALE_FUNC_H_
#define PA_TELLTALE_FUNC_H_


void* funcPA_AFSLamp(int argc, char *argv[]);
void* funcPA_PositionLamp(int argc, char *argv[]);
void* funcPA_HighBeamLamp(int argc, char *argv[]);
void* funcPA_LowBeamLamp(int argc, char *argv[]);
void* funcPA_ABLLamp(int argc, char *argv[]);
void* funcPA_ManualLevelingLamp(int argc, char *argv[]);
void* funcPA_FrontFogLamp(int argc, char *argv[]);
void* funcPA_RearFogLamp(int argc, char *argv[]);
void* funcPA_TurnLeftLamp(int argc, char *argv[]);
void* funcPA_TurnRightLamp(int argc, char *argv[]);
void* funcPA_BrakeLightFailure(int argc, char *argv[]);
void* funcPA_AHBCLamp(int argc, char *argv[]);
void* funcPA_DIM_ReadyLamp(int argc, char *argv[]);
void* funcPA_DIM_CheckEngineLamp(int argc, char *argv[]);
void* funcPA_BATT_BatteryLowIndicator(int argc, char *argv[]);
void* funcPA_BATT_BatteryFailureIndicator(int argc, char *argv[]);
void* funcPA_BATT_ChargingHandleIndicator(int argc, char *argv[]);
void* funcPA_DIM_OilPressureLamp(int argc, char *argv[]);
void* funcPA_DIM_PowerLimitationLamp(int argc, char *argv[]);
void* funcPA_DIM_SystemFaultLamp(int argc, char *argv[]);
void* funcPA_DIM_ElectricalMachineErrorLamp(int argc, char *argv[]);
void* funcPA_DIM_SRSLamp(int argc, char *argv[]);
void* funcPA_BRK_ESCIndicator(int argc, char *argv[]);
void* funcPA_BRK_EscSportIndicator(int argc, char *argv[]);
void* funcPA_BRK_ABSIndicator(int argc, char *argv[]);
void* funcPA_BRK_HDCWhiteIndicator(int argc, char *argv[]);
void* funcPA_BRK_HDCGreenIndicator(int argc, char *argv[]);
void* funcPA_BRK_HDCYellowIndicator(int argc, char *argv[]);
void* funcPA_BRK_BrakeReleaseIndicator(int argc, char *argv[]);
void* funcPA_BRK_EPBIndicator(int argc, char *argv[]);
void* funcPA_BRK_BrakeYellowIndicator(int argc, char *argv[]);
void* funcPA_BRK_BrakeRedIndicator(int argc, char *argv[]);
void* funcPA_BRK_AutoHoldIndicator(int argc, char *argv[]);
void* funcPA_DIM_EngineCoolantWarningLamp(int argc, char *argv[]);
void* funcPA_TowbarUnlockLamp(int argc, char *argv[]);
void* funcPA_TrailerLightStatusLamp(int argc, char *argv[]);
void* funcPA_TrailerServiceLamp(int argc, char *argv[]);
void* funcPA_DIM_StartStopLamp(int argc, char *argv[]);
void* funcPA_LVE_BatteryIndicator(int argc, char *argv[]);
void* funcPA_DIM_LeftChildLockStatus(int argc, char *argv[]);
void* funcPA_DIM_RightChildLockStatus(int argc, char *argv[]);
void* funcPA_TIR_TirePressureFault(int argc, char *argv[]);
void* funcPA_SteeringIndicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionYellowIndicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionRedIndicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionMovingUpIndicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionMovingDownIndicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionStopIndicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionCurrentLevelLL1Indicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionCurrentLevelLL2Indicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionCurrentLevelNRHIndicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionCurrentLevelHL1Indicator(int argc, char *argv[]);
void* funcPA_SUSP_SuspensionCurrentLevelHL2Indicator(int argc, char *argv[]);
void* funcPA_DPS_coffeecup_lamp(int argc, char *argv[]);
void* funcPA_DIM_ExternalArtIficialSoundLamp(int argc, char *argv[]);
void* funcPA_DIM_ParkingEmergencyBrakeLamp(int argc, char *argv[]);
void* funcPA_EPWISt(int argc, char *argv[]);
void* funcPA_EPWIStUS(int argc, char *argv[]);
void* funcPA_RWSIndicator(int argc, char *argv[]);
void* funcPA_EpedalIndicator(int argc, char *argv[]);
void* funcPA_Seatbelt(int argc, char *argv[]);
void* funcPA_SVSLamp(int argc, char *argv[]);
void* funcPA_TCMLamp(int argc, char *argv[]);
void* funcPA_OLI_OilLevelIndicated(int argc, char *argv[]);
void* funcPA_Seatbelt_Driver(int argc, char *argv[]);
void* funcPA_Seatbelt_Passenger(int argc, char *argv[]);
void* funcPA_Seatbelt_MidPassenger(int argc, char *argv[]);
void* funcPA_Seatbelt_SecLeft(int argc, char *argv[]);
void* funcPA_Seatbelt_SecMid(int argc, char *argv[]);
void* funcPA_Seatbelt_SecRight(int argc, char *argv[]);
void* funcPA_Seatbelt_ThrdLeft(int argc, char *argv[]);
void* funcPA_Seatbelt_ThrdMid(int argc, char *argv[]);
void* funcPA_Seatbelt_ThrdRight(int argc, char *argv[]);
void* funcPA_Seatbelt_FrthLeft(int argc, char *argv[]);
void* funcPA_Seatbelt_FrthMid(int argc, char *argv[]);
void* funcPA_Seatbelt_FrthRight(int argc, char *argv[]);
void* funcCPA_UsgModSts(int argc, char *argv[]);
void* funcCPA_Carconfig8(int argc, char *argv[]);
void* funcPA_Seatbelt_output(int argc, char *argv[]);


void initpa_telltaleFuncMap();

#endif //PA_TELLTALE_FUNC_H_
