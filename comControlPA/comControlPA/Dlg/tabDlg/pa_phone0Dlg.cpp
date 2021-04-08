// pa_phone0Dlg.cpp : implementation file
//

// pa_phone0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_phone0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_phone0Dlg, CDialog)

pa_phone0Dlg::pa_phone0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_PHONE0, pParent)
{

}

pa_phone0Dlg::~pa_phone0Dlg()
{
}

void pa_phone0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_PHONEINFOstate, mCEditPA_PhoneInfostate);
	DDX_Control(pDX, IDC_EDITPA_PHONEINFOmicrophoneMute, mCEditPA_PhoneInfomicrophoneMute);
	DDX_Control(pDX, IDC_EDITPA_PHONEINFOsoundMute, mCEditPA_PhoneInfosoundMute);
	DDX_Control(pDX, IDC_EDITPA_PHONEINFOtime, mCEditPA_PhoneInfotime);
}


BEGIN_MESSAGE_MAP(pa_phone0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_phone0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_phone0Dlg message handlers
BOOL pa_phone0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_PHONEINFOstate)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PHONEINFOmicrophoneMute)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PHONEINFOsoundMute)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PHONEINFOtime)
			)
		{
				UpdateData(TRUE);
			UINT state = GetDlgItemInt(IDC_EDITPA_PHONEINFOstate);
			UINT microphoneMute = GetDlgItemInt(IDC_EDITPA_PHONEINFOmicrophoneMute);
			UINT soundMute = GetDlgItemInt(IDC_EDITPA_PHONEINFOsoundMute);
			UINT time = GetDlgItemInt(IDC_EDITPA_PHONEINFOtime);
			WriteDatToCom("PA_PhoneInfo",4, state, microphoneMute, soundMute, time);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
