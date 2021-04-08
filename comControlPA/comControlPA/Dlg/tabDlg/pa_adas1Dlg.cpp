// pa_adas1Dlg.cpp : implementation file
//

// pa_adas1Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_adas1Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_adas1Dlg, CDialog)

pa_adas1Dlg::pa_adas1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_ADAS1, pParent)
{

}

pa_adas1Dlg::~pa_adas1Dlg()
{
}

void pa_adas1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_ACC_ADJUSTTIMEGAPstatus, mCEditPA_ACC_AdjustTimeGapstatus);
	DDX_Control(pDX, IDC_EDITPA_ACC_ADJUSTTIMEGAPavailability, mCEditPA_ACC_AdjustTimeGapavailability);
	DDX_Control(pDX, IDC_EDITPS_ACC_TARGETBARdata, mCEditPS_ACC_TargetBardata);
	DDX_Control(pDX, IDC_EDITPS_ACC_TARGETBARstatus, mCEditPS_ACC_TargetBarstatus);
	DDX_Control(pDX, IDC_EDITPS_ACC_TARGETBARavailability, mCEditPS_ACC_TargetBaravailability);
	DDX_Control(pDX, IDC_EDITPA_ACC_SETSPEEDstatus, mCEditPA_ACC_SetSpeedstatus);
	DDX_Control(pDX, IDC_EDITPA_ACC_SETSPEEDdata, mCEditPA_ACC_SetSpeeddata);
	DDX_Control(pDX, IDC_EDITPA_ACC_SETSPEEDtype, mCEditPA_ACC_SetSpeedtype);
	DDX_Control(pDX, IDC_EDITPA_ACC_SETSPEEDformat, mCEditPA_ACC_SetSpeedformat);
	DDX_Control(pDX, IDC_EDITPA_ACC_SETSPEEDreserve, mCEditPA_ACC_SetSpeedreserve);
	DDX_Control(pDX, IDC_EDITPA_ACC_SETSPEEDavailability, mCEditPA_ACC_SetSpeedavailability);
	DDX_Control(pDX, IDC_EDITPA_ACC_ADJUSTSETSPEEDstatus, mCEditPA_ACC_AdjustSetSpeedstatus);
	DDX_Control(pDX, IDC_EDITPA_ACC_ADJUSTSETSPEEDavailability, mCEditPA_ACC_AdjustSetSpeedavailability);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ1Dx, mCEditPA_ACC_FrontObj1Dx);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ1Dy, mCEditPA_ACC_FrontObj1Dy);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ1color, mCEditPA_ACC_FrontObj1color);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ1heading, mCEditPA_ACC_FrontObj1heading);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ1status, mCEditPA_ACC_FrontObj1status);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ1reserve, mCEditPA_ACC_FrontObj1reserve);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ1availability, mCEditPA_ACC_FrontObj1availability);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ2Dx, mCEditPA_ACC_FrontObj2Dx);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ2Dy, mCEditPA_ACC_FrontObj2Dy);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ2color, mCEditPA_ACC_FrontObj2color);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ2heading, mCEditPA_ACC_FrontObj2heading);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ2status, mCEditPA_ACC_FrontObj2status);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ2reserve, mCEditPA_ACC_FrontObj2reserve);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRONTOBJ2availability, mCEditPA_ACC_FrontObj2availability);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTLEOBJDx, mCEditPA_ACC_FrntLeObjDx);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTLEOBJDy, mCEditPA_ACC_FrntLeObjDy);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTLEOBJcolor, mCEditPA_ACC_FrntLeObjcolor);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTLEOBJheading, mCEditPA_ACC_FrntLeObjheading);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTLEOBJstatus, mCEditPA_ACC_FrntLeObjstatus);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTLEOBJreserve, mCEditPA_ACC_FrntLeObjreserve);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTLEOBJavailability, mCEditPA_ACC_FrntLeObjavailability);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTRIOBJDx, mCEditPA_ACC_FrntRiObjDx);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTRIOBJDy, mCEditPA_ACC_FrntRiObjDy);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTRIOBJcolor, mCEditPA_ACC_FrntRiObjcolor);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTRIOBJheading, mCEditPA_ACC_FrntRiObjheading);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTRIOBJstatus, mCEditPA_ACC_FrntRiObjstatus);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTRIOBJreserve, mCEditPA_ACC_FrntRiObjreserve);
	DDX_Control(pDX, IDC_EDITPA_ACC_FRNTRIOBJavailability, mCEditPA_ACC_FrntRiObjavailability);
	DDX_Control(pDX, IDC_EDITPA_SC_OVERRIDEstatus, mCEditPA_SC_Overridestatus);
	DDX_Control(pDX, IDC_EDITPA_SC_OVERRIDEdata, mCEditPA_SC_Overridedata);
	DDX_Control(pDX, IDC_EDITPA_SC_OVERRIDEformat, mCEditPA_SC_Overrideformat);
	DDX_Control(pDX, IDC_EDITPA_SC_OVERRIDEavailability, mCEditPA_SC_Overrideavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOTSTATUS_LAMPstatus, mCEditPA_GpilotStatus_Lampstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOTSTATUS_LAMPavailability, mCEditPA_GpilotStatus_Lampavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOTHANDOFF_LAMPstatus, mCEditPA_GpilotHandOff_Lampstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOTHANDOFF_LAMPavailability, mCEditPA_GpilotHandOff_Lampavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ1Dx, mCEditPA_Gpilot_FrntObj1Dx);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ1Dy, mCEditPA_Gpilot_FrntObj1Dy);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ1color, mCEditPA_Gpilot_FrntObj1color);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ1heading, mCEditPA_Gpilot_FrntObj1heading);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ1status, mCEditPA_Gpilot_FrntObj1status);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ1reserve, mCEditPA_Gpilot_FrntObj1reserve);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ1availability, mCEditPA_Gpilot_FrntObj1availability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ2Dx, mCEditPA_Gpilot_FrntObj2Dx);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ2Dy, mCEditPA_Gpilot_FrntObj2Dy);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ2color, mCEditPA_Gpilot_FrntObj2color);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ2heading, mCEditPA_Gpilot_FrntObj2heading);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ2status, mCEditPA_Gpilot_FrntObj2status);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ2reserve, mCEditPA_Gpilot_FrntObj2reserve);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTOBJ2availability, mCEditPA_Gpilot_FrntObj2availability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJDx, mCEditPA_Gpilot_FrntLeObjDx);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJDy, mCEditPA_Gpilot_FrntLeObjDy);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJcolor, mCEditPA_Gpilot_FrntLeObjcolor);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJheading, mCEditPA_Gpilot_FrntLeObjheading);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJstatus, mCEditPA_Gpilot_FrntLeObjstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJreserve, mCEditPA_Gpilot_FrntLeObjreserve);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJavailability, mCEditPA_Gpilot_FrntLeObjavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJ2Dx, mCEditPA_Gpilot_FrntLeObj2Dx);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJ2Dy, mCEditPA_Gpilot_FrntLeObj2Dy);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJ2color, mCEditPA_Gpilot_FrntLeObj2color);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJ2heading, mCEditPA_Gpilot_FrntLeObj2heading);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJ2status, mCEditPA_Gpilot_FrntLeObj2status);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJ2reserve, mCEditPA_Gpilot_FrntLeObj2reserve);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTLEOBJ2availability, mCEditPA_Gpilot_FrntLeObj2availability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJDx, mCEditPA_Gpilot_FrntRiObjDx);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJDy, mCEditPA_Gpilot_FrntRiObjDy);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJcolor, mCEditPA_Gpilot_FrntRiObjcolor);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJheading, mCEditPA_Gpilot_FrntRiObjheading);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJstatus, mCEditPA_Gpilot_FrntRiObjstatus);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJreserve, mCEditPA_Gpilot_FrntRiObjreserve);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJavailability, mCEditPA_Gpilot_FrntRiObjavailability);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJ2Dx, mCEditPA_Gpilot_FrntRiObj2Dx);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJ2Dy, mCEditPA_Gpilot_FrntRiObj2Dy);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJ2color, mCEditPA_Gpilot_FrntRiObj2color);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJ2heading, mCEditPA_Gpilot_FrntRiObj2heading);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJ2status, mCEditPA_Gpilot_FrntRiObj2status);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJ2reserve, mCEditPA_Gpilot_FrntRiObj2reserve);
	DDX_Control(pDX, IDC_EDITPA_GPILOT_FRNTRIOBJ2availability, mCEditPA_Gpilot_FrntRiObj2availability);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINERAMPdata, mCEditPA_LeftLineRampdata);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINERAMPstatus, mCEditPA_LeftLineRampstatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINERAMPreserve, mCEditPA_LeftLineRampreserve);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINERAMPavailability, mCEditPA_LeftLineRampavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFT2LINERAMPdata, mCEditPA_Left2LineRampdata);
	DDX_Control(pDX, IDC_EDITPA_LEFT2LINERAMPstatus, mCEditPA_Left2LineRampstatus);
	DDX_Control(pDX, IDC_EDITPA_LEFT2LINERAMPreserve, mCEditPA_Left2LineRampreserve);
	DDX_Control(pDX, IDC_EDITPA_LEFT2LINERAMPavailability, mCEditPA_Left2LineRampavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINERAMPdata, mCEditPA_RightLineRampdata);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINERAMPstatus, mCEditPA_RightLineRampstatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINERAMPreserve, mCEditPA_RightLineRampreserve);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINERAMPavailability, mCEditPA_RightLineRampavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHT2LINERAMPdata, mCEditPA_Right2LineRampdata);
	DDX_Control(pDX, IDC_EDITPA_RIGHT2LINERAMPstatus, mCEditPA_Right2LineRampstatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHT2LINERAMPreserve, mCEditPA_Right2LineRampreserve);
	DDX_Control(pDX, IDC_EDITPA_RIGHT2LINERAMPavailability, mCEditPA_Right2LineRampavailability);
	DDX_Control(pDX, IDC_EDITPA_SELFLANEdata, mCEditPA_SelfLanedata);
	DDX_Control(pDX, IDC_EDITPA_SELFLANEstatus, mCEditPA_SelfLanestatus);
	DDX_Control(pDX, IDC_EDITPA_SELFLANEreserve, mCEditPA_SelfLanereserve);
	DDX_Control(pDX, IDC_EDITPA_SELFLANEavailability, mCEditPA_SelfLaneavailability);
}


