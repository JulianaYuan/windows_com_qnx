#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_hardkey0Dlg dialog

class pa_hardkey0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_hardkey0Dlg)

public:
	pa_hardkey0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_hardkey0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_HARDKEY0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_LeftSteerWhlTopKey data value
	CEdit mCEditPA_LeftSteerWhlTopKeystatus;
	CEdit mCEditPA_LeftSteerWhlTopKeyavailability;
	CEdit mCEditPA_LeftSteerWhlTopKeyvalue;
// //input PA_LeftSteerWhlBottomKey data value
	CEdit mCEditPA_LeftSteerWhlBottomKeystatus;
	CEdit mCEditPA_LeftSteerWhlBottomKeyavailability;
	CEdit mCEditPA_LeftSteerWhlBottomKeyvalue;
// //input PA_LeftSteerWhlRiKey data value
	CEdit mCEditPA_LeftSteerWhlRiKeystatus;
	CEdit mCEditPA_LeftSteerWhlRiKeyavailability;
	CEdit mCEditPA_LeftSteerWhlRiKeyvalue;
// //input PA_LeftSteerWhlLeKey data value
	CEdit mCEditPA_LeftSteerWhlLeKeystatus;
	CEdit mCEditPA_LeftSteerWhlLeKeyavailability;
	CEdit mCEditPA_LeftSteerWhlLeKeyvalue;
// //input PA_LeftSteerWhlConfirmKey data value
	CEdit mCEditPA_LeftSteerWhlConfirmKeystatus;
	CEdit mCEditPA_LeftSteerWhlConfirmKeyavailability;
	CEdit mCEditPA_LeftSteerWhlConfirmKeyvalue;
// //input PA_LeftSteerWhlTiGapKey data value
	CEdit mCEditPA_LeftSteerWhlTiGapKeystatus;
	CEdit mCEditPA_LeftSteerWhlTiGapKeyavailability;
	CEdit mCEditPA_LeftSteerWhlTiGapKeyvalue;
// //input PA_LeftSteerWhlViewKey data value
	CEdit mCEditPA_LeftSteerWhlViewKeystatus;
	CEdit mCEditPA_LeftSteerWhlViewKeyavailability;
	CEdit mCEditPA_LeftSteerWhlViewKeyvalue;
// //input PA_LeftSteerWhlResuKey data value
	CEdit mCEditPA_LeftSteerWhlResuKeystatus;
	CEdit mCEditPA_LeftSteerWhlResuKeyavailability;
	CEdit mCEditPA_LeftSteerWhlResuKeyvalue;
// //input PA_LeftSteerWhlCancleKey data value
	CEdit mCEditPA_LeftSteerWhlCancleKeystatus;
	CEdit mCEditPA_LeftSteerWhlCancleKeyavailability;
	CEdit mCEditPA_LeftSteerWhlCancleKeyvalue;
// //input PA_LeftSteerWhADASKey data value
	CEdit mCEditPA_LeftSteerWhADASKeystatus;
	CEdit mCEditPA_LeftSteerWhADASKeyavailability;
	CEdit mCEditPA_LeftSteerWhADASKeyvalue;
// //input PA_LeftSteerWhlTiGapCtrlr data value
	CEdit mCEditPA_LeftSteerWhlTiGapCtrlrstatus;
	CEdit mCEditPA_LeftSteerWhlTiGapCtrlravailability;
	CEdit mCEditPA_LeftSteerWhlTiGapCtrlrvalue;
// //input PA_LeftSteerWhlAPAKey data value
	CEdit mCEditPA_LeftSteerWhlAPAKeystatus;
	CEdit mCEditPA_LeftSteerWhlAPAKeyavailability;
	CEdit mCEditPA_LeftSteerWhlAPAKeyvalue;
// //input PA_LeftSteerWhlHozlSwp data value
	CEdit mCEditPA_LeftSteerWhlHozlSwpstatus;
	CEdit mCEditPA_LeftSteerWhlHozlSwpavailability;
	CEdit mCEditPA_LeftSteerWhlHozlSwpvalue;
// //input PA_LeftSteerWhlVertSwp data value
	CEdit mCEditPA_LeftSteerWhlVertSwpstatus;
	CEdit mCEditPA_LeftSteerWhlVertSwpavailability;
	CEdit mCEditPA_LeftSteerWhlVertSwpvalue;
// //input PA_RightSteerWhlTopKey data value
	CEdit mCEditPA_RightSteerWhlTopKeystatus;
	CEdit mCEditPA_RightSteerWhlTopKeyavailability;
	CEdit mCEditPA_RightSteerWhlTopKeyvalue;
