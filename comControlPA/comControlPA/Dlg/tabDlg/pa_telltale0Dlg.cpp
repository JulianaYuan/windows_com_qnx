// pa_telltale0Dlg.cpp : implementation file
//

// pa_telltale0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_telltale0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_telltale0Dlg, CDialog)

pa_telltale0Dlg::pa_telltale0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_TELLTALE0, pParent)
{

}

pa_telltale0Dlg::~pa_telltale0Dlg()
{
}

void pa_telltale0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_AFSLAMPavailability, mCEditPA_AFSLampavailability);
	DDX_Control(pDX, IDC_EDITPA_AFSLAMPdata, mCEditPA_AFSLampdata);
	DDX_Control(pDX, IDC_EDITPA_POSITIONLAMPavailability, mCEditPA_PositionLampavailability);
	DDX_Control(pDX, IDC_EDITPA_POSITIONLAMPdata, mCEditPA_PositionLampdata);
	DDX_Control(pDX, IDC_EDITPA_HIGHBEAMLAMPavailability, mCEditPA_HighBeamLampavailability);
	DDX_Control(pDX, IDC_EDITPA_HIGHBEAMLAMPdata, mCEditPA_HighBeamLampdata);
	DDX_Control(pDX, IDC_EDITPA_LOWBEAMLAMPavailability, mCEditPA_LowBeamLampavailability);
	DDX_Control(pDX, IDC_EDITPA_LOWBEAMLAMPdata, mCEditPA_LowBeamLampdata);
	DDX_Control(pDX, IDC_EDITPA_ABLLAMPavailability, mCEditPA_ABLLampavailability);
	DDX_Control(pDX, IDC_EDITPA_ABLLAMPdata, mCEditPA_ABLLampdata);
	DDX_Control(pDX, IDC_EDITPA_MANUALLEVELINGLAMPavailability, mCEditPA_ManualLevelingLampavailability);
	DDX_Control(pDX, IDC_EDITPA_MANUALLEVELINGLAMPdata, mCEditPA_ManualLevelingLampdata);
	DDX_Control(pDX, IDC_EDITPA_FRONTFOGLAMPavailability, mCEditPA_FrontFogLampavailability);
	DDX_Control(pDX, IDC_EDITPA_FRONTFOGLAMPdata, mCEditPA_FrontFogLampdata);
	DDX_Control(pDX, IDC_EDITPA_REARFOGLAMPavailability, mCEditPA_RearFogLampavailability);
	DDX_Control(pDX, IDC_EDITPA_REARFOGLAMPdata, mCEditPA_RearFogLampdata);
	DDX_Control(pDX, IDC_EDITPA_TURNLEFTLAMPavailability, mCEditPA_TurnLeftLampavailability);
	DDX_Control(pDX, IDC_EDITPA_TURNLEFTLAMPdata, mCEditPA_TurnLeftLampdata);
	DDX_Control(pDX, IDC_EDITPA_TURNRIGHTLAMPavailability, mCEditPA_TurnRightLampavailability);
	DDX_Control(pDX, IDC_EDITPA_TURNRIGHTLAMPdata, mCEditPA_TurnRightLampdata);
	DDX_Control(pDX, IDC_EDITPA_BRAKELIGHTFAILUREavailability, mCEditPA_BrakeLightFailureavailability);
	DDX_Control(pDX, IDC_EDITPA_BRAKELIGHTFAILUREdata, mCEditPA_BrakeLightFailuredata);
	DDX_Control(pDX, IDC_EDITPA_AHBCLAMPavailability, mCEditPA_AHBCLampavailability);
	DDX_Control(pDX, IDC_EDITPA_AHBCLAMPdata, mCEditPA_AHBCLampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_READYLAMPavailability, mCEditPA_DIM_ReadyLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_READYLAMPdata, mCEditPA_DIM_ReadyLampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_CHECKENGINELAMPavailability, mCEditPA_DIM_CheckEngineLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_CHECKENGINELAMPdata, mCEditPA_DIM_CheckEngineLampdata);
	DDX_Control(pDX, IDC_EDITPA_BATT_BATTERYLOWINDICATORavailability, mCEditPA_BATT_BatteryLowIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BATT_BATTERYLOWINDICATORdata, mCEditPA_BATT_BatteryLowIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BATT_BATTERYFAILUREINDICATORavailability, mCEditPA_BATT_BatteryFailureIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BATT_BATTERYFAILUREINDICATORdata, mCEditPA_BATT_BatteryFailureIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BATT_CHARGINGHANDLEINDICATORavailability, mCEditPA_BATT_ChargingHandleIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BATT_CHARGINGHANDLEINDICATORdata, mCEditPA_BATT_ChargingHandleIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_DIM_OILPRESSURELAMPavailability, mCEditPA_DIM_OilPressureLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_OILPRESSURELAMPdata, mCEditPA_DIM_OilPressureLampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_POWERLIMITATIONLAMPavailability, mCEditPA_DIM_PowerLimitationLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_POWERLIMITATIONLAMPdata, mCEditPA_DIM_PowerLimitationLampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_SYSTEMFAULTLAMPavailability, mCEditPA_DIM_SystemFaultLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_SYSTEMFAULTLAMPdata, mCEditPA_DIM_SystemFaultLampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_ELECTRICALMACHINEERRORLAMPavailability, mCEditPA_DIM_ElectricalMachineErrorLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_ELECTRICALMACHINEERRORLAMPdata, mCEditPA_DIM_ElectricalMachineErrorLampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_SRSLAMPavailability, mCEditPA_DIM_SRSLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_SRSLAMPdata, mCEditPA_DIM_SRSLampdata);
	DDX_Control(pDX, IDC_EDITPA_BRK_ESCINDICATORavailability, mCEditPA_BRK_ESCIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_ESCINDICATORdata, mCEditPA_BRK_ESCIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_ESCSPORTINDICATORavailability, mCEditPA_BRK_EscSportIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_ESCSPORTINDICATORdata, mCEditPA_BRK_EscSportIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_ABSINDICATORavailability, mCEditPA_BRK_ABSIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_ABSINDICATORdata, mCEditPA_BRK_ABSIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_HDCWHITEINDICATORavailability, mCEditPA_BRK_HDCWhiteIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_HDCWHITEINDICATORdata, mCEditPA_BRK_HDCWhiteIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_HDCGREENINDICATORavailability, mCEditPA_BRK_HDCGreenIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_HDCGREENINDICATORdata, mCEditPA_BRK_HDCGreenIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_HDCYELLOWINDICATORavailability, mCEditPA_BRK_HDCYellowIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_HDCYELLOWINDICATORdata, mCEditPA_BRK_HDCYellowIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_BRAKERELEASEINDICATORavailability, mCEditPA_BRK_BrakeReleaseIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_BRAKERELEASEINDICATORdata, mCEditPA_BRK_BrakeReleaseIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_EPBINDICATORavailability, mCEditPA_BRK_EPBIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_EPBINDICATORdata, mCEditPA_BRK_EPBIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_BRAKEYELLOWINDICATORavailability, mCEditPA_BRK_BrakeYellowIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_BRAKEYELLOWINDICATORdata, mCEditPA_BRK_BrakeYellowIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_BRK_BRAKEREDINDICATORavailability, mCEditPA_BRK_BrakeRedIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_BRAKEREDINDICATORdata, mCEditPA_BRK_BrakeRedIndicatordata);
}


