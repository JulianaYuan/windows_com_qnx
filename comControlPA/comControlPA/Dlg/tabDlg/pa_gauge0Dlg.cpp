// pa_gauge0Dlg.cpp : implementation file
//

// pa_gauge0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_gauge0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_gauge0Dlg, CDialog)

pa_gauge0Dlg::pa_gauge0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_GAUGE0, pParent)
{

}

pa_gauge0Dlg::~pa_gauge0Dlg()
{
}

void pa_gauge0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDINDICATEDdata, mCEditPA_VS_VehicleSpeedIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDINDICATEDstatus, mCEditPA_VS_VehicleSpeedIndicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDINDICATEDformat, mCEditPA_VS_VehicleSpeedIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDINDICATEDavailability, mCEditPA_VS_VehicleSpeedIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDDIGITALdata, mCEditPA_VS_VehicleSpeedDigitaldata);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDDIGITALstatus, mCEditPA_VS_VehicleSpeedDigitalstatus);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDDIGITALformat, mCEditPA_VS_VehicleSpeedDigitalformat);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDDIGITALavailability, mCEditPA_VS_VehicleSpeedDigitalavailability);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXdata, mCEditPA_VS_VehicleSpeedExtendedCheckboxdata);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXstatus, mCEditPA_VS_VehicleSpeedExtendedCheckboxstatus);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXformat, mCEditPA_VS_VehicleSpeedExtendedCheckboxformat);
	DDX_Control(pDX, IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXavailability, mCEditPA_VS_VehicleSpeedExtendedCheckboxavailability);
	DDX_Control(pDX, IDC_EDITPA_BLI_HVBATTLEVELINDICATIONdata, mCEditPA_BLI_HVBattLevelIndicationdata);
	DDX_Control(pDX, IDC_EDITPA_BLI_HVBATTLEVELINDICATIONstatus, mCEditPA_BLI_HVBattLevelIndicationstatus);
	DDX_Control(pDX, IDC_EDITPA_BLI_HVBATTLEVELINDICATIONlevel, mCEditPA_BLI_HVBattLevelIndicationlevel);
	DDX_Control(pDX, IDC_EDITPA_BLI_HVBATTLEVELINDICATIONreserve, mCEditPA_BLI_HVBattLevelIndicationreserve);
	DDX_Control(pDX, IDC_EDITPA_BLI_HVBATTLEVELINDICATIONavailability, mCEditPA_BLI_HVBattLevelIndicationavailability);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDvalue, mCEditPA_PDS_DriverSupportIndicatedvalue);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDreserve, mCEditPA_PDS_DriverSupportIndicatedreserve);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDdata, mCEditPA_PDS_DriverSupportIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDavailability, mCEditPA_PDS_DriverSupportIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTvalue, mCEditPA_PDS_DriverSupportEngineStartvalue);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTreserve, mCEditPA_PDS_DriverSupportEngineStartreserve);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTdata, mCEditPA_PDS_DriverSupportEngineStartdata);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTavailability, mCEditPA_PDS_DriverSupportEngineStartavailability);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEvalue, mCEditPA_PDS_DriverSupportPrplModevalue);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEreserve, mCEditPA_PDS_DriverSupportPrplModereserve);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEdata, mCEditPA_PDS_DriverSupportPrplModedata);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEavailability, mCEditPA_PDS_DriverSupportPrplModeavailability);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANvalue, mCEditPA_PDS_DriverSupportAvailableRaganvalue);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANreserve, mCEditPA_PDS_DriverSupportAvailableRaganreserve);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANdata, mCEditPA_PDS_DriverSupportAvailableRagandata);
	DDX_Control(pDX, IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANavailability, mCEditPA_PDS_DriverSupportAvailableRaganavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_BSGPOWERREGENERATIONvalue, mCEditPA_DIM_BSGPowerRegenerationvalue);
	DDX_Control(pDX, IDC_EDITPA_DIM_BSGPOWERREGENERATIONreserve, mCEditPA_DIM_BSGPowerRegenerationreserve);
	DDX_Control(pDX, IDC_EDITPA_DIM_BSGPOWERREGENERATIONavailability, mCEditPA_DIM_BSGPowerRegenerationavailability);
	DDX_Control(pDX, IDC_EDITPA_ES_ENGSPEEDINDICATEDdata, mCEditPA_ES_EngSpeedIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_ES_ENGSPEEDINDICATEDformat, mCEditPA_ES_EngSpeedIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_ES_ENGSPEEDINDICATEDavailability, mCEditPA_ES_EngSpeedIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_ES_MAXENGSPEEDINDICATEDdata, mCEditPA_ES_MaxEngSpeedIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_ES_MAXENGSPEEDINDICATEDreserve_1, mCEditPA_ES_MaxEngSpeedIndicatedreserve_1);
	DDX_Control(pDX, IDC_EDITPA_ES_MAXENGSPEEDINDICATEDreserve_2, mCEditPA_ES_MaxEngSpeedIndicatedreserve_2);
	DDX_Control(pDX, IDC_EDITPA_ES_MAXENGSPEEDINDICATEDavailability, mCEditPA_ES_MaxEngSpeedIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONdata, mCEditPA_DIM_EngineCoolantTemperatureLevelIndicationdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONvalues, mCEditPA_DIM_EngineCoolantTemperatureLevelIndicationvalues);
	DDX_Control(pDX, IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONcolor, mCEditPA_DIM_EngineCoolantTemperatureLevelIndicationcolor);
	DDX_Control(pDX, IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONavailability, mCEditPA_DIM_EngineCoolantTemperatureLevelIndicationavailability);
	DDX_Control(pDX, IDC_EDITPA_FL_FUELLEVELINDICATEDData, mCEditPA_FL_FuelLevelIndicatedData);
	DDX_Control(pDX, IDC_EDITPA_FL_FUELLEVELINDICATEDAvailability, mCEditPA_FL_FuelLevelIndicatedAvailability);
	DDX_Control(pDX, IDC_EDITPA_FL_FUELLEVELINDICATEDStatus, mCEditPA_FL_FuelLevelIndicatedStatus);
	DDX_Control(pDX, IDC_EDITPA_FL_LOWFUELWARNINGLAMPData, mCEditPA_FL_LowFuelWarningLampData);
	DDX_Control(pDX, IDC_EDITPA_FL_LOWFUELWARNINGLAMPAvailability, mCEditPA_FL_LowFuelWarningLampAvailability);
	DDX_Control(pDX, IDC_EDITPA_GFR_LONGData, mCEditPA_GFR_LongData);
	DDX_Control(pDX, IDC_EDITPA_GFR_LONGStatus, mCEditPA_GFR_LongStatus);
	DDX_Control(pDX, IDC_EDITPA_GFR_LONGAvailability, mCEditPA_GFR_LongAvailability);
	DDX_Control(pDX, IDC_EDITPA_GFR_ACC_VALUEData, mCEditPA_GFR_Acc_ValueData);
	DDX_Control(pDX, IDC_EDITPA_GFR_ACC_VALUEAvailability, mCEditPA_GFR_Acc_ValueAvailability);
	DDX_Control(pDX, IDC_EDITPA_GFR_BRAKE_VALUEData, mCEditPA_GFR_Brake_ValueData);
	DDX_Control(pDX, IDC_EDITPA_GFR_BRAKE_VALUEAvailability, mCEditPA_GFR_Brake_ValueAvailability);
	DDX_Control(pDX, IDC_EDITPA_GFR_LATData, mCEditPA_GFR_LatData);
	DDX_Control(pDX, IDC_EDITPA_GFR_LATStatus, mCEditPA_GFR_LatStatus);
	DDX_Control(pDX, IDC_EDITPA_GFR_LATAvailability, mCEditPA_GFR_LatAvailability);
	DDX_Control(pDX, IDC_EDITPA_GFR_RIGHT_VALUEData, mCEditPA_GFR_Right_ValueData);
	DDX_Control(pDX, IDC_EDITPA_GFR_RIGHT_VALUEAvailability, mCEditPA_GFR_Right_ValueAvailability);
	DDX_Control(pDX, IDC_EDITPA_GFR_LEFT_VALUEData, mCEditPA_GFR_Left_ValueData);
	DDX_Control(pDX, IDC_EDITPA_GFR_LEFT_VALUEAvailability, mCEditPA_GFR_Left_ValueAvailability);
}


