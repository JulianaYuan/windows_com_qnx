// pa_notification0Dlg.cpp : implementation file
//

// pa_notification0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_notification0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_notification0Dlg, CDialog)

pa_notification0Dlg::pa_notification0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_NOTIFICATION0, pParent)
{

}

pa_notification0Dlg::~pa_notification0Dlg()
{
}

void pa_notification0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONLISTNotificationA, mCEditPA_NotificationListNotificationA);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONLISTNotificationB, mCEditPA_NotificationListNotificationB);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID1, mCEditPA_NotificationCheckListCheckListNotiID1);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID2, mCEditPA_NotificationCheckListCheckListNotiID2);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID3, mCEditPA_NotificationCheckListCheckListNotiID3);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID4, mCEditPA_NotificationCheckListCheckListNotiID4);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID5, mCEditPA_NotificationCheckListCheckListNotiID5);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID6, mCEditPA_NotificationCheckListCheckListNotiID6);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID7, mCEditPA_NotificationCheckListCheckListNotiID7);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID8, mCEditPA_NotificationCheckListCheckListNotiID8);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID9, mCEditPA_NotificationCheckListCheckListNotiID9);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID10, mCEditPA_NotificationCheckListCheckListNotiID10);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTNotificationTellTale, mCEditPA_NotificationCheckListNotificationTellTale);
	DDX_Control(pDX, IDC_EDITPA_NOTIFICATIONCHECKLISTSteeringAssistanceWarning, mCEditPA_NotificationCheckListSteeringAssistanceWarning);
	DDX_Control(pDX, IDC_EDITPA_NOTICONFIRMBUTTONNotiConfirmButton, mCEditPA_NotiConfirmButtonNotiConfirmButton);
	DDX_Control(pDX, IDC_EDITPA_NOTICONFIRMBUTTONNotiUserAction, mCEditPA_NotiConfirmButtonNotiUserAction);
	DDX_Control(pDX, IDC_EDITPA_HMISHOWUPSTATUSvalue, mCEditPA_HMIShowupStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERDOORSTATUSvalue, mCEditPA_DIM_DriverDoorStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERDOORSTATUSavailability, mCEditPA_DIM_DriverDoorStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_PASSENGERDOORSTATUSvalue, mCEditPA_DIM_PassengerDoorStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_PASSENGERDOORSTATUSavailability, mCEditPA_DIM_PassengerDoorStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERREARDOORSTATUSvalue, mCEditPA_DIM_DriverRearDoorStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERREARDOORSTATUSavailability, mCEditPA_DIM_DriverRearDoorStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_PASSENGERREARDOORSTATUSvalue, mCEditPA_DIM_PassengerRearDoorStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_PASSENGERREARDOORSTATUSavailability, mCEditPA_DIM_PassengerRearDoorStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_HOODSTATUSvalue, mCEditPA_DIM_HoodStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_HOODSTATUSavailability, mCEditPA_DIM_HoodStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_TRUNKSTATUSvalue, mCEditPA_DIM_TrunkStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_TRUNKSTATUSavailability, mCEditPA_DIM_TrunkStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_TANKFLAPSTATUSvalue, mCEditPA_DIM_TankFlapStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_TANKFLAPSTATUSavailability, mCEditPA_DIM_TankFlapStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_ACCHARGELIDSTATUSvalue, mCEditPA_DIM_ACChargeLidStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_ACCHARGELIDSTATUSavailability, mCEditPA_DIM_ACChargeLidStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_DCCHARGELIDSTATUSvalue, mCEditPA_DIM_DCChargeLidStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_DCCHARGELIDSTATUSavailability, mCEditPA_DIM_DCChargeLidStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_ACANDDCCHARGELIDSTATUSvalue, mCEditPA_DIM_ACandDCChargeLidStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_ACANDDCCHARGELIDSTATUSavailability, mCEditPA_DIM_ACandDCChargeLidStatusavailability);
}


