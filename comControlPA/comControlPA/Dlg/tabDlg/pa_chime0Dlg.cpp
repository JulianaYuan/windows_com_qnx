// pa_chime0Dlg.cpp : implementation file
//

// pa_chime0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_chime0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_chime0Dlg, CDialog)

pa_chime0Dlg::pa_chime0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_CHIME0, pParent)
{

}

pa_chime0Dlg::~pa_chime0Dlg()
{
}

void pa_chime0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_CHIMEREQSoundID, mCEditPA_ChimeReqSoundID);
	DDX_Control(pDX, IDC_EDITPA_CHIMEREQStatus, mCEditPA_ChimeReqStatus);
	DDX_Control(pDX, IDC_EDITPA_CHIMEACTSoundID, mCEditPA_ChimeActSoundID);
	DDX_Control(pDX, IDC_EDITPA_CHIMEACTStatus, mCEditPA_ChimeActStatus);
}


BEGIN_MESSAGE_MAP(pa_chime0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_chime0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_chime0Dlg message handlers
BOOL pa_chime0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CHIMEREQSoundID)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CHIMEREQStatus)
			)
		{
				UpdateData(TRUE);
			UINT SoundID = GetDlgItemInt(IDC_EDITPA_CHIMEREQSoundID);
			UINT Status = GetDlgItemInt(IDC_EDITPA_CHIMEREQStatus);
			WriteDatToCom("PA_ChimeReq",2, SoundID, Status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CHIMEACTSoundID)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CHIMEACTStatus)
			)
		{
				UpdateData(TRUE);
			UINT SoundID = GetDlgItemInt(IDC_EDITPA_CHIMEACTSoundID);
			UINT Status = GetDlgItemInt(IDC_EDITPA_CHIMEACTStatus);
			WriteDatToCom("PA_ChimeAct",2, SoundID, Status);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