BEGIN_MESSAGE_MAP(pa_gauge0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_gauge0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_gauge0Dlg message handlers
BOOL pa_gauge0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDINDICATEDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDINDICATEDdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDINDICATEDstatus);
			UINT format = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDINDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDINDICATEDavailability);
			WriteDatToCom("PA_VS_VehicleSpeedIndicated",4, data, status, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDDIGITALdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDDIGITALstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDDIGITALformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDDIGITALavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDDIGITALdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDDIGITALstatus);
			UINT format = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDDIGITALformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDDIGITALavailability);
			WriteDatToCom("PA_VS_VehicleSpeedDigital",4, data, status, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXstatus);
			UINT format = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_VS_VEHICLESPEEDEXTENDEDCHECKBOXavailability);
			WriteDatToCom("PA_VS_VehicleSpeedExtendedCheckbox",4, data, status, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONlevel)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONdata);
			UINT status = GetDlgItemInt(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONstatus);
			UINT level = GetDlgItemInt(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONlevel);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BLI_HVBATTLEVELINDICATIONavailability);
			WriteDatToCom("PA_BLI_HVBattLevelIndication",5, data, status, level, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDvalue);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDreserve);
			UINT data = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTINDICATEDavailability);
			WriteDatToCom("PA_PDS_DriverSupportIndicated",4, value, reserve, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTvalue);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTreserve);
			UINT data = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTENGINESTARTavailability);
			WriteDatToCom("PA_PDS_DriverSupportEngineStart",4, value, reserve, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEvalue);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEreserve);
			UINT data = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTPRPLMODEavailability);
			WriteDatToCom("PA_PDS_DriverSupportPrplMode",4, value, reserve, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANvalue);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANreserve);
			UINT data = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_PDS_DRIVERSUPPORTAVAILABLERAGANavailability);
			WriteDatToCom("PA_PDS_DriverSupportAvailableRagan",4, value, reserve, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_BSGPOWERREGENERATIONvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_BSGPOWERREGENERATIONreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_BSGPOWERREGENERATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DIM_BSGPOWERREGENERATIONvalue);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_DIM_BSGPOWERREGENERATIONreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_BSGPOWERREGENERATIONavailability);
			WriteDatToCom("PA_DIM_BSGPowerRegeneration",3, value, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ES_ENGSPEEDINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ES_ENGSPEEDINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ES_ENGSPEEDINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ES_ENGSPEEDINDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_ES_ENGSPEEDINDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ES_ENGSPEEDINDICATEDavailability);
			WriteDatToCom("PA_ES_EngSpeedIndicated",3, data, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ES_MAXENGSPEEDINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ES_MAXENGSPEEDINDICATEDreserve_1)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ES_MAXENGSPEEDINDICATEDreserve_2)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ES_MAXENGSPEEDINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ES_MAXENGSPEEDINDICATEDdata);
			UINT reserve_1 = GetDlgItemInt(IDC_EDITPA_ES_MAXENGSPEEDINDICATEDreserve_1);
			UINT reserve_2 = GetDlgItemInt(IDC_EDITPA_ES_MAXENGSPEEDINDICATEDreserve_2);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ES_MAXENGSPEEDINDICATEDavailability);
			WriteDatToCom("PA_ES_MaxEngSpeedIndicated",4, data, reserve_1, reserve_2, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONvalues)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONcolor)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONdata);
			UINT values = GetDlgItemInt(IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONvalues);
			UINT color = GetDlgItemInt(IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONcolor);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_ENGINECOOLANTTEMPERATURELEVELINDICATIONavailability);
			WriteDatToCom("PA_DIM_EngineCoolantTemperatureLevelIndication",4, data, values, color, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FL_FUELLEVELINDICATEDData)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FL_FUELLEVELINDICATEDAvailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FL_FUELLEVELINDICATEDStatus)
			)
		{
				UpdateData(TRUE);
			UINT Data = GetDlgItemInt(IDC_EDITPA_FL_FUELLEVELINDICATEDData);
			UINT Availability = GetDlgItemInt(IDC_EDITPA_FL_FUELLEVELINDICATEDAvailability);
			UINT Status = GetDlgItemInt(IDC_EDITPA_FL_FUELLEVELINDICATEDStatus);
			WriteDatToCom("PA_FL_FuelLevelIndicated",3, Data, Availability, Status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FL_LOWFUELWARNINGLAMPData)
			||GetFocus() == GetDlgItem(IDC_EDITPA_FL_LOWFUELWARNINGLAMPAvailability)
			)
		{
				UpdateData(TRUE);
			UINT Data = GetDlgItemInt(IDC_EDITPA_FL_LOWFUELWARNINGLAMPData);
			UINT Availability = GetDlgItemInt(IDC_EDITPA_FL_LOWFUELWARNINGLAMPAvailability);
			WriteDatToCom("PA_FL_LowFuelWarningLamp",2, Data, Availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GFR_LONGData)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GFR_LONGStatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GFR_LONGAvailability)
			)
		{
				UpdateData(TRUE);
			UINT Data = GetDlgItemInt(IDC_EDITPA_GFR_LONGData);
			UINT Status = GetDlgItemInt(IDC_EDITPA_GFR_LONGStatus);
			UINT Availability = GetDlgItemInt(IDC_EDITPA_GFR_LONGAvailability);
			WriteDatToCom("PA_GFR_Long",3, Data, Status, Availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GFR_ACC_VALUEData)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GFR_ACC_VALUEAvailability)
			)
		{
				UpdateData(TRUE);
			UINT Data = GetDlgItemInt(IDC_EDITPA_GFR_ACC_VALUEData);
			UINT Availability = GetDlgItemInt(IDC_EDITPA_GFR_ACC_VALUEAvailability);
			WriteDatToCom("PA_GFR_Acc_Value",2, Data, Availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GFR_BRAKE_VALUEData)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GFR_BRAKE_VALUEAvailability)
			)
		{
				UpdateData(TRUE);
			UINT Data = GetDlgItemInt(IDC_EDITPA_GFR_BRAKE_VALUEData);
			UINT Availability = GetDlgItemInt(IDC_EDITPA_GFR_BRAKE_VALUEAvailability);
			WriteDatToCom("PA_GFR_Brake_Value",2, Data, Availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GFR_LATData)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GFR_LATStatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GFR_LATAvailability)
			)
		{
				UpdateData(TRUE);
			UINT Data = GetDlgItemInt(IDC_EDITPA_GFR_LATData);
			UINT Status = GetDlgItemInt(IDC_EDITPA_GFR_LATStatus);
			UINT Availability = GetDlgItemInt(IDC_EDITPA_GFR_LATAvailability);
			WriteDatToCom("PA_GFR_Lat",3, Data, Status, Availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GFR_RIGHT_VALUEData)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GFR_RIGHT_VALUEAvailability)
			)
		{
				UpdateData(TRUE);
			UINT Data = GetDlgItemInt(IDC_EDITPA_GFR_RIGHT_VALUEData);
			UINT Availability = GetDlgItemInt(IDC_EDITPA_GFR_RIGHT_VALUEAvailability);
			WriteDatToCom("PA_GFR_Right_Value",2, Data, Availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_GFR_LEFT_VALUEData)
			||GetFocus() == GetDlgItem(IDC_EDITPA_GFR_LEFT_VALUEAvailability)
			)
		{
				UpdateData(TRUE);
			UINT Data = GetDlgItemInt(IDC_EDITPA_GFR_LEFT_VALUEData);
			UINT Availability = GetDlgItemInt(IDC_EDITPA_GFR_LEFT_VALUEAvailability);
			WriteDatToCom("PA_GFR_Left_Value",2, Data, Availability);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
