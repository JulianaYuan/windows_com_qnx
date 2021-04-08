#ifndef PA_ADAS_FUNC_H_
#define PA_ADAS_FUNC_H_


void* funcPA_AEB_lamp(int argc, char *argv[]);
void* funcPA_FCTAleft_animation(int argc, char *argv[]);
void* funcPA_FCTARight_animation(int argc, char *argv[]);
void* funcPA_FCTA_HUDwarning_Picture(int argc, char *argv[]);
void* funcPA_RCW_animation(int argc, char *argv[]);
void* funcPA_RsdsSysSts_Lamp(int argc, char *argv[]);
void* funcPA_ELOW_EmgyLane(int argc, char *argv[]);
void* funcPA_Callback_DPS(int argc, char *argv[]);
void* funcPA_TLA_Lamp(int argc, char *argv[]);
void* funcPA_CC_Mode(int argc, char *argv[]);
void* funcPA_CC_lamp(int argc, char *argv[]);
void* funcPA_CC_target_bar(int argc, char *argv[]);
void* funcPA_CC_SetSpeed(int argc, char *argv[]);
void* funcPA_First_speedlimt_icon(int argc, char *argv[]);
void* funcPA_Second_speedlimt_icon(int argc, char *argv[]);
void* funcPA_First_speedlimt_supplement_icon(int argc, char *argv[]);
void* funcPA_Traffic_sign_icon(int argc, char *argv[]);
void* funcPA_Camera_sign_icon(int argc, char *argv[]);
void* funcPA_Entrance_Exit_sign_icon(int argc, char *argv[]);
void* funcPA_TSI_speed_dial_icon(int argc, char *argv[]);
void* funcCPA_CtryForRoadSgnInfo(int argc, char *argv[]);
void* funcPA_LCA_left_Animation(int argc, char *argv[]);
void* funcPA_LCA_right_Animation(int argc, char *argv[]);
void* funcPA_LeftLine(int argc, char *argv[]);
void* funcPA_LeftLine2(int argc, char *argv[]);
void* funcPA_RightLine(int argc, char *argv[]);
void* funcPA_RightLine2(int argc, char *argv[]);
void* funcPA_LKA_lamp(int argc, char *argv[]);
void* funcPA_ASL_lamp(int argc, char *argv[]);
void* funcPA_ASL_SetSpeed(int argc, char *argv[]);
void* funcPA_ACC_lamp(int argc, char *argv[]);
void* funcPA_ACC_Timegap(int argc, char *argv[]);
void* funcPA_ACC_AdjustTimeGap(int argc, char *argv[]);
void* funcPS_ACC_TargetBar(int argc, char *argv[]);
void* funcPA_ACC_SetSpeed(int argc, char *argv[]);
void* funcPA_ACC_AdjustSetSpeed(int argc, char *argv[]);
void* funcPA_ACC_FrontObj1(int argc, char *argv[]);
void* funcPA_ACC_FrontObj2(int argc, char *argv[]);
void* funcPA_ACC_FrntLeObj(int argc, char *argv[]);
void* funcPA_ACC_FrntRiObj(int argc, char *argv[]);
void* funcPA_SC_Override(int argc, char *argv[]);
void* funcPA_GpilotStatus_Lamp(int argc, char *argv[]);
void* funcPA_GpilotHandOff_Lamp(int argc, char *argv[]);
void* funcPA_Gpilot_FrntObj1(int argc, char *argv[]);
void* funcPA_Gpilot_FrntObj2(int argc, char *argv[]);
void* funcPA_Gpilot_FrntLeObj(int argc, char *argv[]);
void* funcPA_Gpilot_FrntLeObj2(int argc, char *argv[]);
void* funcPA_Gpilot_FrntRiObj(int argc, char *argv[]);
void* funcPA_Gpilot_FrntRiObj2(int argc, char *argv[]);
void* funcPA_LeftLineRamp(int argc, char *argv[]);
void* funcPA_Left2LineRamp(int argc, char *argv[]);
void* funcPA_RightLineRamp(int argc, char *argv[]);
void* funcPA_Right2LineRamp(int argc, char *argv[]);
void* funcPA_SelfLane(int argc, char *argv[]);
void* funcPA_BoundaryWarn(int argc, char *argv[]);
void* funcPA_ADAS_Tunnel(int argc, char *argv[]);
void* funcPA_Left_line_animation(int argc, char *argv[]);
void* funcPA_Right_line_animation(int argc, char *argv[]);
void* funcPA_ADAS_ODD(int argc, char *argv[]);
void* funcPA_LaneChange(int argc, char *argv[]);
void* funcPA_Gpilot_TimeGap(int argc, char *argv[]);
void* funcPA_Gpilot_AdjustTimeGap(int argc, char *argv[]);
void* funcPA_Gpilot_SetSpeed(int argc, char *argv[]);
void* funcPA_Gpilot_TargetBar(int argc, char *argv[]);
void* funcPA_Gpilot_AdjustSetSpeed(int argc, char *argv[]);
void* funcPA_Gpilot_DIMLight(int argc, char *argv[]);
void* funcPA_SCFunction_Menu(int argc, char *argv[]);
void* funcPA_Callback_SCFunction(int argc, char *argv[]);
void* funcPA_Internal_SCFunctionMode(int argc, char *argv[]);
void* funcPA_SCFunction_MenuConfig(int argc, char *argv[]);
void* funcPA_Callback_AdjustMenu(int argc, char *argv[]);
void* funcPA_ADAS_Cursor_Position(int argc, char *argv[]);


void initpa_adasFuncMap();

#endif //PA_ADAS_FUNC_H_
