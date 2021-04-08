#pragma once
#include "afxwin.h"


// OutputTab0Dlg dialog

class OutputTab0Dlg : public CDialog
{
	DECLARE_DYNAMIC(OutputTab0Dlg)

public:
	OutputTab0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~OutputTab0Dlg();

	void startTimer();
	void endTimer();
	bool ReadDatFromCom();
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGOUTPUT_TAB0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	// //com out pu windows
	CEdit mCEditComOutput;
	
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
