#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_navi0Dlg dialog

class pa_navi0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_navi0Dlg)

public:
	pa_navi0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_navi0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_NAVI0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_NaviInof data value
	CEdit mCEditPA_NaviInofactive;
	CEdit mCEditPA_NaviInofmute;
// //input PA_TBTInof data value
	CEdit mCEditPA_TBTInofactive;
	CEdit mCEditPA_TBTInofprogress;
	CEdit mCEditPA_TBTInoficon;
	CEdit mCEditPA_TBTInofdistance;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
