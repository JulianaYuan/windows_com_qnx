#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_chime0Dlg dialog

class pa_chime0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_chime0Dlg)

public:
	pa_chime0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_chime0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_CHIME0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_ChimeReq data value
	CEdit mCEditPA_ChimeReqSoundID;
	CEdit mCEditPA_ChimeReqStatus;
// //input PA_ChimeAct data value
	CEdit mCEditPA_ChimeActSoundID;
	CEdit mCEditPA_ChimeActStatus;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
