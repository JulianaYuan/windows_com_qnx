#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_adas1Dlg dialog

class pa_adas1Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_adas1Dlg)

public:
	pa_adas1Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_adas1Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_ADAS1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_ACC_AdjustTimeGap data value
	CEdit mCEditPA_ACC_AdjustTimeGapstatus;
	CEdit mCEditPA_ACC_AdjustTimeGapavailability;
// //input PS_ACC_TargetBar data value
	CEdit mCEditPS_ACC_TargetBardata;
	CEdit mCEditPS_ACC_TargetBarstatus;
	CEdit mCEditPS_ACC_TargetBaravailability;
// //input PA_ACC_SetSpeed data value
	CEdit mCEditPA_ACC_SetSpeedstatus;
	CEdit mCEditPA_ACC_SetSpeeddata;
	CEdit mCEditPA_ACC_SetSpeedtype;
	CEdit mCEditPA_ACC_SetSpeedformat;
	CEdit mCEditPA_ACC_SetSpeedreserve;
	CEdit mCEditPA_ACC_SetSpeedavailability;
// //input PA_ACC_AdjustSetSpeed data value
	CEdit mCEditPA_ACC_AdjustSetSpeedstatus;
	CEdit mCEditPA_ACC_AdjustSetSpeedavailability;
// //input PA_ACC_FrontObj1 data value
	CEdit mCEditPA_ACC_FrontObj1Dx;
	CEdit mCEditPA_ACC_FrontObj1Dy;
	CEdit mCEditPA_ACC_FrontObj1color;
	CEdit mCEditPA_ACC_FrontObj1heading;
	CEdit mCEditPA_ACC_FrontObj1status;
	CEdit mCEditPA_ACC_FrontObj1reserve;
	CEdit mCEditPA_ACC_FrontObj1availability;
// //input PA_ACC_FrontObj2 data value
	CEdit mCEditPA_ACC_FrontObj2Dx;
	CEdit mCEditPA_ACC_FrontObj2Dy;
	CEdit mCEditPA_ACC_FrontObj2color;
	CEdit mCEditPA_ACC_FrontObj2heading;
	CEdit mCEditPA_ACC_FrontObj2status;
	CEdit mCEditPA_ACC_FrontObj2reserve;
	CEdit mCEditPA_ACC_FrontObj2availability;
// //input PA_ACC_FrntLeObj data value
	CEdit mCEditPA_ACC_FrntLeObjDx;
	CEdit mCEditPA_ACC_FrntLeObjDy;
	CEdit mCEditPA_ACC_FrntLeObjcolor;
	CEdit mCEditPA_ACC_FrntLeObjheading;
	CEdit mCEditPA_ACC_FrntLeObjstatus;
	CEdit mCEditPA_ACC_FrntLeObjreserve;
	CEdit mCEditPA_ACC_FrntLeObjavailability;
// //input PA_ACC_FrntRiObj data value
	CEdit mCEditPA_ACC_FrntRiObjDx;
	CEdit mCEditPA_ACC_FrntRiObjDy;
	CEdit mCEditPA_ACC_FrntRiObjcolor;
	CEdit mCEditPA_ACC_FrntRiObjheading;
	CEdit mCEditPA_ACC_FrntRiObjstatus;
	CEdit mCEditPA_ACC_FrntRiObjreserve;
	CEdit mCEditPA_ACC_FrntRiObjavailability;
// //input PA_SC_Override data value
	CEdit mCEditPA_SC_Overridestatus;
	CEdit mCEditPA_SC_Overridedata;
	CEdit mCEditPA_SC_Overrideformat;
	CEdit mCEditPA_SC_Overrideavailability;
// //input PA_GpilotStatus_Lamp data value
	CEdit mCEditPA_GpilotStatus_Lampstatus;
	CEdit mCEditPA_GpilotStatus_Lampavailability;
// //input PA_GpilotHandOff_Lamp data value
	CEdit mCEditPA_GpilotHandOff_Lampstatus;
	CEdit mCEditPA_GpilotHandOff_Lampavailability;
// //input PA_Gpilot_FrntObj1 data value
	CEdit mCEditPA_Gpilot_FrntObj1Dx;
	CEdit mCEditPA_Gpilot_FrntObj1Dy;
	CEdit mCEditPA_Gpilot_FrntObj1color;
	CEdit mCEditPA_Gpilot_FrntObj1heading;
	CEdit mCEditPA_Gpilot_FrntObj1status;
	CEdit mCEditPA_Gpilot_FrntObj1reserve;
	CEdit mCEditPA_Gpilot_FrntObj1availability;
