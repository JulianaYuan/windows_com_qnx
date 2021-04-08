// pa_telltale1Dlg.cpp : implementation file
//

// pa_telltale1Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_telltale1Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_telltale1Dlg, CDialog)

pa_telltale1Dlg::pa_telltale1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_TELLTALE1, pParent)
{

}

pa_telltale1Dlg::~pa_telltale1Dlg()
{
}

void pa_telltale1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_BRK_AUTOHOLDINDICATORavailability, mCEditPA_BRK_AutoHoldIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_BRK_AUTOHOLDINDICATORdata, mCEditPA_BRK_AutoHoldIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_DIM_ENGINECOOLANTWARNINGLAMPavailability, mCEditPA_DIM_EngineCoolantWarningLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_ENGINECOOLANTWARNINGLAMPdata, mCEditPA_DIM_EngineCoolantWarningLampdata);
	DDX_Control(pDX, IDC_EDITPA_TOWBARUNLOCKLAMPavailability, mCEditPA_TowbarUnlockLampavailability);
	DDX_Control(pDX, IDC_EDITPA_TOWBARUNLOCKLAMPdata, mCEditPA_TowbarUnlockLampdata);
	DDX_Control(pDX, IDC_EDITPA_TRAILERLIGHTSTATUSLAMPavailability, mCEditPA_TrailerLightStatusLampavailability);
	DDX_Control(pDX, IDC_EDITPA_TRAILERLIGHTSTATUSLAMPdata, mCEditPA_TrailerLightStatusLampdata);
	DDX_Control(pDX, IDC_EDITPA_TRAILERSERVICELAMPavailability, mCEditPA_TrailerServiceLampavailability);
	DDX_Control(pDX, IDC_EDITPA_TRAILERSERVICELAMPdata, mCEditPA_TrailerServiceLampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_STARTSTOPLAMPavailability, mCEditPA_DIM_StartStopLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_STARTSTOPLAMPdata, mCEditPA_DIM_StartStopLampdata);
	DDX_Control(pDX, IDC_EDITPA_LVE_BATTERYINDICATORavailability, mCEditPA_LVE_BatteryIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_LVE_BATTERYINDICATORdata, mCEditPA_LVE_BatteryIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_DIM_LEFTCHILDLOCKSTATUSavailability, mCEditPA_DIM_LeftChildLockStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_LEFTCHILDLOCKSTATUSdata, mCEditPA_DIM_LeftChildLockStatusdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_RIGHTCHILDLOCKSTATUSavailability, mCEditPA_DIM_RightChildLockStatusavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_RIGHTCHILDLOCKSTATUSdata, mCEditPA_DIM_RightChildLockStatusdata);
	DDX_Control(pDX, IDC_EDITPA_TIR_TIREPRESSUREFAULTavailability, mCEditPA_TIR_TirePressureFaultavailability);
	DDX_Control(pDX, IDC_EDITPA_TIR_TIREPRESSUREFAULTdata, mCEditPA_TIR_TirePressureFaultdata);
	DDX_Control(pDX, IDC_EDITPA_STEERINGINDICATORavailability, mCEditPA_SteeringIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_STEERINGINDICATORdata, mCEditPA_SteeringIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONYELLOWINDICATORavailability, mCEditPA_SUSP_SuspensionYellowIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONYELLOWINDICATORdata, mCEditPA_SUSP_SuspensionYellowIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONREDINDICATORavailability, mCEditPA_SUSP_SuspensionRedIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONREDINDICATORdata, mCEditPA_SUSP_SuspensionRedIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONMOVINGUPINDICATORavailability, mCEditPA_SUSP_SuspensionMovingUpIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONMOVINGUPINDICATORdata, mCEditPA_SUSP_SuspensionMovingUpIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONMOVINGDOWNINDICATORavailability, mCEditPA_SUSP_SuspensionMovingDownIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONMOVINGDOWNINDICATORdata, mCEditPA_SUSP_SuspensionMovingDownIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONSTOPINDICATORavailability, mCEditPA_SUSP_SuspensionStopIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONSTOPINDICATORdata, mCEditPA_SUSP_SuspensionStopIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL1INDICATORavailability, mCEditPA_SUSP_SuspensionCurrentLevelLL1Indicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL1INDICATORdata, mCEditPA_SUSP_SuspensionCurrentLevelLL1Indicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL2INDICATORavailability, mCEditPA_SUSP_SuspensionCurrentLevelLL2Indicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL2INDICATORdata, mCEditPA_SUSP_SuspensionCurrentLevelLL2Indicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELNRHINDICATORavailability, mCEditPA_SUSP_SuspensionCurrentLevelNRHIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELNRHINDICATORdata, mCEditPA_SUSP_SuspensionCurrentLevelNRHIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL1INDICATORavailability, mCEditPA_SUSP_SuspensionCurrentLevelHL1Indicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL1INDICATORdata, mCEditPA_SUSP_SuspensionCurrentLevelHL1Indicatordata);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL2INDICATORavailability, mCEditPA_SUSP_SuspensionCurrentLevelHL2Indicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL2INDICATORdata, mCEditPA_SUSP_SuspensionCurrentLevelHL2Indicatordata);
	DDX_Control(pDX, IDC_EDITPA_DPS_COFFEECUP_LAMPavailability, mCEditPA_DPS_coffeecup_lampavailability);
	DDX_Control(pDX, IDC_EDITPA_DPS_COFFEECUP_LAMPdata, mCEditPA_DPS_coffeecup_lampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_EXTERNALARTIFICIALSOUNDLAMPavailability, mCEditPA_DIM_ExternalArtIficialSoundLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_EXTERNALARTIFICIALSOUNDLAMPdata, mCEditPA_DIM_ExternalArtIficialSoundLampdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_PARKINGEMERGENCYBRAKELAMPavailability, mCEditPA_DIM_ParkingEmergencyBrakeLampavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_PARKINGEMERGENCYBRAKELAMPdata, mCEditPA_DIM_ParkingEmergencyBrakeLampdata);
	DDX_Control(pDX, IDC_EDITPA_EPWISTavailability, mCEditPA_EPWIStavailability);
	DDX_Control(pDX, IDC_EDITPA_EPWISTdata, mCEditPA_EPWIStdata);
	DDX_Control(pDX, IDC_EDITPA_EPWISTUSavailability, mCEditPA_EPWIStUSavailability);
	DDX_Control(pDX, IDC_EDITPA_EPWISTUSdata, mCEditPA_EPWIStUSdata);
	DDX_Control(pDX, IDC_EDITPA_RWSINDICATORavailability, mCEditPA_RWSIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_RWSINDICATORdata, mCEditPA_RWSIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_EPEDALINDICATORavailability, mCEditPA_EpedalIndicatoravailability);
	DDX_Control(pDX, IDC_EDITPA_EPEDALINDICATORdata, mCEditPA_EpedalIndicatordata);
	DDX_Control(pDX, IDC_EDITPA_SEATBELTavailability, mCEditPA_Seatbeltavailability);
	DDX_Control(pDX, IDC_EDITPA_SEATBELTdata, mCEditPA_Seatbeltdata);
	DDX_Control(pDX, IDC_EDITPA_SVSLAMPavailability, mCEditPA_SVSLampavailability);
	DDX_Control(pDX, IDC_EDITPA_SVSLAMPdata, mCEditPA_SVSLampdata);
	DDX_Control(pDX, IDC_EDITPA_TCMLAMPavailability, mCEditPA_TCMLampavailability);
	DDX_Control(pDX, IDC_EDITPA_TCMLAMPdata, mCEditPA_TCMLampdata);
	DDX_Control(pDX, IDC_EDITPA_OLI_OILLEVELINDICATEDavailability, mCEditPA_OLI_OilLevelIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_OLI_OILLEVELINDICATEDdata, mCEditPA_OLI_OilLevelIndicateddata);
}


