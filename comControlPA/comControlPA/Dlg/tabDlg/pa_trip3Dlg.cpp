// pa_trip3Dlg.cpp : implementation file
//

// pa_trip3Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_trip3Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_trip3Dlg, CDialog)

pa_trip3Dlg::pa_trip3Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_TRIP3, pParent)
{

}

pa_trip3Dlg::~pa_trip3Dlg()
{
}

void pa_trip3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_HDCTARGETSPEEDdata, mCEditPA_HDCTargetSpeeddata);
	DDX_Control(pDX, IDC_EDITPA_HDCTARGETSPEEDvalue, mCEditPA_HDCTargetSpeedvalue);
	DDX_Control(pDX, IDC_EDITPA_HDCTARGETSPEEDreserve, mCEditPA_HDCTargetSpeedreserve);
	DDX_Control(pDX, IDC_EDITPA_HDCTARGETSPEEDavailability, mCEditPA_HDCTargetSpeedavailability);
	DDX_Control(pDX, IDC_EDITPA_DOW_WARNINGFLASHdata, mCEditPA_DOW_WarningFlashdata);
	DDX_Control(pDX, IDC_EDITPA_DOW_WARNINGFLASHavailability, mCEditPA_DOW_WarningFlashavailability);
	DDX_Control(pDX, IDC_EDITPA_ENERGYREGENERATIVELEVELdata, mCEditPA_EnergyRegenerativeLeveldata);
	DDX_Control(pDX, IDC_EDITPA_ENERGYREGENERATIVELEVELavailability, mCEditPA_EnergyRegenerativeLevelavailability);
	DDX_Control(pDX, IDC_EDITPA_HMITRIP_VIEWvalue, mCEditPA_HMITrip_Viewvalue);
}


BEGIN_MESSAGE_MAP(pa_trip3Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_trip3Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_trip3Dlg message handlers
BOOL pa_trip3Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_HDCTARGETSPEEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_HDCTARGETSPEEDvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_HDCTARGETSPEEDreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_HDCTARGETSPEEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_HDCTARGETSPEEDdata);
			UINT value = GetDlgItemInt(IDC_EDITPA_HDCTARGETSPEEDvalue);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_HDCTARGETSPEEDreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_HDCTARGETSPEEDavailability);
			WriteDatToCom("PA_HDCTargetSpeed",4, data, value, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DOW_WARNINGFLASHdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DOW_WARNINGFLASHavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DOW_WARNINGFLASHdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DOW_WARNINGFLASHavailability);
			WriteDatToCom("PA_DOW_WarningFlash",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ENERGYREGENERATIVELEVELdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ENERGYREGENERATIVELEVELavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ENERGYREGENERATIVELEVELdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ENERGYREGENERATIVELEVELavailability);
			WriteDatToCom("PA_EnergyRegenerativeLevel",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_HMITRIP_VIEWvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_HMITRIP_VIEWvalue);
			WriteDatToCom("PA_HMITrip_View",1, value);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