BEGIN_MESSAGE_MAP(pa_adas1Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_adas1Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_adas1Dlg message handlers
BOOL pa_adas1Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_ADJUSTTIMEGAPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_ADJUSTTIMEGAPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_ADJUSTTIMEGAPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_ADJUSTTIMEGAPavailability);
			WriteDatToCom("PA_ACC_AdjustTimeGap",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPS_ACC_TARGETBARdata)
			||GetFocus() == GetDlgItem(IDC_EDITPS_ACC_TARGETBARstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPS_ACC_TARGETBARavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPS_ACC_TARGETBARdata);
			UINT status = GetDlgItemInt(IDC_EDITPS_ACC_TARGETBARstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPS_ACC_TARGETBARavailability);
			WriteDatToCom("PS_ACC_TargetBar",3, data, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_SETSPEEDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_SETSPEEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_SETSPEEDtype)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_SETSPEEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_SETSPEEDreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_SETSPEEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_SETSPEEDstatus);
			UINT data = GetDlgItemInt(IDC_EDITPA_ACC_SETSPEEDdata);
			UINT type = GetDlgItemInt(IDC_EDITPA_ACC_SETSPEEDtype);
			UINT format = GetDlgItemInt(IDC_EDITPA_ACC_SETSPEEDformat);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_ACC_SETSPEEDreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_SETSPEEDavailability);
			WriteDatToCom("PA_ACC_SetSpeed",6, status, data, type, format, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_ADJUSTSETSPEEDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_ADJUSTSETSPEEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_ADJUSTSETSPEEDstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_ADJUSTSETSPEEDavailability);
			WriteDatToCom("PA_ACC_AdjustSetSpeed",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ1Dx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ1Dy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ1color)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ1heading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ1status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ1reserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ1availability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ1Dx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ1Dy);
			UINT color = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ1color);
			UINT heading = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ1heading);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ1status);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ1reserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ1availability);
			WriteDatToCom("PA_ACC_FrontObj1",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ2Dx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ2Dy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ2color)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ2heading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ2status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ2reserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRONTOBJ2availability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ2Dx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ2Dy);
			UINT color = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ2color);
			UINT heading = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ2heading);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ2status);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ2reserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_FRONTOBJ2availability);
			WriteDatToCom("PA_ACC_FrontObj2",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTLEOBJDx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTLEOBJDy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTLEOBJcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTLEOBJheading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTLEOBJstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTLEOBJreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTLEOBJavailability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_ACC_FRNTLEOBJDx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_ACC_FRNTLEOBJDy);
			UINT color = GetDlgItemInt(IDC_EDITPA_ACC_FRNTLEOBJcolor);
			UINT heading = GetDlgItemInt(IDC_EDITPA_ACC_FRNTLEOBJheading);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_FRNTLEOBJstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_ACC_FRNTLEOBJreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_FRNTLEOBJavailability);
			WriteDatToCom("PA_ACC_FrntLeObj",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTRIOBJDx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTRIOBJDy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTRIOBJcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTRIOBJheading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTRIOBJstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTRIOBJreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_FRNTRIOBJavailability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_ACC_FRNTRIOBJDx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_ACC_FRNTRIOBJDy);
			UINT color = GetDlgItemInt(IDC_EDITPA_ACC_FRNTRIOBJcolor);
			UINT heading = GetDlgItemInt(IDC_EDITPA_ACC_FRNTRIOBJheading);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_FRNTRIOBJstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_ACC_FRNTRIOBJreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_FRNTRIOBJavailability);
			WriteDatToCom("PA_ACC_FrntRiObj",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SC_OVERRIDEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SC_OVERRIDEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SC_OVERRIDEformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SC_OVERRIDEavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_SC_OVERRIDEstatus);
			UINT data = GetDlgItemInt(IDC_EDITPA_SC_OVERRIDEdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_SC_OVERRIDEformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SC_OVERRIDEavailability);
			WriteDatToCom("PA_SC_Override",4, status, data, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOTSTATUS_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOTSTATUS_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOTSTATUS_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOTSTATUS_LAMPavailability);
			WriteDatToCom("PA_GpilotStatus_Lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOTHANDOFF_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOTHANDOFF_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOTHANDOFF_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOTHANDOFF_LAMPavailability);
			WriteDatToCom("PA_GpilotHandOff_Lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ1Dx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ1Dy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ1color)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ1heading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ1status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ1reserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ1availability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ1Dx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ1Dy);
			UINT color = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ1color);
			UINT heading = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ1heading);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ1status);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ1reserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ1availability);
			WriteDatToCom("PA_Gpilot_FrntObj1",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ2Dx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ2Dy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ2color)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ2heading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ2status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ2reserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTOBJ2availability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ2Dx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ2Dy);
			UINT color = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ2color);
			UINT heading = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ2heading);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ2status);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ2reserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTOBJ2availability);
			WriteDatToCom("PA_Gpilot_FrntObj2",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJDx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJDy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJheading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJavailability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJDx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJDy);
			UINT color = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJcolor);
			UINT heading = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJheading);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJavailability);
			WriteDatToCom("PA_Gpilot_FrntLeObj",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJ2Dx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJ2Dy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJ2color)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJ2heading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJ2status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJ2reserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTLEOBJ2availability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJ2Dx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJ2Dy);
			UINT color = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJ2color);
			UINT heading = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJ2heading);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJ2status);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJ2reserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTLEOBJ2availability);
			WriteDatToCom("PA_Gpilot_FrntLeObj2",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJDx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJDy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJheading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJavailability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJDx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJDy);
			UINT color = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJcolor);
			UINT heading = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJheading);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJavailability);
			WriteDatToCom("PA_Gpilot_FrntRiObj",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJ2Dx)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJ2Dy)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJ2color)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJ2heading)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJ2status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJ2reserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GPILOT_FRNTRIOBJ2availability)
			)
		{
				UpdateData(TRUE);
			UINT Dx = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJ2Dx);
			UINT Dy = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJ2Dy);
			UINT color = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJ2color);
			UINT heading = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJ2heading);
			UINT status = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJ2status);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJ2reserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_GPILOT_FRNTRIOBJ2availability);
			WriteDatToCom("PA_Gpilot_FrntRiObj2",7, Dx, Dy, color, heading, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINERAMPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINERAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINERAMPreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINERAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFTLINERAMPdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTLINERAMPstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_LEFTLINERAMPreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTLINERAMPavailability);
			WriteDatToCom("PA_LeftLineRamp",4, data, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFT2LINERAMPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFT2LINERAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFT2LINERAMPreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFT2LINERAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFT2LINERAMPdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFT2LINERAMPstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_LEFT2LINERAMPreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFT2LINERAMPavailability);
			WriteDatToCom("PA_Left2LineRamp",4, data, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINERAMPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINERAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINERAMPreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINERAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIGHTLINERAMPdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTLINERAMPstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_RIGHTLINERAMPreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTLINERAMPavailability);
			WriteDatToCom("PA_RightLineRamp",4, data, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHT2LINERAMPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHT2LINERAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHT2LINERAMPreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHT2LINERAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIGHT2LINERAMPdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHT2LINERAMPstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_RIGHT2LINERAMPreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHT2LINERAMPavailability);
			WriteDatToCom("PA_Right2LineRamp",4, data, status, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SELFLANEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SELFLANEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SELFLANEreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SELFLANEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_SELFLANEdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_SELFLANEstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_SELFLANEreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SELFLANEavailability);
			WriteDatToCom("PA_SelfLane",4, data, status, reserve, availability);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
