#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_trip1Dlg dialog

class pa_trip1Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_trip1Dlg)

public:
	pa_trip1Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_trip1Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_TRIP1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_DIM_DriverDisplay data value
	CEdit mCEditPA_DIM_DriverDisplaydata;
	CEdit mCEditPA_DIM_DriverDisplayavailability;
// //input PA_DIM_DriverDisplayBg data value
	CEdit mCEditPA_DIM_DriverDisplayBgdata;
	CEdit mCEditPA_DIM_DriverDisplayBgavailability;
// //input PA_DIM_DriverDisplayBg2 data value
	CEdit mCEditPA_DIM_DriverDisplayBg2data;
	CEdit mCEditPA_DIM_DriverDisplayBg2availability;
// //input PA_LeFrntTireMsgP data value
	CEdit mCEditPA_LeFrntTireMsgPdata;
	CEdit mCEditPA_LeFrntTireMsgPformat;
	CEdit mCEditPA_LeFrntTireMsgPtimeout;
	CEdit mCEditPA_LeFrntTireMsgPavailability;
// //input PA_RiFrntTireMsgP data value
	CEdit mCEditPA_RiFrntTireMsgPdata;
	CEdit mCEditPA_RiFrntTireMsgPformat;
	CEdit mCEditPA_RiFrntTireMsgPtimeout;
	CEdit mCEditPA_RiFrntTireMsgPavailability;
// //input PA_LeReTireMsgP data value
	CEdit mCEditPA_LeReTireMsgPdata;
	CEdit mCEditPA_LeReTireMsgPformat;
	CEdit mCEditPA_LeReTireMsgPtimeout;
	CEdit mCEditPA_LeReTireMsgPavailability;
// //input PA_RiReTireMsgP data value
	CEdit mCEditPA_RiReTireMsgPdata;
	CEdit mCEditPA_RiReTireMsgPformat;
	CEdit mCEditPA_RiReTireMsgPtimeout;
	CEdit mCEditPA_RiReTireMsgPavailability;
// //input PA_LeFrntTireMsgT data value
	CEdit mCEditPA_LeFrntTireMsgTdata;
	CEdit mCEditPA_LeFrntTireMsgTformat;
	CEdit mCEditPA_LeFrntTireMsgTtimeout;
	CEdit mCEditPA_LeFrntTireMsgTavailability;
// //input PA_RiFrntTireMsgT data value
	CEdit mCEditPA_RiFrntTireMsgTdata;
	CEdit mCEditPA_RiFrntTireMsgTformat;
	CEdit mCEditPA_RiFrntTireMsgTtimeout;
	CEdit mCEditPA_RiFrntTireMsgTavailability;
// //input PA_LeReTireMsgT data value
	CEdit mCEditPA_LeReTireMsgTdata;
	CEdit mCEditPA_LeReTireMsgTformat;
	CEdit mCEditPA_LeReTireMsgTtimeout;
	CEdit mCEditPA_LeReTireMsgTavailability;
// //input PA_RiReTireMsgT data value
	CEdit mCEditPA_RiReTireMsgTdata;
	CEdit mCEditPA_RiReTireMsgTformat;
	CEdit mCEditPA_RiReTireMsgTtimeout;
	CEdit mCEditPA_RiReTireMsgTavailability;
// //input PA_LeFrntTireMsgMsgOldFlg data value
	CEdit mCEditPA_LeFrntTireMsgMsgOldFlgdata;
	CEdit mCEditPA_LeFrntTireMsgMsgOldFlgtimeout;
// //input PA_LeReTireMsgMsgOldFlg data value
	CEdit mCEditPA_LeReTireMsgMsgOldFlgdata;
	CEdit mCEditPA_LeReTireMsgMsgOldFlgtimeout;
// //input PA_RiFrntTireMsgMsgOldFlg data value
	CEdit mCEditPA_RiFrntTireMsgMsgOldFlgdata;
	CEdit mCEditPA_RiFrntTireMsgMsgOldFlgtimeout;
// //input PA_RiReTireMsgMsgOldFlg data value
	CEdit mCEditPA_RiReTireMsgMsgOldFlgdata;
	CEdit mCEditPA_RiReTireMsgMsgOldFlgtimeout;
