// pa_rearmirror0Dlg.cpp : implementation file
//

// pa_rearmirror0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_rearmirror0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_rearmirror0Dlg, CDialog)

pa_rearmirror0Dlg::pa_rearmirror0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_REARMIRROR0, pParent)
{

}

pa_rearmirror0Dlg::~pa_rearmirror0Dlg()
{
}

void pa_rearmirror0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_GREYvalue, mCEditPA_ERMD_ERMDAdjustmentEntrance_Greyvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_GREYavailability, mCEditPA_ERMD_ERMDAdjustmentEntrance_Greyavailability);
	DDX_Control(pDX, IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_NORMALvalue, mCEditPA_ERMD_ERMDAdjustmentEntrance_Normalvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_NORMALavailability, mCEditPA_ERMD_ERMDAdjustmentEntrance_Normalavailability);
	DDX_Control(pDX, IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_HIGHLIGHTvalue, mCEditPA_ERMD_ERMDAdjustmentEntrance_Highlightvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_HIGHLIGHTavailability, mCEditPA_ERMD_ERMDAdjustmentEntrance_Highlightavailability);
	DDX_Control(pDX, IDC_EDITPA_ERMD_LEFT_NORMALvalue, mCEditPA_ERMD_Left_Normalvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_LEFT_NORMALavailability, mCEditPA_ERMD_Left_Normalavailability);
	DDX_Control(pDX, IDC_EDITPA_ERMD_LEFT_HIGHLIGHTvalue, mCEditPA_ERMD_Left_Highlightvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_LEFT_HIGHLIGHTavailability, mCEditPA_ERMD_Left_Highlightavailability);
	DDX_Control(pDX, IDC_EDITPA_ERMD_LEFT_GREYvalue, mCEditPA_ERMD_Left_Greyvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_LEFT_GREYavailability, mCEditPA_ERMD_Left_Greyavailability);
	DDX_Control(pDX, IDC_EDITPA_ERMD_RIGHT_NORMALvalue, mCEditPA_ERMD_Right_Normalvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_RIGHT_NORMALavailability, mCEditPA_ERMD_Right_Normalavailability);
	DDX_Control(pDX, IDC_EDITPA_ERMD_RIGHT_HIGHLIGHTvalue, mCEditPA_ERMD_Right_Highlightvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_RIGHT_HIGHLIGHTavailability, mCEditPA_ERMD_Right_Highlightavailability);
	DDX_Control(pDX, IDC_EDITPA_ERMD_RIGHT_GREYvalue, mCEditPA_ERMD_Right_Greyvalue);
	DDX_Control(pDX, IDC_EDITPA_ERMD_RIGHT_GREYavailability, mCEditPA_ERMD_Right_Greyavailability);
	DDX_Control(pDX, IDC_EDITPA_EXTRMIRRADJHMIREQvalue, mCEditPA_ExtrMirrAdjHmiReqvalue);
	DDX_Control(pDX, IDC_EDITPA_EXTRMIRRSELNHMIREQvalue, mCEditPA_ExtrMirrSelnHmiReqvalue);
	DDX_Control(pDX, IDC_EDITPA_EXTRREVIEWMIRRDISPADJHMIREQvalue, mCEditPA_ExtrReViewMirrDispAdjHmiReqvalue);
	DDX_Control(pDX, IDC_EDITPA_EXTRREVIEWMIRRDISPRSTSETGvalue, mCEditPA_ExtrReViewMirrDispRstSetgvalue);
	DDX_Control(pDX, IDC_EDITPA_SELECT_ERMD_ENTRANCEvalue, mCEditPA_Select_ERMD_Entrancevalue);
	DDX_Control(pDX, IDC_EDITPA_ENTER_ERMD_ENTRANCEvalue, mCEditPA_Enter_ERMD_Entrancevalue);
	DDX_Control(pDX, IDC_EDITPA_ENTER_ERMD_ADJUSTMENTvalue, mCEditPA_Enter_ERMD_Adjustmentvalue);
	DDX_Control(pDX, IDC_EDITPA_SELECT_ERMD_ADJUSTMENTvalue, mCEditPA_Select_ERMD_Adjustmentvalue);
}


