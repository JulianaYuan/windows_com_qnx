#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_adas0Dlg dialog

class pa_adas0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_adas0Dlg)

public:
	pa_adas0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_adas0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_ADAS0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_AEB_lamp data value
	CEdit mCEditPA_AEB_lampstatus;
	CEdit mCEditPA_AEB_lampavailability;
// //input PA_FCTAleft_animation data value
	CEdit mCEditPA_FCTAleft_animationstatus;
	CEdit mCEditPA_FCTAleft_animationavailability;
// //input PA_FCTARight_animation data value
	CEdit mCEditPA_FCTARight_animationstatus;
	CEdit mCEditPA_FCTARight_animationavailability;
// //input PA_FCTA_HUDwarning_Picture data value
	CEdit mCEditPA_FCTA_HUDwarning_Picturestatus;
	CEdit mCEditPA_FCTA_HUDwarning_Pictureavailability;
// //input PA_RCW_animation data value
	CEdit mCEditPA_RCW_animationstatus;
	CEdit mCEditPA_RCW_animationavailability;
// //input PA_RsdsSysSts_Lamp data value
	CEdit mCEditPA_RsdsSysSts_Lampstatus;
	CEdit mCEditPA_RsdsSysSts_Lampavailability;
// //input PA_ELOW_EmgyLane data value
	CEdit mCEditPA_ELOW_EmgyLanedata;
	CEdit mCEditPA_ELOW_EmgyLanestatus;
	CEdit mCEditPA_ELOW_EmgyLaneavailability;
// //input PA_Callback_DPS data value
	CEdit mCEditPA_Callback_DPSvalue;
// //input PA_TLA_Lamp data value
	CEdit mCEditPA_TLA_Lampstatus;
	CEdit mCEditPA_TLA_Lampavailability;
// //input PA_CC_Mode data value
	CEdit mCEditPA_CC_Modestatus;
	CEdit mCEditPA_CC_Modeavailability;
// //input PA_CC_lamp data value
	CEdit mCEditPA_CC_lampstatus;
	CEdit mCEditPA_CC_lampavailability;
// //input PA_CC_target_bar data value
	CEdit mCEditPA_CC_target_bardata;
	CEdit mCEditPA_CC_target_barstatus;
	CEdit mCEditPA_CC_target_baravailability;
// //input PA_CC_SetSpeed data value
	CEdit mCEditPA_CC_SetSpeeddata;
	CEdit mCEditPA_CC_SetSpeedstatus;
	CEdit mCEditPA_CC_SetSpeedformat;
	CEdit mCEditPA_CC_SetSpeedfeedback;
	CEdit mCEditPA_CC_SetSpeedavailability;
// //input PA_First_speedlimt_icon data value
	CEdit mCEditPA_First_speedlimt_iconstatus;
	CEdit mCEditPA_First_speedlimt_iconvalue;
	CEdit mCEditPA_First_speedlimt_iconposition;
	CEdit mCEditPA_First_speedlimt_iconreserve;
// //input PA_Second_speedlimt_icon data value
	CEdit mCEditPA_Second_speedlimt_iconstatus;
	CEdit mCEditPA_Second_speedlimt_iconvalue;
	CEdit mCEditPA_Second_speedlimt_iconposition;
	CEdit mCEditPA_Second_speedlimt_iconreserve;
// //input PA_First_speedlimt_supplement_icon data value
	CEdit mCEditPA_First_speedlimt_supplement_iconstatus;
	CEdit mCEditPA_First_speedlimt_supplement_iconposition;
// //input PA_Traffic_sign_icon data value
	CEdit mCEditPA_Traffic_sign_iconstatus;
	CEdit mCEditPA_Traffic_sign_iconposition;
// //input PA_Camera_sign_icon data value
	CEdit mCEditPA_Camera_sign_iconstatus;
	CEdit mCEditPA_Camera_sign_iconposition;
// //input PA_Entrance_Exit_sign_icon data value
	CEdit mCEditPA_Entrance_Exit_sign_iconvalue;
// //input PA_TSI_speed_dial_icon data value
	CEdit mCEditPA_TSI_speed_dial_iconlocation;
	CEdit mCEditPA_TSI_speed_dial_iconstatus;
	CEdit mCEditPA_TSI_speed_dial_iconreserve;
// //input CPA_CtryForRoadSgnInfo data value
	CEdit mCEditCPA_CtryForRoadSgnInfovalue;
	CEdit mCEditCPA_CtryForRoadSgnInfotimeout;
	CEdit mCEditCPA_CtryForRoadSgnInfoub;
// //input PA_LCA_left_Animation data value
	CEdit mCEditPA_LCA_left_Animationstatus;
	CEdit mCEditPA_LCA_left_Animationavailability;
// //input PA_LCA_right_Animation data value
	CEdit mCEditPA_LCA_right_Animationstatus;
	CEdit mCEditPA_LCA_right_Animationavailability;
// //input PA_LeftLine data value
	CEdit mCEditPA_LeftLinedata;
	CEdit mCEditPA_LeftLinecolor;
	CEdit mCEditPA_LeftLinestatus;
	CEdit mCEditPA_LeftLineavailability;
// //input PA_LeftLine2 data value
	CEdit mCEditPA_LeftLine2data;
	CEdit mCEditPA_LeftLine2color;
	CEdit mCEditPA_LeftLine2status;
	CEdit mCEditPA_LeftLine2availability;
// //input PA_RightLine data value
	CEdit mCEditPA_RightLinedata;
	CEdit mCEditPA_RightLinecolor;
	CEdit mCEditPA_RightLinestatus;
	CEdit mCEditPA_RightLineavailability;
// //input PA_RightLine2 data value
	CEdit mCEditPA_RightLine2data;
	CEdit mCEditPA_RightLine2color;
	CEdit mCEditPA_RightLine2status;
	CEdit mCEditPA_RightLine2availability;
// //input PA_LKA_lamp data value
	CEdit mCEditPA_LKA_lampstatus;
	CEdit mCEditPA_LKA_lampavailability;
// //input PA_ASL_lamp data value
	CEdit mCEditPA_ASL_lampstatus;
	CEdit mCEditPA_ASL_lampavailability;
// //input PA_ASL_SetSpeed data value
	CEdit mCEditPA_ASL_SetSpeeddata;
	CEdit mCEditPA_ASL_SetSpeedformat;
	CEdit mCEditPA_ASL_SetSpeeddisplay;
	CEdit mCEditPA_ASL_SetSpeedavailability;
// //input PA_ACC_lamp data value
	CEdit mCEditPA_ACC_lampstatus;
	CEdit mCEditPA_ACC_lampavailability;
// //input PA_ACC_Timegap data value
	CEdit mCEditPA_ACC_Timegapdata;
	CEdit mCEditPA_ACC_Timegapformat;
	CEdit mCEditPA_ACC_Timegapstatus;
	CEdit mCEditPA_ACC_Timegapavailability;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
