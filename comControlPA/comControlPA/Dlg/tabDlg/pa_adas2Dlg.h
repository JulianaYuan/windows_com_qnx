#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_adas2Dlg dialog

class pa_adas2Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_adas2Dlg)

public:
	pa_adas2Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_adas2Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_ADAS2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_BoundaryWarn data value
	CEdit mCEditPA_BoundaryWarnstatus;
	CEdit mCEditPA_BoundaryWarnavailability;
// //input PA_ADAS_Tunnel data value
	CEdit mCEditPA_ADAS_Tunneldata;
	CEdit mCEditPA_ADAS_Tunnelstatus;
	CEdit mCEditPA_ADAS_Tunnelreserve;
	CEdit mCEditPA_ADAS_Tunnelavailability;
// //input PA_Left_line_animation data value
	CEdit mCEditPA_Left_line_animationstatus;
	CEdit mCEditPA_Left_line_animationcolor;
	CEdit mCEditPA_Left_line_animationavailability;
// //input PA_Right_line_animation data value
	CEdit mCEditPA_Right_line_animationstatus;
	CEdit mCEditPA_Right_line_animationcolor;
	CEdit mCEditPA_Right_line_animationavailability;
// //input PA_ADAS_ODD data value
	CEdit mCEditPA_ADAS_ODDstatus;
	CEdit mCEditPA_ADAS_ODDavailability;
// //input PA_LaneChange data value
	CEdit mCEditPA_LaneChangestatus;
	CEdit mCEditPA_LaneChangeavailability;
// //input PA_Gpilot_TimeGap data value
	CEdit mCEditPA_Gpilot_TimeGapdata;
	CEdit mCEditPA_Gpilot_TimeGapformat;
	CEdit mCEditPA_Gpilot_TimeGapstatus;
	CEdit mCEditPA_Gpilot_TimeGapavailability;
// //input PA_Gpilot_AdjustTimeGap data value
	CEdit mCEditPA_Gpilot_AdjustTimeGapstatus;
	CEdit mCEditPA_Gpilot_AdjustTimeGapavailability;
// //input PA_Gpilot_SetSpeed data value
	CEdit mCEditPA_Gpilot_SetSpeedstatus;
	CEdit mCEditPA_Gpilot_SetSpeeddata;
	CEdit mCEditPA_Gpilot_SetSpeedtype;
	CEdit mCEditPA_Gpilot_SetSpeedformat;
	CEdit mCEditPA_Gpilot_SetSpeedreserve;
	CEdit mCEditPA_Gpilot_SetSpeedavailability;
// //input PA_Gpilot_TargetBar data value
	CEdit mCEditPA_Gpilot_TargetBardata;
	CEdit mCEditPA_Gpilot_TargetBarstatus;
	CEdit mCEditPA_Gpilot_TargetBaravailability;
// //input PA_Gpilot_AdjustSetSpeed data value
	CEdit mCEditPA_Gpilot_AdjustSetSpeedstatus;
	CEdit mCEditPA_Gpilot_AdjustSetSpeedavailability;
// //input PA_Gpilot_DIMLight data value
	CEdit mCEditPA_Gpilot_DIMLightstatus;
	CEdit mCEditPA_Gpilot_DIMLightavailability;
// //input PA_SCFunction_Menu data value
	CEdit mCEditPA_SCFunction_Menudata;
	CEdit mCEditPA_SCFunction_Menutype;
	CEdit mCEditPA_SCFunction_Menustatus;
	CEdit mCEditPA_SCFunction_Menureserve;
	CEdit mCEditPA_SCFunction_Menuavailability;
// //input PA_Callback_SCFunction data value
	CEdit mCEditPA_Callback_SCFunctionvalue;
// //input PA_Internal_SCFunctionMode data value
	CEdit mCEditPA_Internal_SCFunctionModevalue;
// //input PA_SCFunction_MenuConfig data value
	CEdit mCEditPA_SCFunction_MenuConfigCC;
	CEdit mCEditPA_SCFunction_MenuConfigASL;
	CEdit mCEditPA_SCFunction_MenuConfigACC;
	CEdit mCEditPA_SCFunction_MenuConfigGPilot;
// //input PA_Callback_AdjustMenu data value
	CEdit mCEditPA_Callback_AdjustMenuvalue;
// //input PA_ADAS_Cursor_Position data value
	CEdit mCEditPA_ADAS_Cursor_Positionvalue;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
