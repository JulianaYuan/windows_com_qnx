#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_notification0Dlg dialog

class pa_notification0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_notification0Dlg)

public:
	pa_notification0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_notification0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_NOTIFICATION0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_NotificationList data value
	CEdit mCEditPA_NotificationListNotificationA;
	CEdit mCEditPA_NotificationListNotificationB;
// //input PA_NotificationCheckList data value
	CEdit mCEditPA_NotificationCheckListCheckListNotiID1;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID2;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID3;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID4;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID5;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID6;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID7;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID8;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID9;
	CEdit mCEditPA_NotificationCheckListCheckListNotiID10;
	CEdit mCEditPA_NotificationCheckListNotificationTellTale;
	CEdit mCEditPA_NotificationCheckListSteeringAssistanceWarning;
// //input PA_NotiConfirmButton data value
	CEdit mCEditPA_NotiConfirmButtonNotiConfirmButton;
	CEdit mCEditPA_NotiConfirmButtonNotiUserAction;
// //input PA_HMIShowupStatus data value
	CEdit mCEditPA_HMIShowupStatusvalue;
// //input PA_DIM_DriverDoorStatus data value
	CEdit mCEditPA_DIM_DriverDoorStatusvalue;
	CEdit mCEditPA_DIM_DriverDoorStatusavailability;
// //input PA_DIM_PassengerDoorStatus data value
	CEdit mCEditPA_DIM_PassengerDoorStatusvalue;
	CEdit mCEditPA_DIM_PassengerDoorStatusavailability;
// //input PA_DIM_DriverRearDoorStatus data value
	CEdit mCEditPA_DIM_DriverRearDoorStatusvalue;
	CEdit mCEditPA_DIM_DriverRearDoorStatusavailability;
// //input PA_DIM_PassengerRearDoorStatus data value
	CEdit mCEditPA_DIM_PassengerRearDoorStatusvalue;
	CEdit mCEditPA_DIM_PassengerRearDoorStatusavailability;
// //input PA_DIM_HoodStatus data value
	CEdit mCEditPA_DIM_HoodStatusvalue;
	CEdit mCEditPA_DIM_HoodStatusavailability;
// //input PA_DIM_TrunkStatus data value
	CEdit mCEditPA_DIM_TrunkStatusvalue;
	CEdit mCEditPA_DIM_TrunkStatusavailability;
// //input PA_DIM_TankFlapStatus data value
	CEdit mCEditPA_DIM_TankFlapStatusvalue;
	CEdit mCEditPA_DIM_TankFlapStatusavailability;
// //input PA_DIM_ACChargeLidStatus data value
	CEdit mCEditPA_DIM_ACChargeLidStatusvalue;
	CEdit mCEditPA_DIM_ACChargeLidStatusavailability;
// //input PA_DIM_DCChargeLidStatus data value
	CEdit mCEditPA_DIM_DCChargeLidStatusvalue;
	CEdit mCEditPA_DIM_DCChargeLidStatusavailability;
// //input PA_DIM_ACandDCChargeLidStatus data value
	CEdit mCEditPA_DIM_ACandDCChargeLidStatusvalue;
	CEdit mCEditPA_DIM_ACandDCChargeLidStatusavailability;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
