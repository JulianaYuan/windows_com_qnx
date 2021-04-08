#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_hardkey1Dlg dialog

class pa_hardkey1Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_hardkey1Dlg)

public:
	pa_hardkey1Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_hardkey1Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_HARDKEY1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_SteerPosnAdjmtCtrl data value
	CEdit mCEditPA_SteerPosnAdjmtCtrlvalue;
// //input PA_HMI_VibrationFbToSwtp data value
	CEdit mCEditPA_HMI_VibrationFbToSwtptype;
	CEdit mCEditPA_HMI_VibrationFbToSwtpdata;
// //input PA_RiTopReq data value
	CEdit mCEditPA_RiTopReqvalue;
// //input PA_RiDownReq data value
	CEdit mCEditPA_RiDownReqvalue;
// //input PA_RiLeftReq data value
	CEdit mCEditPA_RiLeftReqvalue;
// //input PA_RiRightReq data value
	CEdit mCEditPA_RiRightReqvalue;
// //input PA_BtnConfiReq data value
	CEdit mCEditPA_BtnConfiReqvalue;
// //input PA_SteerAdjSwtUpSts data value
	CEdit mCEditPA_SteerAdjSwtUpStsvalue;
// //input PA_SteerAdjSwtDwnSts data value
	CEdit mCEditPA_SteerAdjSwtDwnStsvalue;
// //input PA_SteerAdjSwtFwdSts data value
	CEdit mCEditPA_SteerAdjSwtFwdStsvalue;
// //input PA_SteerAdjSwtBackSts data value
	CEdit mCEditPA_SteerAdjSwtBackStsvalue;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
