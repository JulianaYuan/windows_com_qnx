
// comControlPADlg.h : header file
//

#pragma once
#include <stdio.h>
#include <vector>
#include <map>
#include "afxwin.h"
#include "OutputTab0Dlg.h"
/********auto gen pa Dialog headers start********/
#include "pa_adas0Dlg.h"
#include "pa_adas1Dlg.h"
#include "pa_adas2Dlg.h"
#include "pa_chime0Dlg.h"
#include "pa_climate0Dlg.h"
#include "pa_domain0Dlg.h"
#include "pa_dvr0Dlg.h"
#include "pa_gauge0Dlg.h"
#include "pa_hardkey0Dlg.h"
#include "pa_hardkey1Dlg.h"
#include "pa_media0Dlg.h"
#include "pa_navi0Dlg.h"
#include "pa_notification0Dlg.h"
#include "pa_phone0Dlg.h"
#include "pa_rearmirror0Dlg.h"
#include "pa_telltale0Dlg.h"
#include "pa_telltale1Dlg.h"
#include "pa_telltale2Dlg.h"
#include "pa_trip0Dlg.h"
#include "pa_trip1Dlg.h"
#include "pa_trip2Dlg.h"
#include "pa_trip3Dlg.h"
/********auto gen pa Dialog headers end********/
#include "afxcmn.h"

//using std;

// CcomControlPADlg dialog
class CcomControlPADlg : public CDialogEx
{
// Construction
public:
	CcomControlPADlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COMCONTROLPA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	std::map<CString, HANDLE> mMapCom;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	bool openComSync(CString comId);
	bool openComAsync(LPCWSTR comId);
	HANDLE mHandleCom;
	CString mComID;
	void SetComBaudRate();
	bool ReadDatFromCom();
	bool WriteDatToCom();
public:
	BOOL OnDeviceChange(UINT nEventType, DWORD dwData);
	void RefreshCom(BOOL add, CString nm);
	void InitComboBox();
	void InitComList();
	void InitComListFromReg();
	afx_msg void OnCbnSelchangeComID();
	afx_msg void OnBnClickedConnect();
	// com list
	CComboBox mComboBoxComId;
	//connect com
	CButton mCButtonConnect;
	// //show read com content
	afx_msg void OnDestroy();

	void InitTabDlgItem();
private:
	enum {
		E_OUTPUT_DLG=0,
		/********auto gen eTypeTabCtrl start********/
		E_PA_ADAS0_DLG,
		E_PA_ADAS1_DLG,
		E_PA_ADAS2_DLG,
		E_PA_CHIME0_DLG,
		E_PA_CLIMATE0_DLG,
		E_PA_DOMAIN0_DLG,
		E_PA_DVR0_DLG,
		E_PA_GAUGE0_DLG,
		E_PA_HARDKEY0_DLG,
		E_PA_HARDKEY1_DLG,
		E_PA_MEDIA0_DLG,
		E_PA_NAVI0_DLG,
		E_PA_NOTIFICATION0_DLG,
		E_PA_PHONE0_DLG,
		E_PA_REARMIRROR0_DLG,
		E_PA_TELLTALE0_DLG,
		E_PA_TELLTALE1_DLG,
		E_PA_TELLTALE2_DLG,
		E_PA_TRIP0_DLG,
		E_PA_TRIP1_DLG,
		E_PA_TRIP2_DLG,
		E_PA_TRIP3_DLG,
		/********auto gen eTypeTabCtrl end********/
		E_MAX_DLG,
	}eTypeTabCtrl;

	OutputTab0Dlg mOutputDlg;
	/********auto gen pa Dialog Members start********/
	pa_adas0Dlg mpa_adas0Dlg;
	pa_adas1Dlg mpa_adas1Dlg;
	pa_adas2Dlg mpa_adas2Dlg;
	pa_chime0Dlg mpa_chime0Dlg;
	pa_climate0Dlg mpa_climate0Dlg;
	pa_domain0Dlg mpa_domain0Dlg;
	pa_dvr0Dlg mpa_dvr0Dlg;
	pa_gauge0Dlg mpa_gauge0Dlg;
	pa_hardkey0Dlg mpa_hardkey0Dlg;
	pa_hardkey1Dlg mpa_hardkey1Dlg;
	pa_media0Dlg mpa_media0Dlg;
	pa_navi0Dlg mpa_navi0Dlg;
	pa_notification0Dlg mpa_notification0Dlg;
	pa_phone0Dlg mpa_phone0Dlg;
	pa_rearmirror0Dlg mpa_rearmirror0Dlg;
	pa_telltale0Dlg mpa_telltale0Dlg;
	pa_telltale1Dlg mpa_telltale1Dlg;
	pa_telltale2Dlg mpa_telltale2Dlg;
	pa_trip0Dlg mpa_trip0Dlg;
	pa_trip1Dlg mpa_trip1Dlg;
	pa_trip2Dlg mpa_trip2Dlg;
	pa_trip3Dlg mpa_trip3Dlg;
	/********auto gen pa Dialog Members end********/
public:
	// //show tab dlg
	CTabCtrl mCTabCtrl;
	afx_msg void OnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
