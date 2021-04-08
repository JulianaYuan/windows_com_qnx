#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_rearmirror0Dlg dialog

class pa_rearmirror0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_rearmirror0Dlg)

public:
	pa_rearmirror0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_rearmirror0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_REARMIRROR0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_ERMD_ERMDAdjustmentEntrance_Grey data value
	CEdit mCEditPA_ERMD_ERMDAdjustmentEntrance_Greyvalue;
	CEdit mCEditPA_ERMD_ERMDAdjustmentEntrance_Greyavailability;
// //input PA_ERMD_ERMDAdjustmentEntrance_Normal data value
	CEdit mCEditPA_ERMD_ERMDAdjustmentEntrance_Normalvalue;
	CEdit mCEditPA_ERMD_ERMDAdjustmentEntrance_Normalavailability;
// //input PA_ERMD_ERMDAdjustmentEntrance_Highlight data value
	CEdit mCEditPA_ERMD_ERMDAdjustmentEntrance_Highlightvalue;
	CEdit mCEditPA_ERMD_ERMDAdjustmentEntrance_Highlightavailability;
// //input PA_ERMD_Left_Normal data value
	CEdit mCEditPA_ERMD_Left_Normalvalue;
	CEdit mCEditPA_ERMD_Left_Normalavailability;
// //input PA_ERMD_Left_Highlight data value
	CEdit mCEditPA_ERMD_Left_Highlightvalue;
	CEdit mCEditPA_ERMD_Left_Highlightavailability;
// //input PA_ERMD_Left_Grey data value
	CEdit mCEditPA_ERMD_Left_Greyvalue;
	CEdit mCEditPA_ERMD_Left_Greyavailability;
// //input PA_ERMD_Right_Normal data value
	CEdit mCEditPA_ERMD_Right_Normalvalue;
	CEdit mCEditPA_ERMD_Right_Normalavailability;
// //input PA_ERMD_Right_Highlight data value
	CEdit mCEditPA_ERMD_Right_Highlightvalue;
	CEdit mCEditPA_ERMD_Right_Highlightavailability;
// //input PA_ERMD_Right_Grey data value
	CEdit mCEditPA_ERMD_Right_Greyvalue;
	CEdit mCEditPA_ERMD_Right_Greyavailability;
// //input PA_ExtrMirrAdjHmiReq data value
	CEdit mCEditPA_ExtrMirrAdjHmiReqvalue;
// //input PA_ExtrMirrSelnHmiReq data value
	CEdit mCEditPA_ExtrMirrSelnHmiReqvalue;
// //input PA_ExtrReViewMirrDispAdjHmiReq data value
	CEdit mCEditPA_ExtrReViewMirrDispAdjHmiReqvalue;
// //input PA_ExtrReViewMirrDispRstSetg data value
	CEdit mCEditPA_ExtrReViewMirrDispRstSetgvalue;
// //input PA_Select_ERMD_Entrance data value
	CEdit mCEditPA_Select_ERMD_Entrancevalue;
// //input PA_Enter_ERMD_Entrance data value
	CEdit mCEditPA_Enter_ERMD_Entrancevalue;
// //input PA_Enter_ERMD_Adjustment data value
	CEdit mCEditPA_Enter_ERMD_Adjustmentvalue;
// //input PA_Select_ERMD_Adjustment data value
	CEdit mCEditPA_Select_ERMD_Adjustmentvalue;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
