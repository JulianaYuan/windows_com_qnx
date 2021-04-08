#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_dvr0Dlg dialog

class pa_dvr0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_dvr0Dlg)

public:
	pa_dvr0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_dvr0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_DVR0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
