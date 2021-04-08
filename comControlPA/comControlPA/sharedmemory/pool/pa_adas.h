#ifndef PA_ADAS_H
#define PA_ADAS_H

#include "../sharedmemory.hpp"

struct PA_ADAS
{
	unsigned char status : 5;					// Range and default value refer to pa
	unsigned char availability : 3;				// Range and default value refer to pa
};

struct PA_Menu
{
	unsigned short data : 3;					// default value is 0, Range: 0=OFF, 1=CC, 2=ASL, 3=ACC, 4=G-Pilot
	unsigned short type : 1;					// default value is 0, Range: 0=locked, 1=unlocked
	unsigned short status : 3;					// default value is 0, Range: 1=CC error, 2=ASL error, 3=ACC error, 4=G-pilot error
	unsigned short reserve : 6;					// padding with 0
	unsigned short availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_Targetbar
{
	unsigned short data : 10;					// default value is 0, According to the setSpeed
	unsigned short status : 3;					// default value is 0, Range: 0 = off, 1 = White, 2 = green, 3 = Gray
	unsigned short availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_timegap
{
	unsigned char data : 2;						// default value is 0, Range: 0 = No lines, 1 = One line, 2 = two lines, 3 = three lines
	unsigned char format : 2;					// NA, padding with 0
	unsigned char status : 1;					// default value is 0, Range: 0=off, 1=On
	unsigned char availability : 3;				// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_CC_Speed
{
	unsigned short data : 9;					// default value is 0, Integer value of SetSpeed
	unsigned short status : 2;					// default value is 0, Range: 0= OFF, 1= Standby, 2= Active
	unsigned short format : 1;					// default value is 0, Range: 0 = km/h, 1 = mph
	unsigned short feedback : 1;				// default value is 0, Range: 0 = Nochange, 1 =Change
	unsigned short availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_ASL_Speed
{
	unsigned short data : 10;					// default value is 0, Integer value of target speed
	unsigned short format : 1;					// default value is 0, Range: 0 = km/h, 1 = mph
	unsigned short display : 2;					// default value is 0, Range: 0 = OFF, 1 = Standby, 2 = Active, 3 = Override
	unsigned short availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_ACC_Speed
{
	unsigned short status : 2;					// default value is 0, Range: 0 = OFF, 1 = Standby, 2 = Active, 3 = Override
	unsigned short data : 12;					// default value is 0, Integer value of target speed
	unsigned short type : 1;					// default value is 0, Range: 0 = Without TSI, 1 = With TSI
	unsigned short format : 1;					// default value is 0, Range: 0 = km/h, 1 = mph
	unsigned char reserve : 5;					// padding with 0
	unsigned char availability : 3;				// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_speedlimt_icon
{
	unsigned short status : 2;					// default value is 0, Range refer to pa
	unsigned short value : 8;					// default value is 0, Range refer to signal
	unsigned short position : 2;				// default value is 1, Range: 1 = position1, 2 = position2, 3 = position3
	unsigned short reserve : 4;					// padding with 0
};

struct PA_traffic_icon
{
	unsigned char status : 6;					// default value is 0, Range refer to pa
	unsigned char position : 2;					// default value refer to pa, Range: 1 = position1, 2 = position2, 3 = position3
};

struct PA_adas_6bit
{
	unsigned char value : 6;					// default value is 0, Range refer to signal
	unsigned char timeout : 1;					// default value is 0
	unsigned char ub : 1;						// default value is 0
};

struct PA_tsi
{
	unsigned short location : 8;				// default value is 0, Range: according to SpdLimFirst
	unsigned short status : 1;					// default value is 0, Range: 0=no display, 1=display(red)
	unsigned short reserve : 7;					// padding with 0
};

struct PA_ema
{
	unsigned char data : 4;						// NA, padding with 0
	unsigned char status : 1;					// default value is 0, Range: 0=off, 1=On
	unsigned char availability : 3;				// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_line
{
	unsigned short data : 9;					// default value is 0, Range: qa confirm, tbc
	unsigned short color : 2;					// default value is 0, Range: 0 = Gray, 1 = white, 2 = blue, 3 = red
	unsigned short status : 2;					// default value is 0, Range: 0 = off, 1 = solid line, 2 = dashed line
	unsigned short availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_object
{
	unsigned char Dx;							// default value is 0, Range: 0~120
	float Dy;									// default value is 0.0, Range: -12.7~12.7
	unsigned short color : 2;					// default value is 0, Range: refer to PA
	unsigned short heading : 2;					// default value is 0, Range: 0= Straight, 1= Left_lean, 2= Right_lean
	unsigned short status : 3;					// default value is 0, Range: 0 = Off, 1 = Car, 2 =Pedestrian, 3 = Bicycle, 4 = Animal, 5 = Motorcycle, 6 = Bus, 7 = Turk
	unsigned short reserve : 6;					// padding with 0
	unsigned short availability : 3;			// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_override
{
	unsigned char status : 1;					// default value is 0, Range: 0 = off, 1 = on
	unsigned char data : 2;						// NA, padding with 0
	unsigned char format : 2;					// NA, padding with 0
	unsigned char availability : 3;				// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_ramp
{
	unsigned char data;							// default value is 0, Range: according to signal
	unsigned char status : 2;					// default value is 0, Range: 0=off, 1=Left/Right entrance, 2=Left/Right exit
	unsigned char reserve : 3;					// padding with 0
	unsigned char availability : 3;				// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_tunnel
{
	unsigned char data;							// default value is 0, Range: according to signal
	unsigned char status : 2;					// default value is 0, Range: 0=off, 1=Tunnel entrance, 2=Tunnel exit, 3= In the tunnel
	unsigned char reserve : 3;					// padding with 0
	unsigned char availability : 3;				// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_line_animation
{
	unsigned char status : 2;					// default value is 0, Range: 0:off, 1:Solid line, 2: dashed line
	unsigned char color : 3;					// default value is 0, Range: 0:Gray, 1:White, 2:bule, 3:red
	unsigned char availability : 3;				// default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
};

struct PA_config
{
	unsigned char CC : 2;						// default value is 0, Range: 0: CC not config, 1: CC config
	unsigned char ASL : 2;						// default value is 0, Range: 0: ASL not config, 1: ASL config
	unsigned char ACC : 2;						// default value is 0, Range: 0: ACC not config, 1: ACC config
	unsigned char GPilot : 2;					// default value is 0, Range: 0: GPilot not config, 1: Pilot config
};

extern SharedMemory::Pool SharedMemoryPool_PA_ADAS;

//3.3 Forward collision mitigation
extern SharedMemory::AtomicStruct<PA_ADAS> PA_AEB_lamp;					//status default value is 0, Range: 0= OFF, 1= Yellow(Off), 2=Yellow(Error)
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available


//3.4 Front crossing vehicle danger alarm auxiliary function
extern SharedMemory::AtomicStruct<PA_ADAS> PA_FCTAleft_animation;		//status default value is 0, Range: 0= OFF, 1= first level(yellow), 2= scond level(red)
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_FCTARight_animation;		//status default value is 0, Range: 0= OFF, 1= first level(yellow), 2= scond level(red)
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_FCTA_HUDwarning_Picture;	//status default value is 0, Range: 0= off, 1= ON
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available


//3.5 Rear collision warning
extern SharedMemory::AtomicStruct<PA_ADAS> PA_RCW_animation;			//status default value is 0, Range: 0= off, 1=level1 warning, 2=level2 warning
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_RsdsSysSts_Lamp;			//status default value is 0, Range: 0= OFF, 1= green, 2= red, 3=red flash(4HZ)
																		//PMA Range: 0= OFF, 1= ON/active, 2= fault(red), 3=calibration(red flash(4HZ))
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available


//3.7 Emergency lane occupancy reminder
extern SharedMemory::AtomicStruct<PA_ema> PA_ELOW_EmgyLane;				//refer to PA_ema


//3.8.2 DPS warning(from HMI), HMI should tell middleware the user select yes or no
extern SharedMemory::AtomicNumber<unsigned char> PA_Callback_DPS;		//default value is 0, Range: 0 = not press, 1 = user press yes button, 2 = user press no button


//3.9 Traffic light Attention
extern SharedMemory::AtomicStruct<PA_ADAS> PA_TLA_Lamp;					//default value is 0, Range: 0 to 25
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available


//3.10 Cruise control
extern SharedMemory::AtomicStruct<PA_ADAS> PA_CC_Mode;					//status default value is 0, Range: 0= OFF, 1= Standby, 2= Active
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_CC_lamp;					//status default value is 0, Range: 0= OFF, 1= Standby, 2= Active, 3= Override
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_Targetbar> PA_CC_target_bar;		//refer to PA_Targetbar
extern SharedMemory::AtomicStruct<PA_CC_Speed> PA_CC_SetSpeed;			//refer to PA_SetSpeed


//3.11 Traffic sign Recognition
extern SharedMemory::AtomicStruct<PA_speedlimt_icon> PA_First_speedlimt_icon;				// Status: 0= no display, 1= Display, 2= Around red flashing (1HZ)
extern SharedMemory::AtomicStruct<PA_speedlimt_icon> PA_Second_speedlimt_icon;				// Status: 0= no display, 1= Display
extern SharedMemory::AtomicStruct<PA_traffic_icon> PA_First_speedlimt_supplement_icon;		// Position = 1, status default value is 0, Range: 0 to 17
extern SharedMemory::AtomicStruct<PA_traffic_icon> PA_Traffic_sign_icon;					// Position = 3, status default value is 0, Range: 0 to 11
extern SharedMemory::AtomicStruct<PA_traffic_icon> PA_Camera_sign_icon;						// Position = 1, status default value is 0, Range: 0=No display, 1=display
extern SharedMemory::AtomicNumber<unsigned char> PA_Entrance_Exit_sign_icon;				// default value is 0, Range: 0 to 18
extern SharedMemory::AtomicStruct<PA_tsi> PA_TSI_speed_dial_icon;							// refer to PA_tsi
extern SharedMemory::AtomicStruct<PA_adas_6bit> CPA_CtryForRoadSgnInfo;						// default value is 0, Range: 0 to 30, signal CtryForRoadSgnInfo


//3.12 Lane Change Assist
extern SharedMemory::AtomicStruct<PA_ADAS> PA_LCA_left_Animation;		//status default value is 0, Range: 0=off, 1=level1 (yellow), 2=level2/3 (red)
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_LCA_right_Animation;		//status default value is 0, Range: 0=off, 1=level1 (yellow), 2=level2/3 (red)
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available


//3.13 Lane Keep Assist
extern SharedMemory::AtomicStruct<PA_line> PA_LeftLine;					//refer to PA_line
extern SharedMemory::AtomicStruct<PA_line> PA_LeftLine2;				//refer to PA_line
extern SharedMemory::AtomicStruct<PA_line> PA_RightLine;				//refer to PA_line
extern SharedMemory::AtomicStruct<PA_line> PA_RightLine2;				//refer to PA_line
extern SharedMemory::AtomicStruct<PA_ADAS> PA_LKA_lamp;					//status default value is 0, Range: 0= OFF, 1=Yellow(Off), 2=Yellow(Error)
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available


//3.14 Speed Limit
extern SharedMemory::AtomicStruct<PA_ADAS> PA_ASL_lamp;					//status default value is 0, Range: 0: Off, 1: Standby, 2: Active, 3: Override
																		//availability default value is 3, Range: 0 = Active, 1 = Not Active, 2 = Error, 3 = Not Available
extern SharedMemory::AtomicStruct<PA_ASL_Speed> PA_ASL_SetSpeed;		//refer to PA_ASL


//3.15 Adaptive Cruise
extern SharedMemory::AtomicStruct<PA_ADAS> PA_ACC_lamp;					//status default value is 0, Range: 0= OFF, 1= Standby, 2= Active, 3= Override, 4 = Failure
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_timegap> PA_ACC_Timegap;			//refer to PA_timegap
extern SharedMemory::AtomicStruct<PA_ADAS> PA_ACC_AdjustTimeGap;		//status default value is 0, Range: 0 = No Adjust, 1 = Decrease TimeGap, 2 = Increase TimeGap, 3 = Keep 3 TimeGap, 4 = Keep 1 TimeGap
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_Targetbar> PS_ACC_TargetBar;		//refer to PA_Targetbar
extern SharedMemory::AtomicStruct<PA_ACC_Speed> PA_ACC_SetSpeed;		//refer to PA_ACC_Speed
extern SharedMemory::AtomicStruct<PA_ADAS> PA_ACC_AdjustSetSpeed;		//data default value is 0, Range: 0 = No Adjust, 1 = Decrease 1, 2 = Decrease 5, 3 = Increase 1, 4 = Increase 5
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_object> PA_ACC_FrontObj1;			//color default value is 0, Range: 0=gray, 1:blue, 2:yellow, 3:red
extern SharedMemory::AtomicStruct<PA_object> PA_ACC_FrontObj2;			//color default value is 0, Range: 0=gray, 1:blue, 2:yellow, 3:red
extern SharedMemory::AtomicStruct<PA_object> PA_ACC_FrntLeObj;			//color default value is 0, Range: 0=gray, 1:white
extern SharedMemory::AtomicStruct<PA_object> PA_ACC_FrntRiObj;			//color default value is 0, Range: 0=gray, 1:white
extern SharedMemory::AtomicStruct<PA_override> PA_SC_Override;			//refer to PA_override


//3.17 Highway Assist
extern SharedMemory::AtomicStruct<PA_ADAS> PA_GpilotStatus_Lamp;		//data default value is 0, Range: 0= Off, 1=standby, 2=status1, 3=status2, 4=failure
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_GpilotHandOff_Lamp;		//data default value is 0, Range: 0= Off, 1=standby, 2=active, 3=override, 4=failure
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_object> PA_Gpilot_FrntObj1;		//color default value is 0, Range: 0=Gray, 1=Blue, 2=Yellow, 3=Red
extern SharedMemory::AtomicStruct<PA_object> PA_Gpilot_FrntObj2;		//color default value is 0, Range: 0=Gray, 1=Blue, 2=Yellow, 3=Red
extern SharedMemory::AtomicStruct<PA_object> PA_Gpilot_FrntLeObj;		//color default value is 0, Range: 0=Gray, 1=White
extern SharedMemory::AtomicStruct<PA_object> PA_Gpilot_FrntLeObj2;		//color default value is 0, Range: 0=Gray, 1=White
extern SharedMemory::AtomicStruct<PA_object> PA_Gpilot_FrntRiObj;		//color default value is 0, Range: 0=Gray, 1=White
extern SharedMemory::AtomicStruct<PA_object> PA_Gpilot_FrntRiObj2;		//color default value is 0, Range: 0=Gray, 1=White
extern SharedMemory::AtomicStruct<PA_ramp> PA_LeftLineRamp;				//refer to PA_ramp
extern SharedMemory::AtomicStruct<PA_ramp> PA_Left2LineRamp;			//refer to PA_ramp
extern SharedMemory::AtomicStruct<PA_ramp> PA_RightLineRamp;			//refer to PA_ramp
extern SharedMemory::AtomicStruct<PA_ramp> PA_Right2LineRamp;			//refer to PA_ramp
extern SharedMemory::AtomicStruct<PA_ramp> PA_SelfLane;					//data default value is 0, Range: 0=Default value(use LCFG_SelfLaneWidth = 3.75, refer to SRD 3.17.1.3.4.15 Setting of SelfLane.data), 1=Actual value
																		//status default value is 0, Range:0=off, 1=Low light, 2=High light
																		//availability default value is 4, Range:1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_BoundaryWarn;				//status default value is 0, Range: 0=off, 1=Left boundary warning, 2=Right boundary warning, 3=Both left and right warning
																		//availability default value is 4, Range:1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_tunnel> PA_ADAS_Tunnel;			//refer to PA_tunnel
extern SharedMemory::AtomicStruct<PA_line_animation> PA_Left_line_animation;		//refer to PA_line_animation
extern SharedMemory::AtomicStruct<PA_line_animation> PA_Right_line_animation;		//refer to PA_line_animation
extern SharedMemory::AtomicStruct<PA_ADAS> PA_ADAS_ODD;					//status default value is 0, Range: 0=off, 1=Enter ODD area, 2=Exit ODD area
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_LaneChange;				//status default value is 0, Range: 0 to 13
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_timegap> PA_Gpilot_TimeGap;		//refer to PA_timegap
extern SharedMemory::AtomicStruct<PA_ADAS> PA_Gpilot_AdjustTimeGap;		//status default value is 0, Range: 0 = No Adjust, 1 = Decrease TimeGap, 2 = Increase TimeGap, 3 = Keep 3 TimeGap, 4 = Keep 1 TimeGap
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_ACC_Speed> PA_Gpilot_SetSpeed;		//refer to PA_ACC_Speed
extern SharedMemory::AtomicStruct<PA_Targetbar> PA_Gpilot_TargetBar;	//refer to PA_Targetbar
extern SharedMemory::AtomicStruct<PA_ADAS> PA_Gpilot_AdjustSetSpeed;	//status default value is 0, Range: 0 = No Adjust, 1 = Decrease 1 (km/h or mph), 2 = Decrease 5 (km/h or mph), 3 = Increase 1 (km/h or mph), 4 = Increase 5 (km/h or mph)
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available
extern SharedMemory::AtomicStruct<PA_ADAS> PA_Gpilot_DIMLight;			//data default value is 0, Range: 0= Off, 1=green, 2=blue, 3=yellow, 4=red
																		//availability default value is 4, Range: 1 = Active, 2 = Not Active, 3 = Error, 4 = Not Available


//3.18 ADAS Menu Manger
extern SharedMemory::AtomicStruct<PA_Menu> PA_SCFunction_Menu;					//refer to PA_Menu

//3.18 ADAS Menu Manger(from HMI, HMI should tell middleware the user's select)
extern SharedMemory::AtomicNumber<unsigned char> PA_Callback_SCFunction;		//default value is 0, Range: 1= CC, 2= ASL, 3= ACC, 4=G-Pilot

////////////// Internal variables /////////////
extern SharedMemory::AtomicNumber<unsigned char> PA_Internal_SCFunctionMode;	//default value is 0, Range: 0=Off, 1=CC, 2=ASL, 3=ACC, 4=G-pilot
extern SharedMemory::AtomicStruct<PA_config> PA_SCFunction_MenuConfig;			//refer to PA_config

// callback from HMI
extern SharedMemory::AtomicNumber<unsigned char> PA_Callback_AdjustMenu;		//default value is 0, Range: 0:no menu, 1:Speed Adjust menu, 2:TimeGap Adjust menu
// for 3.17.1.3.4.19 Left line, PA_Left_line_animation and PA_Right_line_animation
extern SharedMemory::AtomicNumber<unsigned char> PA_ADAS_Cursor_Position;		// default value is 0, means cursor not stop on any adas function
																				// Range: 1 = cursor stop on CC/ASL/AVSL, 2 = cursor stop on ACC, 3 = cursor stop on G-Pilot

#endif
