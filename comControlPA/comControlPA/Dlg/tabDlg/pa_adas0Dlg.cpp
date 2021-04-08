// pa_adas0Dlg.cpp : implementation file
//

// pa_adas0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_adas0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_adas0Dlg, CDialog)

pa_adas0Dlg::pa_adas0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_ADAS0, pParent)
{

}

pa_adas0Dlg::~pa_adas0Dlg()
{
}

void pa_adas0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_AEB_LAMPstatus, mCEditPA_AEB_lampstatus);
	DDX_Control(pDX, IDC_EDITPA_AEB_LAMPavailability, mCEditPA_AEB_lampavailability);
	DDX_Control(pDX, IDC_EDITPA_FCTALEFT_ANIMATIONstatus, mCEditPA_FCTAleft_animationstatus);
	DDX_Control(pDX, IDC_EDITPA_FCTALEFT_ANIMATIONavailability, mCEditPA_FCTAleft_animationavailability);
	DDX_Control(pDX, IDC_EDITPA_FCTARIGHT_ANIMATIONstatus, mCEditPA_FCTARight_animationstatus);
	DDX_Control(pDX, IDC_EDITPA_FCTARIGHT_ANIMATIONavailability, mCEditPA_FCTARight_animationavailability);
	DDX_Control(pDX, IDC_EDITPA_FCTA_HUDWARNING_PICTUREstatus, mCEditPA_FCTA_HUDwarning_Picturestatus);
	DDX_Control(pDX, IDC_EDITPA_FCTA_HUDWARNING_PICTUREavailability, mCEditPA_FCTA_HUDwarning_Pictureavailability);
	DDX_Control(pDX, IDC_EDITPA_RCW_ANIMATIONstatus, mCEditPA_RCW_animationstatus);
	DDX_Control(pDX, IDC_EDITPA_RCW_ANIMATIONavailability, mCEditPA_RCW_animationavailability);
	DDX_Control(pDX, IDC_EDITPA_RSDSSYSSTS_LAMPstatus, mCEditPA_RsdsSysSts_Lampstatus);
	DDX_Control(pDX, IDC_EDITPA_RSDSSYSSTS_LAMPavailability, mCEditPA_RsdsSysSts_Lampavailability);
	DDX_Control(pDX, IDC_EDITPA_ELOW_EMGYLANEdata, mCEditPA_ELOW_EmgyLanedata);
	DDX_Control(pDX, IDC_EDITPA_ELOW_EMGYLANEstatus, mCEditPA_ELOW_EmgyLanestatus);
	DDX_Control(pDX, IDC_EDITPA_ELOW_EMGYLANEavailability, mCEditPA_ELOW_EmgyLaneavailability);
	DDX_Control(pDX, IDC_EDITPA_CALLBACK_DPSvalue, mCEditPA_Callback_DPSvalue);
	DDX_Control(pDX, IDC_EDITPA_TLA_LAMPstatus, mCEditPA_TLA_Lampstatus);
	DDX_Control(pDX, IDC_EDITPA_TLA_LAMPavailability, mCEditPA_TLA_Lampavailability);
	DDX_Control(pDX, IDC_EDITPA_CC_MODEstatus, mCEditPA_CC_Modestatus);
	DDX_Control(pDX, IDC_EDITPA_CC_MODEavailability, mCEditPA_CC_Modeavailability);
	DDX_Control(pDX, IDC_EDITPA_CC_LAMPstatus, mCEditPA_CC_lampstatus);
	DDX_Control(pDX, IDC_EDITPA_CC_LAMPavailability, mCEditPA_CC_lampavailability);
	DDX_Control(pDX, IDC_EDITPA_CC_TARGET_BARdata, mCEditPA_CC_target_bardata);
	DDX_Control(pDX, IDC_EDITPA_CC_TARGET_BARstatus, mCEditPA_CC_target_barstatus);
	DDX_Control(pDX, IDC_EDITPA_CC_TARGET_BARavailability, mCEditPA_CC_target_baravailability);
	DDX_Control(pDX, IDC_EDITPA_CC_SETSPEEDdata, mCEditPA_CC_SetSpeeddata);
	DDX_Control(pDX, IDC_EDITPA_CC_SETSPEEDstatus, mCEditPA_CC_SetSpeedstatus);
	DDX_Control(pDX, IDC_EDITPA_CC_SETSPEEDformat, mCEditPA_CC_SetSpeedformat);
	DDX_Control(pDX, IDC_EDITPA_CC_SETSPEEDfeedback, mCEditPA_CC_SetSpeedfeedback);
	DDX_Control(pDX, IDC_EDITPA_CC_SETSPEEDavailability, mCEditPA_CC_SetSpeedavailability);
	DDX_Control(pDX, IDC_EDITPA_FIRST_SPEEDLIMT_ICONstatus, mCEditPA_First_speedlimt_iconstatus);
	DDX_Control(pDX, IDC_EDITPA_FIRST_SPEEDLIMT_ICONvalue, mCEditPA_First_speedlimt_iconvalue);
	DDX_Control(pDX, IDC_EDITPA_FIRST_SPEEDLIMT_ICONposition, mCEditPA_First_speedlimt_iconposition);
	DDX_Control(pDX, IDC_EDITPA_FIRST_SPEEDLIMT_ICONreserve, mCEditPA_First_speedlimt_iconreserve);
	DDX_Control(pDX, IDC_EDITPA_SECOND_SPEEDLIMT_ICONstatus, mCEditPA_Second_speedlimt_iconstatus);
	DDX_Control(pDX, IDC_EDITPA_SECOND_SPEEDLIMT_ICONvalue, mCEditPA_Second_speedlimt_iconvalue);
	DDX_Control(pDX, IDC_EDITPA_SECOND_SPEEDLIMT_ICONposition, mCEditPA_Second_speedlimt_iconposition);
	DDX_Control(pDX, IDC_EDITPA_SECOND_SPEEDLIMT_ICONreserve, mCEditPA_Second_speedlimt_iconreserve);
	DDX_Control(pDX, IDC_EDITPA_FIRST_SPEEDLIMT_SUPPLEMENT_ICONstatus, mCEditPA_First_speedlimt_supplement_iconstatus);
	DDX_Control(pDX, IDC_EDITPA_FIRST_SPEEDLIMT_SUPPLEMENT_ICONposition, mCEditPA_First_speedlimt_supplement_iconposition);
	DDX_Control(pDX, IDC_EDITPA_TRAFFIC_SIGN_ICONstatus, mCEditPA_Traffic_sign_iconstatus);
	DDX_Control(pDX, IDC_EDITPA_TRAFFIC_SIGN_ICONposition, mCEditPA_Traffic_sign_iconposition);
	DDX_Control(pDX, IDC_EDITPA_CAMERA_SIGN_ICONstatus, mCEditPA_Camera_sign_iconstatus);
	DDX_Control(pDX, IDC_EDITPA_CAMERA_SIGN_ICONposition, mCEditPA_Camera_sign_iconposition);
	DDX_Control(pDX, IDC_EDITPA_ENTRANCE_EXIT_SIGN_ICONvalue, mCEditPA_Entrance_Exit_sign_iconvalue);
	DDX_Control(pDX, IDC_EDITPA_TSI_SPEED_DIAL_ICONlocation, mCEditPA_TSI_speed_dial_iconlocation);
	DDX_Control(pDX, IDC_EDITPA_TSI_SPEED_DIAL_ICONstatus, mCEditPA_TSI_speed_dial_iconstatus);
	DDX_Control(pDX, IDC_EDITPA_TSI_SPEED_DIAL_ICONreserve, mCEditPA_TSI_speed_dial_iconreserve);
	DDX_Control(pDX, IDC_EDITCPA_CTRYFORROADSGNINFOvalue, mCEditCPA_CtryForRoadSgnInfovalue);
	DDX_Control(pDX, IDC_EDITCPA_CTRYFORROADSGNINFOtimeout, mCEditCPA_CtryForRoadSgnInfotimeout);
	DDX_Control(pDX, IDC_EDITCPA_CTRYFORROADSGNINFOub, mCEditCPA_CtryForRoadSgnInfoub);
	DDX_Control(pDX, IDC_EDITPA_LCA_LEFT_ANIMATIONstatus, mCEditPA_LCA_left_Animationstatus);
	DDX_Control(pDX, IDC_EDITPA_LCA_LEFT_ANIMATIONavailability, mCEditPA_LCA_left_Animationavailability);
	DDX_Control(pDX, IDC_EDITPA_LCA_RIGHT_ANIMATIONstatus, mCEditPA_LCA_right_Animationstatus);
	DDX_Control(pDX, IDC_EDITPA_LCA_RIGHT_ANIMATIONavailability, mCEditPA_LCA_right_Animationavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINEdata, mCEditPA_LeftLinedata);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINEcolor, mCEditPA_LeftLinecolor);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINEstatus, mCEditPA_LeftLinestatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINEavailability, mCEditPA_LeftLineavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINE2data, mCEditPA_LeftLine2data);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINE2color, mCEditPA_LeftLine2color);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINE2status, mCEditPA_LeftLine2status);
	DDX_Control(pDX, IDC_EDITPA_LEFTLINE2availability, mCEditPA_LeftLine2availability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINEdata, mCEditPA_RightLinedata);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINEcolor, mCEditPA_RightLinecolor);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINEstatus, mCEditPA_RightLinestatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINEavailability, mCEditPA_RightLineavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINE2data, mCEditPA_RightLine2data);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINE2color, mCEditPA_RightLine2color);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINE2status, mCEditPA_RightLine2status);
	DDX_Control(pDX, IDC_EDITPA_RIGHTLINE2availability, mCEditPA_RightLine2availability);
	DDX_Control(pDX, IDC_EDITPA_LKA_LAMPstatus, mCEditPA_LKA_lampstatus);
	DDX_Control(pDX, IDC_EDITPA_LKA_LAMPavailability, mCEditPA_LKA_lampavailability);
	DDX_Control(pDX, IDC_EDITPA_ASL_LAMPstatus, mCEditPA_ASL_lampstatus);
	DDX_Control(pDX, IDC_EDITPA_ASL_LAMPavailability, mCEditPA_ASL_lampavailability);
	DDX_Control(pDX, IDC_EDITPA_ASL_SETSPEEDdata, mCEditPA_ASL_SetSpeeddata);
	DDX_Control(pDX, IDC_EDITPA_ASL_SETSPEEDformat, mCEditPA_ASL_SetSpeedformat);
	DDX_Control(pDX, IDC_EDITPA_ASL_SETSPEEDdisplay, mCEditPA_ASL_SetSpeeddisplay);
	DDX_Control(pDX, IDC_EDITPA_ASL_SETSPEEDavailability, mCEditPA_ASL_SetSpeedavailability);
	DDX_Control(pDX, IDC_EDITPA_ACC_LAMPstatus, mCEditPA_ACC_lampstatus);
	DDX_Control(pDX, IDC_EDITPA_ACC_LAMPavailability, mCEditPA_ACC_lampavailability);
	DDX_Control(pDX, IDC_EDITPA_ACC_TIMEGAPdata, mCEditPA_ACC_Timegapdata);
	DDX_Control(pDX, IDC_EDITPA_ACC_TIMEGAPformat, mCEditPA_ACC_Timegapformat);
	DDX_Control(pDX, IDC_EDITPA_ACC_TIMEGAPstatus, mCEditPA_ACC_Timegapstatus);
	DDX_Control(pDX, IDC_EDITPA_ACC_TIMEGAPavailability, mCEditPA_ACC_Timegapavailability);
}


