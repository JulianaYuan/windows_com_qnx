// pa_dvr0Dlg.cpp : implementation file
//

// pa_dvr0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_dvr0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_dvr0Dlg, CDialog)

pa_dvr0Dlg::pa_dvr0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_DVR0, pParent)
{

}

pa_dvr0Dlg::~pa_dvr0Dlg()
{
}

void pa_dvr0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(pa_dvr0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_dvr0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_dvr0Dlg message handlers
BOOL pa_dvr0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