// //input PA_LeFrntTireMsgPWarnFlg data value
	CEdit mCEditPA_LeFrntTireMsgPWarnFlgdata;
	CEdit mCEditPA_LeFrntTireMsgPWarnFlgtimeout;
// //input PA_LeReTireMsgPWarnFlg data value
	CEdit mCEditPA_LeReTireMsgPWarnFlgdata;
	CEdit mCEditPA_LeReTireMsgPWarnFlgtimeout;
// //input PA_RiFrntTireMsgPWarnFlg data value
	CEdit mCEditPA_RiFrntTireMsgPWarnFlgdata;
	CEdit mCEditPA_RiFrntTireMsgPWarnFlgtimeout;
// //input PA_RiReTireMsgPWarnFlg data value
	CEdit mCEditPA_RiReTireMsgPWarnFlgdata;
	CEdit mCEditPA_RiReTireMsgPWarnFlgtimeout;
// //input PA_LeFrntTireMsgTWarnFlg data value
	CEdit mCEditPA_LeFrntTireMsgTWarnFlgdata;
	CEdit mCEditPA_LeFrntTireMsgTWarnFlgtimeout;
// //input PA_LeReTireMsgTWarnFlg data value
	CEdit mCEditPA_LeReTireMsgTWarnFlgdata;
	CEdit mCEditPA_LeReTireMsgTWarnFlgtimeout;
// //input PA_RiFrntTireMsgTWarnFlg data value
	CEdit mCEditPA_RiFrntTireMsgTWarnFlgdata;
	CEdit mCEditPA_RiFrntTireMsgTWarnFlgtimeout;
// //input PA_RiReTireMsgTWarnFlg data value
	CEdit mCEditPA_RiReTireMsgTWarnFlgdata;
	CEdit mCEditPA_RiReTireMsgTWarnFlgtimeout;
// //input PA_LeFrntTireMsgSysWarnFlg data value
	CEdit mCEditPA_LeFrntTireMsgSysWarnFlgdata;
	CEdit mCEditPA_LeFrntTireMsgSysWarnFlgtimeout;
// //input PA_LeReTireMsgSysWarnFlg data value
	CEdit mCEditPA_LeReTireMsgSysWarnFlgdata;
	CEdit mCEditPA_LeReTireMsgSysWarnFlgtimeout;
// //input PA_RiFrntTireMsgSysWarnFlg data value
	CEdit mCEditPA_RiFrntTireMsgSysWarnFlgdata;
	CEdit mCEditPA_RiFrntTireMsgSysWarnFlgtimeout;
// //input PA_RiReTireMsgSysWarnFlg data value
	CEdit mCEditPA_RiReTireMsgSysWarnFlgdata;
	CEdit mCEditPA_RiReTireMsgSysWarnFlgtimeout;
// //input PA_LeFrntTireMsgFastLoseWarnFlg data value
	CEdit mCEditPA_LeFrntTireMsgFastLoseWarnFlgdata;
	CEdit mCEditPA_LeFrntTireMsgFastLoseWarnFlgtimeout;
// //input PA_LeReTireMsgFastLoseWarnFlg data value
	CEdit mCEditPA_LeReTireMsgFastLoseWarnFlgdata;
	CEdit mCEditPA_LeReTireMsgFastLoseWarnFlgtimeout;
// //input PA_RiFrntTireMsgFastLoseWarnFlg data value
	CEdit mCEditPA_RiFrntTireMsgFastLoseWarnFlgdata;
	CEdit mCEditPA_RiFrntTireMsgFastLoseWarnFlgtimeout;
// //input PA_RiReTireMsgFastLoseWarnFlg data value
	CEdit mCEditPA_RiReTireMsgFastLoseWarnFlgdata;
	CEdit mCEditPA_RiReTireMsgFastLoseWarnFlgtimeout;
// //input PA_LeFrntTireMsgBattLoSt data value
	CEdit mCEditPA_LeFrntTireMsgBattLoStdata;
	CEdit mCEditPA_LeFrntTireMsgBattLoSttimeout;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
