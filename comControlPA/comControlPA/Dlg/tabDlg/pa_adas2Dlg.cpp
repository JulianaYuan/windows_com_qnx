// pa_adas2Dlg.cpp : implementation file
//

// pa_adas2Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_adas2Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_adas2Dlg, CDialog)

pa_adas2Dlg::pa_adas2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_ADAS2, pParent)
{

}

pa_adas2Dlg::~pa_adas2Dlg()
{
}

void pa_adas2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_BOUNDARYWARNstatus, mCEditPA_BoundaryWarnstatus);
	DDX_Control(pDX, IDC_EDITPA_BOUNDARYWARNavailability, mCEditPA_BoundaryWarnavailability);
	DDX_Control(pDX, IDC_EDITPA_ADAS_TUNNELdata, mCEditPA_ADAS_Tunneldata);
	DDX_Control(pDX, IDC_EDITPA_ADAS_TUNNELstatus, mCEditPA_ADAS_Tunnelstatus);
	DDX_Control(pDX, IDC_EDITPA_ADAS_TUNNELreserve, mCEditPA_ADAS_Tunnelreserve);
	DDX_Control(pDX, IDC_EDITPA_ADAS_TUNNELavailability, mCEditPA_ADAS_Tunnelavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFT_LINE_ANIMATIONstatus, mCEditPA_Left_line_animationstatus);
	DDX_Control(pDX, IDC_EDITPA_LEFT_LINE_ANIMATIONcolor, mCEditPA_Left_line_animationcolor);
	DDX_Control(pDX, IDC_EDITPA_LEFT_LINE_ANIMATIONavailability, mCEditPA_Left_line_animationavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHT_LINE_ANIMATIONstatus, mCEditPA_Right_line_animationstatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHT_LINE_ANIMATIONcolor, mCEditPA_Right_line_animationcolor);
	DDX_Control(pDX, IDC_EDITPA_RIGHT_LINE_ANIMATIONavailability, mCEditPA_Right_line_animationavailability);
	DDX_Control(pDX, IDC_EDITPA_ADAS_ODDstatus, mCEditPA_ADAS_ODDstatus);
	DDX_Control(pDX, IDC_EDITPA_ADAS_ODDavailability, mCEditPA_ADAS_ODDavailability);
	DDX_Control(pDX, IDC_EDITPA_LANECHANGEstatus, mCEditPA_LaneChangestatus);
	DDX_Control(pDX, IDC_EDITPA_LANECHANGEavailability, mCEditPA_LaneChangeavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_TIMEGAPdata, mCEditPA_Gpilot_TimeGapdata);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_TIMEGAPformat, mCEditPA_Gpilot_TimeGapformat);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_TIMEGAPstatus, mCEditPA_Gpilot_TimeGapstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_TIMEGAPavailability, mCEditPA_Gpilot_TimeGapavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_ADJUSTTIMEGAPstatus, mCEditPA_Gpilot_AdjustTimeGapstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_ADJUSTTIMEGAPavailability, mCEditPA_Gpilot_AdjustTimeGapavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_SETSPEEDstatus, mCEditPA_Gpilot_SetSpeedstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_SETSPEEDdata, mCEditPA_Gpilot_SetSpeeddata);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_SETSPEEDtype, mCEditPA_Gpilot_SetSpeedtype);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_SETSPEEDformat, mCEditPA_Gpilot_SetSpeedformat);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_SETSPEEDreserve, mCEditPA_Gpilot_SetSpeedreserve);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_SETSPEEDavailability, mCEditPA_Gpilot_SetSpeedavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_TARGETBARdata, mCEditPA_Gpilot_TargetBardata);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_TARGETBARstatus, mCEditPA_Gpilot_TargetBarstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_TARGETBARavailability, mCEditPA_Gpilot_TargetBaravailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_ADJUSTSETSPEEDstatus, mCEditPA_Gpilot_AdjustSetSpeedstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_ADJUSTSETSPEEDavailability, mCEditPA_Gpilot_AdjustSetSpeedavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_DIMLIGHTstatus, mCEditPA_Gpilot_DIMLightstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_DIMLIGHTavailability, mCEditPA_Gpilot_DIMLightavailability);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUdata, mCEditPA_SCFunction_Menudata);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUtype, mCEditPA_SCFunction_Menutype);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUstatus, mCEditPA_SCFunction_Menustatus);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUreserve, mCEditPA_SCFunction_Menureserve);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUavailability, mCEditPA_SCFunction_Menuavailability);
	DDX_Control(pDX, IDC_EDITPA_CALLBACK_SCFUNCTIONvalue, mCEditPA_Callback_SCFunctionvalue);
	DDX_Control(pDX, IDC_EDITPA_INTERNAL_SCFUNCTIONMODEvalue, mCEditPA_Internal_SCFunctionModevalue);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUCONFIGCC, mCEditPA_SCFunction_MenuConfigCC);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUCONFIGASL, mCEditPA_SCFunction_MenuConfigASL);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUCONFIGACC, mCEditPA_SCFunction_MenuConfigACC);
	DDX_Control(pDX, IDC_EDITPA_SCFUNCTION_MENUCONFIGGPilot, mCEditPA_SCFunction_MenuConfigGPilot);
	DDX_Control(pDX, IDC_EDITPA_CALLBACK_ADJUSTMENUvalue, mCEditPA_Callback_AdjustMenuvalue);
	DDX_Control(pDX, IDC_EDITPA_ADAS_CURSOR_POSITIONvalue, mCEditPA_ADAS_Cursor_Positionvalue);
}


