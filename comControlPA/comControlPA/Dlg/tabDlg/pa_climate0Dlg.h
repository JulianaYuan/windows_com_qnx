#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_climate0Dlg dialog

class pa_climate0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_climate0Dlg)

public:
	pa_climate0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_climate0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_CLIMATE0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