BEGIN_MESSAGE_MAP(pa_telltale0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_telltale0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_telltale0Dlg message handlers
BOOL pa_telltale0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_AFSLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_AFSLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_AFSLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_AFSLAMPdata);
			WriteDatToCom("PA_AFSLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_POSITIONLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_POSITIONLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_POSITIONLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_POSITIONLAMPdata);
			WriteDatToCom("PA_PositionLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_HIGHBEAMLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_HIGHBEAMLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_HIGHBEAMLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_HIGHBEAMLAMPdata);
			WriteDatToCom("PA_HighBeamLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LOWBEAMLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LOWBEAMLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LOWBEAMLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_LOWBEAMLAMPdata);
			WriteDatToCom("PA_LowBeamLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ABLLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ABLLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ABLLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_ABLLAMPdata);
			WriteDatToCom("PA_ABLLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_MANUALLEVELINGLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_MANUALLEVELINGLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_MANUALLEVELINGLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_MANUALLEVELINGLAMPdata);
			WriteDatToCom("PA_ManualLevelingLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FRONTFOGLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FRONTFOGLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_FRONTFOGLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_FRONTFOGLAMPdata);
			WriteDatToCom("PA_FrontFogLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_REARFOGLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_REARFOGLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_REARFOGLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_REARFOGLAMPdata);
			WriteDatToCom("PA_RearFogLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TURNLEFTLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TURNLEFTLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TURNLEFTLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_TURNLEFTLAMPdata);
			WriteDatToCom("PA_TurnLeftLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TURNRIGHTLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TURNRIGHTLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TURNRIGHTLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_TURNRIGHTLAMPdata);
			WriteDatToCom("PA_TurnRightLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRAKELIGHTFAILUREavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRAKELIGHTFAILUREdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRAKELIGHTFAILUREavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRAKELIGHTFAILUREdata);
			WriteDatToCom("PA_BrakeLightFailure",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_AHBCLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_AHBCLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_AHBCLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_AHBCLAMPdata);
			WriteDatToCom("PA_AHBCLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_READYLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_READYLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_READYLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_READYLAMPdata);
			WriteDatToCom("PA_DIM_ReadyLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_CHECKENGINELAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_CHECKENGINELAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_CHECKENGINELAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_CHECKENGINELAMPdata);
			WriteDatToCom("PA_DIM_CheckEngineLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BATT_BATTERYLOWINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BATT_BATTERYLOWINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BATT_BATTERYLOWINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BATT_BATTERYLOWINDICATORdata);
			WriteDatToCom("PA_BATT_BatteryLowIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BATT_BATTERYFAILUREINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BATT_BATTERYFAILUREINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BATT_BATTERYFAILUREINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BATT_BATTERYFAILUREINDICATORdata);
			WriteDatToCom("PA_BATT_BatteryFailureIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BATT_CHARGINGHANDLEINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BATT_CHARGINGHANDLEINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BATT_CHARGINGHANDLEINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BATT_CHARGINGHANDLEINDICATORdata);
			WriteDatToCom("PA_BATT_ChargingHandleIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_OILPRESSURELAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_OILPRESSURELAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_OILPRESSURELAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_OILPRESSURELAMPdata);
			WriteDatToCom("PA_DIM_OilPressureLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_POWERLIMITATIONLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_POWERLIMITATIONLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_POWERLIMITATIONLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_POWERLIMITATIONLAMPdata);
			WriteDatToCom("PA_DIM_PowerLimitationLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_SYSTEMFAULTLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_SYSTEMFAULTLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_SYSTEMFAULTLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_SYSTEMFAULTLAMPdata);
			WriteDatToCom("PA_DIM_SystemFaultLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ELECTRICALMACHINEERRORLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ELECTRICALMACHINEERRORLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_ELECTRICALMACHINEERRORLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_ELECTRICALMACHINEERRORLAMPdata);
			WriteDatToCom("PA_DIM_ElectricalMachineErrorLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_SRSLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_SRSLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_SRSLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_SRSLAMPdata);
			WriteDatToCom("PA_DIM_SRSLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_ESCINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_ESCINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_ESCINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_ESCINDICATORdata);
			WriteDatToCom("PA_BRK_ESCIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_ESCSPORTINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_ESCSPORTINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_ESCSPORTINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_ESCSPORTINDICATORdata);
			WriteDatToCom("PA_BRK_EscSportIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_ABSINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_ABSINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_ABSINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_ABSINDICATORdata);
			WriteDatToCom("PA_BRK_ABSIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_HDCWHITEINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_HDCWHITEINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_HDCWHITEINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_HDCWHITEINDICATORdata);
			WriteDatToCom("PA_BRK_HDCWhiteIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_HDCGREENINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_HDCGREENINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_HDCGREENINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_HDCGREENINDICATORdata);
			WriteDatToCom("PA_BRK_HDCGreenIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_HDCYELLOWINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_HDCYELLOWINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_HDCYELLOWINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_HDCYELLOWINDICATORdata);
			WriteDatToCom("PA_BRK_HDCYellowIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_BRAKERELEASEINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_BRAKERELEASEINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_BRAKERELEASEINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_BRAKERELEASEINDICATORdata);
			WriteDatToCom("PA_BRK_BrakeReleaseIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_EPBINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_EPBINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_EPBINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_EPBINDICATORdata);
			WriteDatToCom("PA_BRK_EPBIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_BRAKEYELLOWINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_BRAKEYELLOWINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_BRAKEYELLOWINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_BRAKEYELLOWINDICATORdata);
			WriteDatToCom("PA_BRK_BrakeYellowIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_BRAKEREDINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_BRAKEREDINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_BRAKEREDINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_BRAKEREDINDICATORdata);
			WriteDatToCom("PA_BRK_BrakeRedIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