BEGIN_MESSAGE_MAP(pa_adas0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_adas0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_adas0Dlg message handlers
BOOL pa_adas0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_AEB_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_AEB_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_AEB_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_AEB_LAMPavailability);
			WriteDatToCom("PA_AEB_lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FCTALEFT_ANIMATIONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FCTALEFT_ANIMATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_FCTALEFT_ANIMATIONstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_FCTALEFT_ANIMATIONavailability);
			WriteDatToCom("PA_FCTAleft_animation",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FCTARIGHT_ANIMATIONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FCTARIGHT_ANIMATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_FCTARIGHT_ANIMATIONstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_FCTARIGHT_ANIMATIONavailability);
			WriteDatToCom("PA_FCTARight_animation",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FCTA_HUDWARNING_PICTUREstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FCTA_HUDWARNING_PICTUREavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_FCTA_HUDWARNING_PICTUREstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_FCTA_HUDWARNING_PICTUREavailability);
			WriteDatToCom("PA_FCTA_HUDwarning_Picture",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RCW_ANIMATIONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RCW_ANIMATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RCW_ANIMATIONstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RCW_ANIMATIONavailability);
			WriteDatToCom("PA_RCW_animation",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RSDSSYSSTS_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RSDSSYSSTS_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RSDSSYSSTS_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RSDSSYSSTS_LAMPavailability);
			WriteDatToCom("PA_RsdsSysSts_Lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ELOW_EMGYLANEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ELOW_EMGYLANEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ELOW_EMGYLANEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ELOW_EMGYLANEdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_ELOW_EMGYLANEstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ELOW_EMGYLANEavailability);
			WriteDatToCom("PA_ELOW_EmgyLane",3, data, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CALLBACK_DPSvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_CALLBACK_DPSvalue);
			WriteDatToCom("PA_Callback_DPS",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TLA_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TLA_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_TLA_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TLA_LAMPavailability);
			WriteDatToCom("PA_TLA_Lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CC_MODEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CC_MODEavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_CC_MODEstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_CC_MODEavailability);
			WriteDatToCom("PA_CC_Mode",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CC_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CC_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_CC_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_CC_LAMPavailability);
			WriteDatToCom("PA_CC_lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CC_TARGET_BARdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CC_TARGET_BARstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CC_TARGET_BARavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_CC_TARGET_BARdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_CC_TARGET_BARstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_CC_TARGET_BARavailability);
			WriteDatToCom("PA_CC_target_bar",3, data, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CC_SETSPEEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CC_SETSPEEDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CC_SETSPEEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CC_SETSPEEDfeedback)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CC_SETSPEEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_CC_SETSPEEDdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_CC_SETSPEEDstatus);
			UINT format = GetDlgItemInt(IDC_EDITPA_CC_SETSPEEDformat);
			UINT feedback = GetDlgItemInt(IDC_EDITPA_CC_SETSPEEDfeedback);
			UINT availability = GetDlgItemInt(IDC_EDITPA_CC_SETSPEEDavailability);
			WriteDatToCom("PA_CC_SetSpeed",5, data, status, format, feedback, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FIRST_SPEEDLIMT_ICONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FIRST_SPEEDLIMT_ICONvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FIRST_SPEEDLIMT_ICONposition)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FIRST_SPEEDLIMT_ICONreserve)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_FIRST_SPEEDLIMT_ICONstatus);
			UINT value = GetDlgItemInt(IDC_EDITPA_FIRST_SPEEDLIMT_ICONvalue);
			UINT position = GetDlgItemInt(IDC_EDITPA_FIRST_SPEEDLIMT_ICONposition);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_FIRST_SPEEDLIMT_ICONreserve);
			WriteDatToCom("PA_First_speedlimt_icon",4, status, value, position, reserve);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SECOND_SPEEDLIMT_ICONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SECOND_SPEEDLIMT_ICONvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SECOND_SPEEDLIMT_ICONposition)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SECOND_SPEEDLIMT_ICONreserve)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_SECOND_SPEEDLIMT_ICONstatus);
			UINT value = GetDlgItemInt(IDC_EDITPA_SECOND_SPEEDLIMT_ICONvalue);
			UINT position = GetDlgItemInt(IDC_EDITPA_SECOND_SPEEDLIMT_ICONposition);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_SECOND_SPEEDLIMT_ICONreserve);
			WriteDatToCom("PA_Second_speedlimt_icon",4, status, value, position, reserve);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FIRST_SPEEDLIMT_SUPPLEMENT_ICONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FIRST_SPEEDLIMT_SUPPLEMENT_ICONposition)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_FIRST_SPEEDLIMT_SUPPLEMENT_ICONstatus);
			UINT position = GetDlgItemInt(IDC_EDITPA_FIRST_SPEEDLIMT_SUPPLEMENT_ICONposition);
			WriteDatToCom("PA_First_speedlimt_supplement_icon",2, status, position);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TRAFFIC_SIGN_ICONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TRAFFIC_SIGN_ICONposition)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_TRAFFIC_SIGN_ICONstatus);
			UINT position = GetDlgItemInt(IDC_EDITPA_TRAFFIC_SIGN_ICONposition);
			WriteDatToCom("PA_Traffic_sign_icon",2, status, position);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CAMERA_SIGN_ICONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CAMERA_SIGN_ICONposition)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_CAMERA_SIGN_ICONstatus);
			UINT position = GetDlgItemInt(IDC_EDITPA_CAMERA_SIGN_ICONposition);
			WriteDatToCom("PA_Camera_sign_icon",2, status, position);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ENTRANCE_EXIT_SIGN_ICONvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ENTRANCE_EXIT_SIGN_ICONvalue);
			WriteDatToCom("PA_Entrance_Exit_sign_icon",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TSI_SPEED_DIAL_ICONlocation)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TSI_SPEED_DIAL_ICONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TSI_SPEED_DIAL_ICONreserve)
			)
		{
				UpdateData(TRUE);
			UINT location = GetDlgItemInt(IDC_EDITPA_TSI_SPEED_DIAL_ICONlocation);
			UINT status = GetDlgItemInt(IDC_EDITPA_TSI_SPEED_DIAL_ICONstatus);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_TSI_SPEED_DIAL_ICONreserve);
			WriteDatToCom("PA_TSI_speed_dial_icon",3, location, status, reserve);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITCPA_CTRYFORROADSGNINFOvalue)
			||GetFocus() == GetDlgItem(IDC_EDITCPA_CTRYFORROADSGNINFOtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITCPA_CTRYFORROADSGNINFOub)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITCPA_CTRYFORROADSGNINFOvalue);
			UINT timeout = GetDlgItemInt(IDC_EDITCPA_CTRYFORROADSGNINFOtimeout);
			UINT ub = GetDlgItemInt(IDC_EDITCPA_CTRYFORROADSGNINFOub);
			WriteDatToCom("CPA_CtryForRoadSgnInfo",3, value, timeout, ub);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LCA_LEFT_ANIMATIONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LCA_LEFT_ANIMATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LCA_LEFT_ANIMATIONstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LCA_LEFT_ANIMATIONavailability);
			WriteDatToCom("PA_LCA_left_Animation",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LCA_RIGHT_ANIMATIONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LCA_RIGHT_ANIMATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LCA_RIGHT_ANIMATIONstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LCA_RIGHT_ANIMATIONavailability);
			WriteDatToCom("PA_LCA_right_Animation",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINEcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFTLINEdata);
			UINT color = GetDlgItemInt(IDC_EDITPA_LEFTLINEcolor);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTLINEstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTLINEavailability);
			WriteDatToCom("PA_LeftLine",4, data, color, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINE2data)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINE2color)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINE2status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTLINE2availability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFTLINE2data);
			UINT color = GetDlgItemInt(IDC_EDITPA_LEFTLINE2color);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTLINE2status);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTLINE2availability);
			WriteDatToCom("PA_LeftLine2",4, data, color, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINEcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIGHTLINEdata);
			UINT color = GetDlgItemInt(IDC_EDITPA_RIGHTLINEcolor);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTLINEstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTLINEavailability);
			WriteDatToCom("PA_RightLine",4, data, color, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINE2data)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINE2color)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINE2status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTLINE2availability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIGHTLINE2data);
			UINT color = GetDlgItemInt(IDC_EDITPA_RIGHTLINE2color);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTLINE2status);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTLINE2availability);
			WriteDatToCom("PA_RightLine2",4, data, color, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LKA_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LKA_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LKA_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LKA_LAMPavailability);
			WriteDatToCom("PA_LKA_lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ASL_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ASL_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_ASL_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ASL_LAMPavailability);
			WriteDatToCom("PA_ASL_lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ASL_SETSPEEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ASL_SETSPEEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ASL_SETSPEEDdisplay)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ASL_SETSPEEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ASL_SETSPEEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_ASL_SETSPEEDformat);
			UINT display = GetDlgItemInt(IDC_EDITPA_ASL_SETSPEEDdisplay);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ASL_SETSPEEDavailability);
			WriteDatToCom("PA_ASL_SetSpeed",4, data, format, display, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_LAMPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_LAMPavailability)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_LAMPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_LAMPavailability);
			WriteDatToCom("PA_ACC_lamp",2, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ACC_TIMEGAPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_TIMEGAPformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_TIMEGAPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ACC_TIMEGAPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ACC_TIMEGAPdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_ACC_TIMEGAPformat);
			UINT status = GetDlgItemInt(IDC_EDITPA_ACC_TIMEGAPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ACC_TIMEGAPavailability);
			WriteDatToCom("PA_ACC_Timegap",4, data, format, status, availability);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