// //input PA_Gpilot_FrntObj2 data value
	CEdit mCEditPA_Gpilot_FrntObj2Dx;
	CEdit mCEditPA_Gpilot_FrntObj2Dy;
	CEdit mCEditPA_Gpilot_FrntObj2color;
	CEdit mCEditPA_Gpilot_FrntObj2heading;
	CEdit mCEditPA_Gpilot_FrntObj2status;
	CEdit mCEditPA_Gpilot_FrntObj2reserve;
	CEdit mCEditPA_Gpilot_FrntObj2availability;
// //input PA_Gpilot_FrntLeObj data value
	CEdit mCEditPA_Gpilot_FrntLeObjDx;
	CEdit mCEditPA_Gpilot_FrntLeObjDy;
	CEdit mCEditPA_Gpilot_FrntLeObjcolor;
	CEdit mCEditPA_Gpilot_FrntLeObjheading;
	CEdit mCEditPA_Gpilot_FrntLeObjstatus;
	CEdit mCEditPA_Gpilot_FrntLeObjreserve;
	CEdit mCEditPA_Gpilot_FrntLeObjavailability;
// //input PA_Gpilot_FrntLeObj2 data value
	CEdit mCEditPA_Gpilot_FrntLeObj2Dx;
	CEdit mCEditPA_Gpilot_FrntLeObj2Dy;
	CEdit mCEditPA_Gpilot_FrntLeObj2color;
	CEdit mCEditPA_Gpilot_FrntLeObj2heading;
	CEdit mCEditPA_Gpilot_FrntLeObj2status;
	CEdit mCEditPA_Gpilot_FrntLeObj2reserve;
	CEdit mCEditPA_Gpilot_FrntLeObj2availability;
// //input PA_Gpilot_FrntRiObj data value
	CEdit mCEditPA_Gpilot_FrntRiObjDx;
	CEdit mCEditPA_Gpilot_FrntRiObjDy;
	CEdit mCEditPA_Gpilot_FrntRiObjcolor;
	CEdit mCEditPA_Gpilot_FrntRiObjheading;
	CEdit mCEditPA_Gpilot_FrntRiObjstatus;
	CEdit mCEditPA_Gpilot_FrntRiObjreserve;
	CEdit mCEditPA_Gpilot_FrntRiObjavailability;
// //input PA_Gpilot_FrntRiObj2 data value
	CEdit mCEditPA_Gpilot_FrntRiObj2Dx;
	CEdit mCEditPA_Gpilot_FrntRiObj2Dy;
	CEdit mCEditPA_Gpilot_FrntRiObj2color;
	CEdit mCEditPA_Gpilot_FrntRiObj2heading;
	CEdit mCEditPA_Gpilot_FrntRiObj2status;
	CEdit mCEditPA_Gpilot_FrntRiObj2reserve;
	CEdit mCEditPA_Gpilot_FrntRiObj2availability;
// //input PA_LeftLineRamp data value
	CEdit mCEditPA_LeftLineRampdata;
	CEdit mCEditPA_LeftLineRampstatus;
	CEdit mCEditPA_LeftLineRampreserve;
	CEdit mCEditPA_LeftLineRampavailability;
// //input PA_Left2LineRamp data value
	CEdit mCEditPA_Left2LineRampdata;
	CEdit mCEditPA_Left2LineRampstatus;
	CEdit mCEditPA_Left2LineRampreserve;
	CEdit mCEditPA_Left2LineRampavailability;
// //input PA_RightLineRamp data value
	CEdit mCEditPA_RightLineRampdata;
	CEdit mCEditPA_RightLineRampstatus;
	CEdit mCEditPA_RightLineRampreserve;
	CEdit mCEditPA_RightLineRampavailability;
// //input PA_Right2LineRamp data value
	CEdit mCEditPA_Right2LineRampdata;
	CEdit mCEditPA_Right2LineRampstatus;
	CEdit mCEditPA_Right2LineRampreserve;
	CEdit mCEditPA_Right2LineRampavailability;
// //input PA_SelfLane data value
	CEdit mCEditPA_SelfLanedata;
	CEdit mCEditPA_SelfLanestatus;
	CEdit mCEditPA_SelfLanereserve;
	CEdit mCEditPA_SelfLaneavailability;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