BEGIN_MESSAGE_MAP(pa_adas2Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_adas2Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_adas2Dlg message handlers
BOOL pa_adas2Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BOUNDARYWARNstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BOUNDARYWARNavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_BOUNDARYWARNstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BOUNDARYWARNavailability);
			WriteDatToCom("PA_BoundaryWarn",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ADAS_TUNNELdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ADAS_TUNNELstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ADAS_TUNNELreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ADAS_TUNNELavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ADAS_TUNNELdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_ADAS_TUNNELstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_ADAS_TUNNELreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ADAS_TUNNELavailability);
			WriteDatToCom("PA_ADAS_Tunnel",4, data, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFT_LINE_ANIMATIONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFT_LINE_ANIMATIONcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFT_LINE_ANIMATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFT_LINE_ANIMATIONstatus);
			UINT color = GetDlgItemInt(IDC_EDITPA_LEFT_LINE_ANIMATIONcolor);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFT_LINE_ANIMATIONavailability);
			WriteDatToCom("PA_Left_line_animation",3, status, color, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHT_LINE_ANIMATIONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHT_LINE_ANIMATIONcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHT_LINE_ANIMATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHT_LINE_ANIMATIONstatus);
			UINT color = GetDlgItemInt(IDC_EDITPA_RIGHT_LINE_ANIMATIONcolor);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHT_LINE_ANIMATIONavailability);
			WriteDatToCom("PA_Right_line_animation",3, status, color, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ADAS_ODDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ADAS_ODDavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_ADAS_ODDstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ADAS_ODDavailability);
			WriteDatToCom("PA_ADAS_ODD",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LANECHANGEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LANECHANGEavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LANECHANGEstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LANECHANGEavailability);
			WriteDatToCom("PA_LaneChange",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_TIMEGAPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_TIMEGAPformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_TIMEGAPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_TIMEGAPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_GPILOT_TIMEGAPdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_GPILOT_TIMEGAPformat);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_TIMEGAPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_TIMEGAPavailability);
			WriteDatToCom("PA_Gpilot_TimeGap",4, data, format, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_ADJUSTTIMEGAPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_ADJUSTTIMEGAPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_ADJUSTTIMEGAPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_ADJUSTTIMEGAPavailability);
			WriteDatToCom("PA_Gpilot_AdjustTimeGap",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_SETSPEEDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_SETSPEEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_SETSPEEDtype)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_SETSPEEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_SETSPEEDreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_SETSPEEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_SETSPEEDstatus);
			UINT data = GetDlgItemInt(IDC_EDITPA_GPILOT_SETSPEEDdata);
			UINT type = GetDlgItemInt(IDC_EDITPA_GPILOT_SETSPEEDtype);
			UINT format = GetDlgItemInt(IDC_EDITPA_GPILOT_SETSPEEDformat);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_GPILOT_SETSPEEDreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_SETSPEEDavailability);
			WriteDatToCom("PA_Gpilot_SetSpeed",6, status, data, type, format, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_TARGETBARdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_TARGETBARstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_TARGETBARavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_GPILOT_TARGETBARdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_TARGETBARstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_TARGETBARavailability);
			WriteDatToCom("PA_Gpilot_TargetBar",3, data, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_ADJUSTSETSPEEDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_ADJUSTSETSPEEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_ADJUSTSETSPEEDstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_ADJUSTSETSPEEDavailability);
			WriteDatToCom("PA_Gpilot_AdjustSetSpeed",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_DIMLIGHTstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_DIMLIGHTavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_DIMLIGHTstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_DIMLIGHTavailability);
			WriteDatToCom("PA_Gpilot_DIMLight",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUtype)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUdata);
			UINT type = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUtype);
			UINT status = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUavailability);
			WriteDatToCom("PA_SCFunction_Menu",5, data, type, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CALLBACK_SCFUNCTIONvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_CALLBACK_SCFUNCTIONvalue);
			WriteDatToCom("PA_Callback_SCFunction",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_INTERNAL_SCFUNCTIONMODEvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_INTERNAL_SCFUNCTIONMODEvalue);
			WriteDatToCom("PA_Internal_SCFunctionMode",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUCONFIGCC)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUCONFIGASL)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUCONFIGACC)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SCFUNCTION_MENUCONFIGGPilot)
			)
		{
				UpdateData(TRUE);
			UINT CC = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUCONFIGCC);
			UINT ASL = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUCONFIGASL);
			UINT ACC = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUCONFIGACC);
			UINT GPilot = GetDlgItemInt(IDC_EDITPA_SCFUNCTION_MENUCONFIGGPilot);
			WriteDatToCom("PA_SCFunction_MenuConfig",4, CC, ASL, ACC, GPilot);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CALLBACK_ADJUSTMENUvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_CALLBACK_ADJUSTMENUvalue);
			WriteDatToCom("PA_Callback_AdjustMenu",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ADAS_CURSOR_POSITIONvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ADAS_CURSOR_POSITIONvalue);
			WriteDatToCom("PA_ADAS_Cursor_Position",1, value);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
