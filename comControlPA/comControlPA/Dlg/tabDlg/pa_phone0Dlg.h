#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_phone0Dlg dialog

class pa_phone0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_phone0Dlg)

public:
	pa_phone0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_phone0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_PHONE0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_PhoneInfo data value
	CEdit mCEditPA_PhoneInfostate;
	CEdit mCEditPA_PhoneInfomicrophoneMute;
	CEdit mCEditPA_PhoneInfosoundMute;
	CEdit mCEditPA_PhoneInfotime;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