BEGIN_MESSAGE_MAP(pa_notification0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_notification0Dlg::WriteDatToCom(string paName, int count, ...)		    
{                                                                                
	HANDLE hdl = theApp.getHandle();                                                
	//3.input date to com            
	string IpBuffer = "./winPAApi ";                                              
	va_list ap;                                                                     
	va_start(ap, count);                                                            
	IpBuffer += paName;                                                             
	IpBuffer += " ";                                                              
	for (int i=0;i<count;i++)                                                       
	{                                                                               
		int param =	va_arg(ap, int);                                        
		IpBuffer += to_string(param);                                           
		IpBuffer += " ";                                                      
	}                                                                               
	IpBuffer += "\r";                                                               
                                                                                 
	DWORD nBytesSent;     //real count that inputing                              
	if (INVALID_HANDLE_VALUE != hdl)                                                
	{                                                                               
		WriteFile(hdl, IpBuffer.c_str(), strlen(IpBuffer.c_str()), &nBytesSent, NULL);
	}                                                                               
                                                                                 
	return TRUE;                                                                    
}

// pa_notification0Dlg message handlers
BOOL pa_notification0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONLISTNotificationA)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONLISTNotificationB)
			)
		{
				UpdateData(TRUE);
			UINT NotificationA = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONLISTNotificationA);
			UINT NotificationB = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONLISTNotificationB);
			WriteDatToCom("PA_NotificationList",2, NotificationA, NotificationB);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID1)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID2)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID3)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID4)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID5)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID6)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID7)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID8)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID9)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID10)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTNotificationTellTale)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTIFICATIONCHECKLISTSteeringAssistanceWarning)
			)
		{
				UpdateData(TRUE);
			UINT CheckListNotiID1 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID1);
			UINT CheckListNotiID2 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID2);
			UINT CheckListNotiID3 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID3);
			UINT CheckListNotiID4 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID4);
			UINT CheckListNotiID5 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID5);
			UINT CheckListNotiID6 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID6);
			UINT CheckListNotiID7 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID7);
			UINT CheckListNotiID8 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID8);
			UINT CheckListNotiID9 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID9);
			UINT CheckListNotiID10 = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTCheckListNotiID10);
			UINT NotificationTellTale = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTNotificationTellTale);
			UINT SteeringAssistanceWarning = GetDlgItemInt(IDC_EDITPA_NOTIFICATIONCHECKLISTSteeringAssistanceWarning);
			WriteDatToCom("PA_NotificationCheckList",12, CheckListNotiID1, CheckListNotiID2, CheckListNotiID3, CheckListNotiID4, CheckListNotiID5, CheckListNotiID6, CheckListNotiID7, CheckListNotiID8, CheckListNotiID9, CheckListNotiID10, NotificationTellTale, SteeringAssistanceWarning);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_NOTICONFIRMBUTTONNotiConfirmButton)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NOTICONFIRMBUTTONNotiUserAction)
			)
		{
				UpdateData(TRUE);
			UINT NotiConfirmButton = GetDlgItemInt(IDC_EDITPA_NOTICONFIRMBUTTONNotiConfirmButton);
			UINT NotiUserAction = GetDlgItemInt(IDC_EDITPA_NOTICONFIRMBUTTONNotiUserAction);
			WriteDatToCom("PA_NotiConfirmButton",2, NotiConfirmButton, NotiUserAction);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_HMISHOWUPSTATUSvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_HMISHOWUPSTATUSvalue);
			WriteDatToCom("PA_HMIShowupStatus",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERDOORSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERDOORSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERDOORSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERDOORSTATUSavailability);
			WriteDatToCom("PA_DIM_DriverDoorStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_PASSENGERDOORSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_PASSENGERDOORSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_PASSENGERDOORSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_PASSENGERDOORSTATUSavailability);
			WriteDatToCom("PA_DIM_PassengerDoorStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERREARDOORSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERREARDOORSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERREARDOORSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERREARDOORSTATUSavailability);
			WriteDatToCom("PA_DIM_DriverRearDoorStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_PASSENGERREARDOORSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_PASSENGERREARDOORSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_PASSENGERREARDOORSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_PASSENGERREARDOORSTATUSavailability);
			WriteDatToCom("PA_DIM_PassengerRearDoorStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_HOODSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_HOODSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_HOODSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_HOODSTATUSavailability);
			WriteDatToCom("PA_DIM_HoodStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_TRUNKSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_TRUNKSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_TRUNKSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_TRUNKSTATUSavailability);
			WriteDatToCom("PA_DIM_TrunkStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_TANKFLAPSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_TANKFLAPSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_TANKFLAPSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_TANKFLAPSTATUSavailability);
			WriteDatToCom("PA_DIM_TankFlapStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ACCHARGELIDSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ACCHARGELIDSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_ACCHARGELIDSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_ACCHARGELIDSTATUSavailability);
			WriteDatToCom("PA_DIM_ACChargeLidStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DCCHARGELIDSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DCCHARGELIDSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_DCCHARGELIDSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_DCCHARGELIDSTATUSavailability);
			WriteDatToCom("PA_DIM_DCChargeLidStatus",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ACANDDCCHARGELIDSTATUSvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ACANDDCCHARGELIDSTATUSavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_ACANDDCCHARGELIDSTATUSvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_ACANDDCCHARGELIDSTATUSavailability);
			WriteDatToCom("PA_DIM_ACandDCChargeLidStatus",2, value, availability);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
