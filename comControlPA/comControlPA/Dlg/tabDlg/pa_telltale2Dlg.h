#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_telltale2Dlg dialog

class pa_telltale2Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_telltale2Dlg)

public:
	pa_telltale2Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_telltale2Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_TELLTALE2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_Seatbelt_Driver data value
	CEdit mCEditPA_Seatbelt_Drivervalue;
// //input PA_Seatbelt_Passenger data value
	CEdit mCEditPA_Seatbelt_Passengervalue;
// //input PA_Seatbelt_MidPassenger data value
	CEdit mCEditPA_Seatbelt_MidPassengervalue;
// //input PA_Seatbelt_SecLeft data value
	CEdit mCEditPA_Seatbelt_SecLeftvalue;
// //input PA_Seatbelt_SecMid data value
	CEdit mCEditPA_Seatbelt_SecMidvalue;
// //input PA_Seatbelt_SecRight data value
	CEdit mCEditPA_Seatbelt_SecRightvalue;
// //input PA_Seatbelt_ThrdLeft data value
	CEdit mCEditPA_Seatbelt_ThrdLeftvalue;
// //input PA_Seatbelt_ThrdMid data value
	CEdit mCEditPA_Seatbelt_ThrdMidvalue;
// //input PA_Seatbelt_ThrdRight data value
	CEdit mCEditPA_Seatbelt_ThrdRightvalue;
// //input PA_Seatbelt_FrthLeft data value
	CEdit mCEditPA_Seatbelt_FrthLeftvalue;
// //input PA_Seatbelt_FrthMid data value
	CEdit mCEditPA_Seatbelt_FrthMidvalue;
// //input PA_Seatbelt_FrthRight data value
	CEdit mCEditPA_Seatbelt_FrthRightvalue;
// //input CPA_UsgModSts data value
	CEdit mCEditCPA_UsgModStsavailability;
	CEdit mCEditCPA_UsgModStsdata;
// //input CPA_Carconfig8 data value
	CEdit mCEditCPA_Carconfig8value;
// //input PA_Seatbelt_output data value
	CEdit mCEditPA_Seatbelt_outputvalue;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
