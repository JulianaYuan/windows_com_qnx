// pa_telltale2Dlg.cpp : implementation file
//

// pa_telltale2Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_telltale2Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_telltale2Dlg, CDialog)

pa_telltale2Dlg::pa_telltale2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_TELLTALE2, pParent)
{

}

pa_telltale2Dlg::~pa_telltale2Dlg()
{
}

void pa_telltale2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_DRIVERvalue, mCEditPA_Seatbelt_Drivervalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_PASSENGERvalue, mCEditPA_Seatbelt_Passengervalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_MIDPASSENGERvalue, mCEditPA_Seatbelt_MidPassengervalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_SECLEFTvalue, mCEditPA_Seatbelt_SecLeftvalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_SECMIDvalue, mCEditPA_Seatbelt_SecMidvalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_SECRIGHTvalue, mCEditPA_Seatbelt_SecRightvalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_THRDLEFTvalue, mCEditPA_Seatbelt_ThrdLeftvalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_THRDMIDvalue, mCEditPA_Seatbelt_ThrdMidvalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_THRDRIGHTvalue, mCEditPA_Seatbelt_ThrdRightvalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_FRTHLEFTvalue, mCEditPA_Seatbelt_FrthLeftvalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_FRTHMIDvalue, mCEditPA_Seatbelt_FrthMidvalue);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_FRTHRIGHTvalue, mCEditPA_Seatbelt_FrthRightvalue);
	DDX_Control(pDX, IDC_EDITCPA_USGMODSTSavailability, mCEditCPA_UsgModStsavailability);
	DDX_Control(pDX, IDC_EDITCPA_USGMODSTSdata, mCEditCPA_UsgModStsdata);
	DDX_Control(pDX, IDC_EDITCPA_CARCONFIG8value, mCEditCPA_Carconfig8value);
	DDX_Control(pDX, IDC_EDITPA_SEATBELT_OUTPUTvalue, mCEditPA_Seatbelt_outputvalue);
}


BEGIN_MESSAGE_MAP(pa_telltale2Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_telltale2Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_telltale2Dlg message handlers
BOOL pa_telltale2Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_DRIVERvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_DRIVERvalue);
			WriteDatToCom("PA_Seatbelt_Driver",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_PASSENGERvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_PASSENGERvalue);
			WriteDatToCom("PA_Seatbelt_Passenger",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_MIDPASSENGERvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_MIDPASSENGERvalue);
			WriteDatToCom("PA_Seatbelt_MidPassenger",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_SECLEFTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_SECLEFTvalue);
			WriteDatToCom("PA_Seatbelt_SecLeft",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_SECMIDvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_SECMIDvalue);
			WriteDatToCom("PA_Seatbelt_SecMid",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_SECRIGHTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_SECRIGHTvalue);
			WriteDatToCom("PA_Seatbelt_SecRight",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_THRDLEFTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_THRDLEFTvalue);
			WriteDatToCom("PA_Seatbelt_ThrdLeft",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_THRDMIDvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_THRDMIDvalue);
			WriteDatToCom("PA_Seatbelt_ThrdMid",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_THRDRIGHTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_THRDRIGHTvalue);
			WriteDatToCom("PA_Seatbelt_ThrdRight",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_FRTHLEFTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_FRTHLEFTvalue);
			WriteDatToCom("PA_Seatbelt_FrthLeft",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_FRTHMIDvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_FRTHMIDvalue);
			WriteDatToCom("PA_Seatbelt_FrthMid",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_FRTHRIGHTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_FRTHRIGHTvalue);
			WriteDatToCom("PA_Seatbelt_FrthRight",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITCPA_USGMODSTSavailability)
			||GetFocus() == GetDlgItem(IDC_EDITCPA_USGMODSTSdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITCPA_USGMODSTSavailability);
			UINT data = GetDlgItemInt(IDC_EDITCPA_USGMODSTSdata);
			WriteDatToCom("CPA_UsgModSts",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITCPA_CARCONFIG8value)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITCPA_CARCONFIG8value);
			WriteDatToCom("CPA_Carconfig8",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELT_OUTPUTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SEATBELT_OUTPUTvalue);
			WriteDatToCom("PA_Seatbelt_output",1, value);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
