#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_trip3Dlg dialog

class pa_trip3Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_trip3Dlg)

public:
	pa_trip3Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_trip3Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_TRIP3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_HDCTargetSpeed data value
	CEdit mCEditPA_HDCTargetSpeeddata;
	CEdit mCEditPA_HDCTargetSpeedvalue;
	CEdit mCEditPA_HDCTargetSpeedreserve;
	CEdit mCEditPA_HDCTargetSpeedavailability;
// //input PA_DOW_WarningFlash data value
	CEdit mCEditPA_DOW_WarningFlashdata;
	CEdit mCEditPA_DOW_WarningFlashavailability;
// //input PA_EnergyRegenerativeLevel data value
	CEdit mCEditPA_EnergyRegenerativeLeveldata;
	CEdit mCEditPA_EnergyRegenerativeLevelavailability;
// //input PA_HMITrip_View data value
	CEdit mCEditPA_HMITrip_Viewvalue;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
