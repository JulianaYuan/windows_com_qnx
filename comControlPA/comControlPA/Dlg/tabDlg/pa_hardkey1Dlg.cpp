// pa_hardkey1Dlg.cpp : implementation file
//

// pa_hardkey1Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_hardkey1Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_hardkey1Dlg, CDialog)

pa_hardkey1Dlg::pa_hardkey1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_HARDKEY1, pParent)
{

}

pa_hardkey1Dlg::~pa_hardkey1Dlg()
{
}

void pa_hardkey1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_STEERPOSNADJMTCTRLvalue, mCEditPA_SteerPosnAdjmtCtrlvalue);
	DDX_Control(pDX, IDC_EDITPA_HMI_VIBRATIONFBTOSWTPtype, mCEditPA_HMI_VibrationFbToSwtptype);
	DDX_Control(pDX, IDC_EDITPA_HMI_VIBRATIONFBTOSWTPdata, mCEditPA_HMI_VibrationFbToSwtpdata);
	DDX_Control(pDX, IDC_EDITPA_RITOPREQvalue, mCEditPA_RiTopReqvalue);
	DDX_Control(pDX, IDC_EDITPA_RIDOWNREQvalue, mCEditPA_RiDownReqvalue);
	DDX_Control(pDX, IDC_EDITPA_RILEFTREQvalue, mCEditPA_RiLeftReqvalue);
	DDX_Control(pDX, IDC_EDITPA_RIRIGHTREQvalue, mCEditPA_RiRightReqvalue);
	DDX_Control(pDX, IDC_EDITPA_BTNCONFIREQvalue, mCEditPA_BtnConfiReqvalue);
	DDX_Control(pDX, IDC_EDITPA_STEERADJSWTUPSTSvalue, mCEditPA_SteerAdjSwtUpStsvalue);
	DDX_Control(pDX, IDC_EDITPA_STEERADJSWTDWNSTSvalue, mCEditPA_SteerAdjSwtDwnStsvalue);
	DDX_Control(pDX, IDC_EDITPA_STEERADJSWTFWDSTSvalue, mCEditPA_SteerAdjSwtFwdStsvalue);
	DDX_Control(pDX, IDC_EDITPA_STEERADJSWTBACKSTSvalue, mCEditPA_SteerAdjSwtBackStsvalue);
}


BEGIN_MESSAGE_MAP(pa_hardkey1Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_hardkey1Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_hardkey1Dlg message handlers
BOOL pa_hardkey1Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_STEERPOSNADJMTCTRLvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_STEERPOSNADJMTCTRLvalue);
			WriteDatToCom("PA_SteerPosnAdjmtCtrl",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_HMI_VIBRATIONFBTOSWTPtype)
			||GetFocus() == GetDlgItem(IDC_EDITPA_HMI_VIBRATIONFBTOSWTPdata)
			)
		{
				UpdateData(TRUE);
			UINT type = GetDlgItemInt(IDC_EDITPA_HMI_VIBRATIONFBTOSWTPtype);
			UINT data = GetDlgItemInt(IDC_EDITPA_HMI_VIBRATIONFBTOSWTPdata);
			WriteDatToCom("PA_HMI_VibrationFbToSwtp",2, type, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RITOPREQvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_RITOPREQvalue);
			WriteDatToCom("PA_RiTopReq",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIDOWNREQvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIDOWNREQvalue);
			WriteDatToCom("PA_RiDownReq",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RILEFTREQvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_RILEFTREQvalue);
			WriteDatToCom("PA_RiLeftReq",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRIGHTREQvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIRIGHTREQvalue);
			WriteDatToCom("PA_RiRightReq",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BTNCONFIREQvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_BTNCONFIREQvalue);
			WriteDatToCom("PA_BtnConfiReq",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_STEERADJSWTUPSTSvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_STEERADJSWTUPSTSvalue);
			WriteDatToCom("PA_SteerAdjSwtUpSts",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_STEERADJSWTDWNSTSvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_STEERADJSWTDWNSTSvalue);
			WriteDatToCom("PA_SteerAdjSwtDwnSts",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_STEERADJSWTFWDSTSvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_STEERADJSWTFWDSTSvalue);
			WriteDatToCom("PA_SteerAdjSwtFwdSts",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_STEERADJSWTBACKSTSvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_STEERADJSWTBACKSTSvalue);
			WriteDatToCom("PA_SteerAdjSwtBackSts",1, value);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