// //input PA_RightSteerWhlBottomKey data value
	CEdit mCEditPA_RightSteerWhlBottomKeystatus;
	CEdit mCEditPA_RightSteerWhlBottomKeyavailability;
	CEdit mCEditPA_RightSteerWhlBottomKeyvalue;
// //input PA_RightSteerWhlLeKey data value
	CEdit mCEditPA_RightSteerWhlLeKeystatus;
	CEdit mCEditPA_RightSteerWhlLeKeyavailability;
	CEdit mCEditPA_RightSteerWhlLeKeyvalue;
// //input PA_RightSteerWhlRiKey data value
	CEdit mCEditPA_RightSteerWhlRiKeystatus;
	CEdit mCEditPA_RightSteerWhlRiKeyavailability;
	CEdit mCEditPA_RightSteerWhlRiKeyvalue;
// //input PA_RightSteerWhlRollKey data value
	CEdit mCEditPA_RightSteerWhlRollKeystatus;
	CEdit mCEditPA_RightSteerWhlRollKeyavailability;
	CEdit mCEditPA_RightSteerWhlRollKeyvalue;
// //input PA_RightSteerWhlConfirmKey data value
	CEdit mCEditPA_RightSteerWhlConfirmKeystatus;
	CEdit mCEditPA_RightSteerWhlConfirmKeyavailability;
	CEdit mCEditPA_RightSteerWhlConfirmKeyvalue;
// //input PA_RightSteerWhlVRKey data value
	CEdit mCEditPA_RightSteerWhlVRKeystatus;
	CEdit mCEditPA_RightSteerWhlVRKeyavailability;
	CEdit mCEditPA_RightSteerWhlVRKeyvalue;
// //input PA_RightSteerWhlMenuKey data value
	CEdit mCEditPA_RightSteerWhlMenuKeystatus;
	CEdit mCEditPA_RightSteerWhlMenuKeyavailability;
	CEdit mCEditPA_RightSteerWhlMenuKeyvalue;
// //input PA_RightSteerWhlCustomDefdKey data value
	CEdit mCEditPA_RightSteerWhlCustomDefdKeystatus;
	CEdit mCEditPA_RightSteerWhlCustomDefdKeyavailability;
	CEdit mCEditPA_RightSteerWhlCustomDefdKeyvalue;
// //input PA_RightSteerWhlMuteKey data value
	CEdit mCEditPA_RightSteerWhlMuteKeystatus;
	CEdit mCEditPA_RightSteerWhlMuteKeyavailability;
	CEdit mCEditPA_RightSteerWhlMuteKeyvalue;
// //input PA_RightSteerWhlVertMove data value
	CEdit mCEditPA_RightSteerWhlVertMovestatus;
	CEdit mCEditPA_RightSteerWhlVertMoveavailability;
	CEdit mCEditPA_RightSteerWhlVertMovevalue;
// //input PA_RightSteerWhlHozlSwp data value
	CEdit mCEditPA_RightSteerWhlHozlSwpstatus;
	CEdit mCEditPA_RightSteerWhlHozlSwpavailability;
	CEdit mCEditPA_RightSteerWhlHozlSwpvalue;
// //input PA_RightSteerWhlVertSwp data value
	CEdit mCEditPA_RightSteerWhlVertSwpstatus;
	CEdit mCEditPA_RightSteerWhlVertSwpavailability;
	CEdit mCEditPA_RightSteerWhlVertSwpvalue;
// //input PA_RightSteerWhlTripKey data value
	CEdit mCEditPA_RightSteerWhlTripKeystatus;
	CEdit mCEditPA_RightSteerWhlTripKeyavailability;
	CEdit mCEditPA_RightSteerWhlTripKeyvalue;
// //input PA_RightSteerWhlWeChatKey data value
	CEdit mCEditPA_RightSteerWhlWeChatKeystatus;
	CEdit mCEditPA_RightSteerWhlWeChatKeyavailability;
	CEdit mCEditPA_RightSteerWhlWeChatKeyvalue;
// //input PA_SngTripKey data value
	CEdit mCEditPA_SngTripKeystatus;
	CEdit mCEditPA_SngTripKeyavailability;
	CEdit mCEditPA_SngTripKeyvalue;
// //input PA_DrvrModPadl data value
	CEdit mCEditPA_DrvrModPadlstatus;
	CEdit mCEditPA_DrvrModPadlavailability;
	CEdit mCEditPA_DrvrModPadlvalue;
// //input PA_CustomDefKey data value
	CEdit mCEditPA_CustomDefKeystatus;
	CEdit mCEditPA_CustomDefKeyavailability;
	CEdit mCEditPA_CustomDefKeyvalue;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
