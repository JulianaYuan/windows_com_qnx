#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_media0Dlg dialog

class pa_media0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_media0Dlg)

public:
	pa_media0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_media0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_MEDIA0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_MediaInfo data value
	CEdit mCEditPA_MediaInfoid;
	CEdit mCEditPA_MediaInfotype;
	CEdit mCEditPA_MediaInfoplay;
	CEdit mCEditPA_MediaInfomute;
// //input PA_MediaVolume data value
	CEdit mCEditPA_MediaVolumevalue;
// //input PA_MediaListFocusItem data value
	CEdit mCEditPA_MediaListFocusItemvalue;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
