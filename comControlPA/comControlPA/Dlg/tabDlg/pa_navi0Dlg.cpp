// pa_navi0Dlg.cpp : implementation file
//

// pa_navi0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_navi0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_navi0Dlg, CDialog)

pa_navi0Dlg::pa_navi0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_NAVI0, pParent)
{

}

pa_navi0Dlg::~pa_navi0Dlg()
{
}

void pa_navi0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_NAVIINOFactive, mCEditPA_NaviInofactive);
	DDX_Control(pDX, IDC_EDITPA_NAVIINOFmute, mCEditPA_NaviInofmute);
	DDX_Control(pDX, IDC_EDITPA_TBTINOFactive, mCEditPA_TBTInofactive);
	DDX_Control(pDX, IDC_EDITPA_TBTINOFprogress, mCEditPA_TBTInofprogress);
	DDX_Control(pDX, IDC_EDITPA_TBTINOFicon, mCEditPA_TBTInoficon);
	DDX_Control(pDX, IDC_EDITPA_TBTINOFdistance, mCEditPA_TBTInofdistance);
}


BEGIN_MESSAGE_MAP(pa_navi0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_navi0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_navi0Dlg message handlers
BOOL pa_navi0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_NAVIINOFactive)
			||GetFocus() == GetDlgItem(IDC_EDITPA_NAVIINOFmute)
			)
		{
				UpdateData(TRUE);
			UINT active = GetDlgItemInt(IDC_EDITPA_NAVIINOFactive);
			UINT mute = GetDlgItemInt(IDC_EDITPA_NAVIINOFmute);
			WriteDatToCom("PA_NaviInof",2, active, mute);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TBTINOFactive)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TBTINOFprogress)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TBTINOFicon)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TBTINOFdistance)
			)
		{
				UpdateData(TRUE);
			UINT active = GetDlgItemInt(IDC_EDITPA_TBTINOFactive);
			UINT progress = GetDlgItemInt(IDC_EDITPA_TBTINOFprogress);
			UINT icon = GetDlgItemInt(IDC_EDITPA_TBTINOFicon);
			UINT distance = GetDlgItemInt(IDC_EDITPA_TBTINOFdistance);
			WriteDatToCom("PA_TBTInof",4, active, progress, icon, distance);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
