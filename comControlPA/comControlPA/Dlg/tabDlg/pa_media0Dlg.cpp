// pa_media0Dlg.cpp : implementation file
//

// pa_media0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_media0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_media0Dlg, CDialog)

pa_media0Dlg::pa_media0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_MEDIA0, pParent)
{

}

pa_media0Dlg::~pa_media0Dlg()
{
}

void pa_media0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_MEDIAINFOid, mCEditPA_MediaInfoid);
	DDX_Control(pDX, IDC_EDITPA_MEDIAINFOtype, mCEditPA_MediaInfotype);
	DDX_Control(pDX, IDC_EDITPA_MEDIAINFOplay, mCEditPA_MediaInfoplay);
	DDX_Control(pDX, IDC_EDITPA_MEDIAINFOmute, mCEditPA_MediaInfomute);
	DDX_Control(pDX, IDC_EDITPA_MEDIAVOLUMEvalue, mCEditPA_MediaVolumevalue);
	DDX_Control(pDX, IDC_EDITPA_MEDIALISTFOCUSITEMvalue, mCEditPA_MediaListFocusItemvalue);
}


BEGIN_MESSAGE_MAP(pa_media0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_media0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_media0Dlg message handlers
BOOL pa_media0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_MEDIAINFOid)
			||GetFocus() == GetDlgItem(IDC_EDITPA_MEDIAINFOtype)
			||GetFocus() == GetDlgItem(IDC_EDITPA_MEDIAINFOplay)
			||GetFocus() == GetDlgItem(IDC_EDITPA_MEDIAINFOmute)
			)
		{
				UpdateData(TRUE);
			UINT id = GetDlgItemInt(IDC_EDITPA_MEDIAINFOid);
			UINT type = GetDlgItemInt(IDC_EDITPA_MEDIAINFOtype);
			UINT play = GetDlgItemInt(IDC_EDITPA_MEDIAINFOplay);
			UINT mute = GetDlgItemInt(IDC_EDITPA_MEDIAINFOmute);
			WriteDatToCom("PA_MediaInfo",4, id, type, play, mute);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_MEDIAVOLUMEvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_MEDIAVOLUMEvalue);
			WriteDatToCom("PA_MediaVolume",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_MEDIALISTFOCUSITEMvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_MEDIALISTFOCUSITEMvalue);
			WriteDatToCom("PA_MediaListFocusItem",1, value);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