BEGIN_MESSAGE_MAP(pa_rearmirror0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_rearmirror0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_rearmirror0Dlg message handlers
BOOL pa_rearmirror0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_GREYvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_GREYavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_GREYvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_GREYavailability);
			WriteDatToCom("PA_ERMD_ERMDAdjustmentEntrance_Grey",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_NORMALvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_NORMALavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_NORMALvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_NORMALavailability);
			WriteDatToCom("PA_ERMD_ERMDAdjustmentEntrance_Normal",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_HIGHLIGHTvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_HIGHLIGHTavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_HIGHLIGHTvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_ERMDADJUSTMENTENTRANCE_HIGHLIGHTavailability);
			WriteDatToCom("PA_ERMD_ERMDAdjustmentEntrance_Highlight",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_LEFT_NORMALvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_LEFT_NORMALavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_LEFT_NORMALvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_LEFT_NORMALavailability);
			WriteDatToCom("PA_ERMD_Left_Normal",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_LEFT_HIGHLIGHTvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_LEFT_HIGHLIGHTavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_LEFT_HIGHLIGHTvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_LEFT_HIGHLIGHTavailability);
			WriteDatToCom("PA_ERMD_Left_Highlight",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_LEFT_GREYvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_LEFT_GREYavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_LEFT_GREYvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_LEFT_GREYavailability);
			WriteDatToCom("PA_ERMD_Left_Grey",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_RIGHT_NORMALvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_RIGHT_NORMALavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_RIGHT_NORMALvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_RIGHT_NORMALavailability);
			WriteDatToCom("PA_ERMD_Right_Normal",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_RIGHT_HIGHLIGHTvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_RIGHT_HIGHLIGHTavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_RIGHT_HIGHLIGHTvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_RIGHT_HIGHLIGHTavailability);
			WriteDatToCom("PA_ERMD_Right_Highlight",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_RIGHT_GREYvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ERMD_RIGHT_GREYavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ERMD_RIGHT_GREYvalue);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ERMD_RIGHT_GREYavailability);
			WriteDatToCom("PA_ERMD_Right_Grey",2, value, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EXTRMIRRADJHMIREQvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_EXTRMIRRADJHMIREQvalue);
			WriteDatToCom("PA_ExtrMirrAdjHmiReq",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EXTRMIRRSELNHMIREQvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_EXTRMIRRSELNHMIREQvalue);
			WriteDatToCom("PA_ExtrMirrSelnHmiReq",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EXTRREVIEWMIRRDISPADJHMIREQvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_EXTRREVIEWMIRRDISPADJHMIREQvalue);
			WriteDatToCom("PA_ExtrReViewMirrDispAdjHmiReq",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EXTRREVIEWMIRRDISPRSTSETGvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_EXTRREVIEWMIRRDISPRSTSETGvalue);
			WriteDatToCom("PA_ExtrReViewMirrDispRstSetg",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SELECT_ERMD_ENTRANCEvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SELECT_ERMD_ENTRANCEvalue);
			WriteDatToCom("PA_Select_ERMD_Entrance",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ENTER_ERMD_ENTRANCEvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ENTER_ERMD_ENTRANCEvalue);
			WriteDatToCom("PA_Enter_ERMD_Entrance",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ENTER_ERMD_ADJUSTMENTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ENTER_ERMD_ADJUSTMENTvalue);
			WriteDatToCom("PA_Enter_ERMD_Adjustment",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SELECT_ERMD_ADJUSTMENTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SELECT_ERMD_ADJUSTMENTvalue);
			WriteDatToCom("PA_Select_ERMD_Adjustment",1, value);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
