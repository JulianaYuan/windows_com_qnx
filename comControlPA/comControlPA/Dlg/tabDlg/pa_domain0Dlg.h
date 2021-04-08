#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_domain0Dlg dialog

class pa_domain0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_domain0Dlg)

public:
	pa_domain0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_domain0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_DOMAIN0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_ClkFmtForUseInt data value
	CEdit mCEditPA_ClkFmtForUseIntvalue;
// //input PA_DateFmtForUseInt data value
	CEdit mCEditPA_DateFmtForUseIntvalue;
// //input PA_DstLongUnitForUseInt data value
	CEdit mCEditPA_DstLongUnitForUseIntvalue;
// //input PA_DstShoUnitForUseInt data value
	CEdit mCEditPA_DstShoUnitForUseIntvalue;
// //input PA_FuCnsUnitForUseInt data value
	CEdit mCEditPA_FuCnsUnitForUseIntvalue;
// //input PA_VehSpdUnitForUseInt data value
	CEdit mCEditPA_VehSpdUnitForUseIntvalue;
// //input PA_AmbTUnitForUseInt data value
	CEdit mCEditPA_AmbTUnitForUseIntvalue;
// //input PA_VolUnitForUseInt data value
	CEdit mCEditPA_VolUnitForUseIntvalue;
// //input PA_PUnitForUseInt data value
	CEdit mCEditPA_PUnitForUseIntvalue;
// //input PA_SaveSetgToMemPrmnt data value
	CEdit mCEditPA_SaveSetgToMemPrmntvalue;
// //input PA_DOM_DIMSequence data value
	CEdit mCEditPA_DOM_DIMSequencevalue;
// //input PA_NoticeDisplayStatus data value
	CEdit mCEditPA_NoticeDisplayStatusvalue;
// //input PA_WelcomeDisplayFinish data value
	CEdit mCEditPA_WelcomeDisplayFinishvalue;
// //input PA_MemoryFailure data value
	CEdit mCEditPA_MemoryFailurevalue;
// //input PA_Trip_ScreenSwitch_Request data value
	CEdit mCEditPA_Trip_ScreenSwitch_Requestvalue;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
