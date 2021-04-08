#ifndef PA_HARDKEY_FUNC_H_
#define PA_HARDKEY_FUNC_H_


void* funcPA_LeftSteerWhlTopKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlBottomKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlRiKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlLeKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlConfirmKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlTiGapKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlViewKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlResuKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlCancleKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhADASKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlTiGapCtrlr(int argc, char *argv[]);
void* funcPA_LeftSteerWhlAPAKey(int argc, char *argv[]);
void* funcPA_LeftSteerWhlHozlSwp(int argc, char *argv[]);
void* funcPA_LeftSteerWhlVertSwp(int argc, char *argv[]);
void* funcPA_LeftSteerWhlHozlSpeed(int argc, char *argv[]);
void* funcPA_LeftSteerWhlVertSpeed(int argc, char *argv[]);
void* funcPA_SteerWhlTouchBdLeSteerWhlTouchBdSts(int argc, char *argv[]);
void* funcPA_SteerWhlTouchBdCrsResuSteerWhlTouchBdSts(int argc, char *argv[]);
void* funcPA_SteerWhlTouchBdCnclSteerWhlTouchBdSts(int argc, char *argv[]);
void* funcPA_SteerWhlTouchBdADAS(int argc, char *argv[]);
void* funcPA_RightSteerWhlTopKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlBottomKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlLeKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlRiKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlRollKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlConfirmKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlVRKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlMenuKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlCustomDefdKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlMuteKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlVertMove(int argc, char *argv[]);
void* funcPA_RightSteerWhlHozlSwp(int argc, char *argv[]);
void* funcPA_RightSteerWhlVertSwp(int argc, char *argv[]);
void* funcPA_RightSteerWhlTripKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlWeChatKey(int argc, char *argv[]);
void* funcPA_RightSteerWhlHozlSpeed(int argc, char *argv[]);
void* funcPA_RightSteerWhlVertSpeed(int argc, char *argv[]);
void* funcPA_SteerWhlTouchBdRiSteerWhlTouchBdSts(int argc, char *argv[]);
void* funcPA_SngTripKey(int argc, char *argv[]);
void* funcPA_DrvrModPadl(int argc, char *argv[]);
void* funcPA_CustomDefKey(int argc, char *argv[]);
void* funcPA_VibrationFbToSwtp(int argc, char *argv[]);
void* funcPA_RiTopReq(int argc, char *argv[]);
void* funcPA_RiDownReq(int argc, char *argv[]);
void* funcPA_RiLeftReq(int argc, char *argv[]);
void* funcPA_RiRightReq(int argc, char *argv[]);
void* funcPA_BtnConfiReq(int argc, char *argv[]);
void* funcPA_SteerAdjSwtUpSts(int argc, char *argv[]);
void* funcPA_SteerAdjSwtDwnSts(int argc, char *argv[]);
void* funcPA_SteerAdjSwtFwdSts(int argc, char *argv[]);
void* funcPA_SteerAdjSwtBackSts(int argc, char *argv[]);


void initpa_hardkeyFuncMap();

#endif //PA_HARDKEY_FUNC_H_
