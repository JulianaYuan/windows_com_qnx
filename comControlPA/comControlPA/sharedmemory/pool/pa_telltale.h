#ifndef PA_TELLTALE_H
#define PA_TELLTALE_H

#include "../sharedmemory.hpp"

struct PA_Telltale
{
	unsigned char availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
	unsigned char data : 5;					// default value is 0, Range and value refer to signal
};

extern SharedMemory::Pool SharedMemoryPool_PA_Telltale;

extern SharedMemory::AtomicStruct<PA_Telltale> PA_AFSLamp;							// 0 = Off, 1 = On, 2 = Error
extern SharedMemory::AtomicStruct<PA_Telltale> PA_PositionLamp;						// 0 = Off, 1 = On, 2 = Error
extern SharedMemory::AtomicStruct<PA_Telltale> PA_HighBeamLamp;						// 0 = Off, 1 = On, 2 = Error, 3 = PassLamp
extern SharedMemory::AtomicStruct<PA_Telltale> PA_LowBeamLamp;						// 0 = Off, 1 = On, 2 = Error
extern SharedMemory::AtomicStruct<PA_Telltale> PA_ABLLamp;							// 0 = Off, 1 = On, 2 = Error
extern SharedMemory::AtomicStruct<PA_Telltale> PA_ManualLevelingLamp;				// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_FrontFogLamp;						// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_RearFogLamp;						// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_TurnLeftLamp;						// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_TurnRightLamp;					// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BrakeLightFailure;				// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_AHBCLamp;							// 0 = Off, 1 = On, 2 = Error
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_ReadyLamp;					// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_CheckEngineLamp;				// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BATT_BatteryLowIndicator;			// 0 = yellow, 1 = white
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BATT_BatteryFailureIndicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BATT_ChargingHandleIndicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_OilPressureLamp;				// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_PowerLimitationLamp;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_SystemFaultLamp;				// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_ElectricalMachineErrorLamp;	// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_SRSLamp;						// 0 = Off, 1 = Flash, 2 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_ESCIndicator;					// 0 = Off, 1 = Flash, 2 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_EscSportIndicator;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_ABSIndicator;					// 0 = Off, 1 = Flash, 2 = Flash_US, 3 = On, 4 = On_US
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_HDCWhiteIndicator;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_HDCGreenIndicator;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_HDCYellowIndicator;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_BrakeReleaseIndicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_EPBIndicator;					// 0 = Off, 1 = Flash, 2 = Flash_US, 3 = On, 4 = On_US
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_BrakeYellowIndicator;			// 0 = Off, 1 = On, 2 = On_US ----SRD not define
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_BrakeRedIndicator;			// 0 = Off, 1 = On, 2 = On_US ----SRD not define
extern SharedMemory::AtomicStruct<PA_Telltale> PA_BRK_AutoHoldIndicator;			// 0 = Off, 1 = On, Note: HUD lamp also use this PA
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_EngineCoolantWarningLamp;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_TowbarUnlockLamp;					// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_TrailerLightStatusLamp;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_TrailerServiceLamp;				// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_StartStopLamp;				// 0 = Off, 1 = Unavailable, 2 = InActive, 3 = Active
extern SharedMemory::AtomicStruct<PA_Telltale> PA_LVE_BatteryIndicator;				// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_LeftChildLockStatus;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_RightChildLockStatus;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_TIR_TirePressureFault;			// 0 = Off, 1 = Flash, 2 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SteeringIndicator;				// 0 = Off, 1 = red, 2 = yellow
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionYellowIndicator;	// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionRedIndicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionMovingUpIndicator;				// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionMovingDownIndicator;			// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionStopIndicator;					// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionCurrentLevelLL1Indicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionCurrentLevelLL2Indicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionCurrentLevelNRHIndicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionCurrentLevelHL1Indicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SUSP_SuspensionCurrentLevelHL2Indicator;		// 0 = Off, 1 = On
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DPS_coffeecup_lamp;				// 0 = Off, 1 = Flash level1, 2 = Flash level2
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_ExternalArtIficialSoundLamp;	// 0 = Off, 1 = yellow, 2 = red
extern SharedMemory::AtomicStruct<PA_Telltale> PA_DIM_ParkingEmergencyBrakeLamp;	// 0 = OFF, 1 = Yellow, 2 = red, 3 = Green
extern SharedMemory::AtomicStruct<PA_Telltale> PA_EPWISt;							// 0 = OFF, 1 = ON
extern SharedMemory::AtomicStruct<PA_Telltale> PA_EPWIStUS;							// 0 = OFF, 1 = ON
extern SharedMemory::AtomicStruct<PA_Telltale> PA_RWSIndicator;						// 0 = OFF, 1 = Yellow, 2 = red
extern SharedMemory::AtomicStruct<PA_Telltale> PA_EpedalIndicator;					// 0 = off, 1 = Standby, 2 = active
extern SharedMemory::AtomicStruct<PA_Telltale> PA_Seatbelt;							// 0 = off, 1 = INITIAL(Flashing1HZ), 2 = Steady, 3 = Flashing(0.5HZ), 4 = Flashing(1HZ), 5 = US_Error
extern SharedMemory::AtomicStruct<PA_Telltale> PA_SVSLamp;							// 0 = off, 1 = on
extern SharedMemory::AtomicStruct<PA_Telltale> PA_TCMLamp;							// 0 = off, 1 = yellow, 2 = red
extern SharedMemory::AtomicStruct<PA_Telltale> PA_OLI_OilLevelIndicated;			// 1 = Oil level not available
																					// 2 = Waiting for oil data
																					// 3 = Oil level not reliable
																					// 4 = Oil level high
																					// 5 = Oil level OK
																					// 6 = Oil level low
																					// 7 = Oil level too low

extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_Driver;				// default value is 0, Range: 0 = lock; 1 = unlock
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_Passenger;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_MidPassenger;			// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_SecLeft;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_SecMid;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_SecRight;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_ThrdLeft;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_ThrdMid;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_ThrdRight;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_FrthLeft;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_FrthMid;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_FrthRight;				// default value is 0, Range: 0 = lock; 1 = unlock; 2 = No seat


//add for lamp check
extern SharedMemory::AtomicStruct<PA_Telltale> CPA_UsgModSts;						// 0 = UsgModSts1_UsgModAbdnd, 1 = UsgModSts1_UsgModInActv, 2 = UsgModSts1_UsgModCnvinc, 11 = UsgModSts1_UsgModActv, 13 = UsgModSts1_UsgModDrvg

//add for seatbelt car config
extern SharedMemory::AtomicNumber<unsigned char> CPA_Carconfig8;					// default value is 1, 1 = Left Hand Drive, 2 = Right Hand Drive

//add for seatbelt output
extern SharedMemory::AtomicNumber<unsigned char> PA_Seatbelt_output;				// default value is 0, 0 = not display, 1 = display


#endif // !PA_TELLTALE_H