BEGIN_MESSAGE_MAP(pa_telltale1Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_telltale1Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_telltale1Dlg message handlers
BOOL pa_telltale1Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BRK_AUTOHOLDINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BRK_AUTOHOLDINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BRK_AUTOHOLDINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_BRK_AUTOHOLDINDICATORdata);
			WriteDatToCom("PA_BRK_AutoHoldIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ENGINECOOLANTWARNINGLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ENGINECOOLANTWARNINGLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_ENGINECOOLANTWARNINGLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_ENGINECOOLANTWARNINGLAMPdata);
			WriteDatToCom("PA_DIM_EngineCoolantWarningLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TOWBARUNLOCKLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TOWBARUNLOCKLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TOWBARUNLOCKLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_TOWBARUNLOCKLAMPdata);
			WriteDatToCom("PA_TowbarUnlockLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TRAILERLIGHTSTATUSLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TRAILERLIGHTSTATUSLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TRAILERLIGHTSTATUSLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_TRAILERLIGHTSTATUSLAMPdata);
			WriteDatToCom("PA_TrailerLightStatusLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TRAILERSERVICELAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TRAILERSERVICELAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TRAILERSERVICELAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_TRAILERSERVICELAMPdata);
			WriteDatToCom("PA_TrailerServiceLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_STARTSTOPLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_STARTSTOPLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_STARTSTOPLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_STARTSTOPLAMPdata);
			WriteDatToCom("PA_DIM_StartStopLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LVE_BATTERYINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LVE_BATTERYINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LVE_BATTERYINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_LVE_BATTERYINDICATORdata);
			WriteDatToCom("PA_LVE_BatteryIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_LEFTCHILDLOCKSTATUSavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_LEFTCHILDLOCKSTATUSdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_LEFTCHILDLOCKSTATUSavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_LEFTCHILDLOCKSTATUSdata);
			WriteDatToCom("PA_DIM_LeftChildLockStatus",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_RIGHTCHILDLOCKSTATUSavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_RIGHTCHILDLOCKSTATUSdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_RIGHTCHILDLOCKSTATUSavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_RIGHTCHILDLOCKSTATUSdata);
			WriteDatToCom("PA_DIM_RightChildLockStatus",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TIR_TIREPRESSUREFAULTavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TIR_TIREPRESSUREFAULTdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TIR_TIREPRESSUREFAULTavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_TIR_TIREPRESSUREFAULTdata);
			WriteDatToCom("PA_TIR_TirePressureFault",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_STEERINGINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_STEERINGINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_STEERINGINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_STEERINGINDICATORdata);
			WriteDatToCom("PA_SteeringIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONYELLOWINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONYELLOWINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONYELLOWINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONYELLOWINDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionYellowIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONREDINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONREDINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONREDINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONREDINDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionRedIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONMOVINGUPINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONMOVINGUPINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONMOVINGUPINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONMOVINGUPINDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionMovingUpIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONMOVINGDOWNINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONMOVINGDOWNINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONMOVINGDOWNINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONMOVINGDOWNINDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionMovingDownIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONSTOPINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONSTOPINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONSTOPINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONSTOPINDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionStopIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL1INDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL1INDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL1INDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL1INDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionCurrentLevelLL1Indicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL2INDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL2INDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL2INDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELLL2INDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionCurrentLevelLL2Indicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELNRHINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELNRHINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELNRHINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELNRHINDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionCurrentLevelNRHIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL1INDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL1INDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL1INDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL1INDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionCurrentLevelHL1Indicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL2INDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL2INDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL2INDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SUSP_SUSPENSIONCURRENTLEVELHL2INDICATORdata);
			WriteDatToCom("PA_SUSP_SuspensionCurrentLevelHL2Indicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DPS_COFFEECUP_LAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DPS_COFFEECUP_LAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DPS_COFFEECUP_LAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DPS_COFFEECUP_LAMPdata);
			WriteDatToCom("PA_DPS_coffeecup_lamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_EXTERNALARTIFICIALSOUNDLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_EXTERNALARTIFICIALSOUNDLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_EXTERNALARTIFICIALSOUNDLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_EXTERNALARTIFICIALSOUNDLAMPdata);
			WriteDatToCom("PA_DIM_ExternalArtIficialSoundLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_PARKINGEMERGENCYBRAKELAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_PARKINGEMERGENCYBRAKELAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_PARKINGEMERGENCYBRAKELAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_PARKINGEMERGENCYBRAKELAMPdata);
			WriteDatToCom("PA_DIM_ParkingEmergencyBrakeLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EPWISTavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_EPWISTdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_EPWISTavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_EPWISTdata);
			WriteDatToCom("PA_EPWISt",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EPWISTUSavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_EPWISTUSdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_EPWISTUSavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_EPWISTUSdata);
			WriteDatToCom("PA_EPWIStUS",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RWSINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RWSINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RWSINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_RWSINDICATORdata);
			WriteDatToCom("PA_RWSIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EPEDALINDICATORavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_EPEDALINDICATORdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_EPEDALINDICATORavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_EPEDALINDICATORdata);
			WriteDatToCom("PA_EpedalIndicator",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELTavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SEATBELTdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SEATBELTavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SEATBELTdata);
			WriteDatToCom("PA_Seatbelt",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SVSLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SVSLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SVSLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_SVSLAMPdata);
			WriteDatToCom("PA_SVSLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TCMLAMPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TCMLAMPdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TCMLAMPavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_TCMLAMPdata);
			WriteDatToCom("PA_TCMLamp",2, availability, data);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_OLI_OILLEVELINDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_OLI_OILLEVELINDICATEDdata)
			)
		{
				UpdateData(TRUE);
			UINT availability = GetDlgItemInt(IDC_EDITPA_OLI_OILLEVELINDICATEDavailability);
			UINT data = GetDlgItemInt(IDC_EDITPA_OLI_OILLEVELINDICATEDdata);
			WriteDatToCom("PA_OLI_OilLevelIndicated",2, availability, data);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
