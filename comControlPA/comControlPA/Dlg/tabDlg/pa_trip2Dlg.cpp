// pa_trip2Dlg.cpp : implementation file
//

// pa_trip2Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_trip2Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_trip2Dlg, CDialog)

pa_trip2Dlg::pa_trip2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_TRIP2, pParent)
{

}

pa_trip2Dlg::~pa_trip2Dlg()
{
}

void pa_trip2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGBATTLOSTdata, mCEditPA_LeReTireMsgBattLoStdata);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGBATTLOSTtimeout, mCEditPA_LeReTireMsgBattLoSttimeout);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGBATTLOSTdata, mCEditPA_RiFrntTireMsgBattLoStdata);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGBATTLOSTtimeout, mCEditPA_RiFrntTireMsgBattLoSttimeout);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGBATTLOSTdata, mCEditPA_RiReTireMsgBattLoStdata);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGBATTLOSTtimeout, mCEditPA_RiReTireMsgBattLoSttimeout);
	DDX_Control(pDX, IDC_EDITPA_CI_TIMEANDDATEINDICATEDyear, mCEditPA_CI_TimeAndDateIndicatedyear);
	DDX_Control(pDX, IDC_EDITPA_CI_TIMEANDDATEINDICATEDmonth, mCEditPA_CI_TimeAndDateIndicatedmonth);
	DDX_Control(pDX, IDC_EDITPA_CI_TIMEANDDATEINDICATEDday, mCEditPA_CI_TimeAndDateIndicatedday);
	DDX_Control(pDX, IDC_EDITPA_CI_TIMEANDDATEINDICATEDhour, mCEditPA_CI_TimeAndDateIndicatedhour);
	DDX_Control(pDX, IDC_EDITPA_CI_TIMEANDDATEINDICATEDminute, mCEditPA_CI_TimeAndDateIndicatedminute);
	DDX_Control(pDX, IDC_EDITPA_CI_TIMEANDDATEINDICATEDsecond, mCEditPA_CI_TimeAndDateIndicatedsecond);
	DDX_Control(pDX, IDC_EDITPA_CI_TIMEANDDATEINDICATEDformat, mCEditPA_CI_TimeAndDateIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_CI_TIMEANDDATEINDICATEDavailability, mCEditPA_CI_TimeAndDateIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_ACCHARGINGAVAILABLEvalue, mCEditPA_TC_ACChargingAvailablevalue);
	DDX_Control(pDX, IDC_EDITPA_TC_DISPHVBATTLVLOFCHRGvalue, mCEditPA_TC_DispHvBattLvlOfChrgvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_ONBDCHRGRIACTvalue, mCEditPA_TC_OnBdChrgrIActvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_ONBDCHRGRUACTvalue, mCEditPA_TC_OnBdChrgrUActvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_CHRGNSPDvalue, mCEditPA_TC_ChrgnSpdvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_HVBATTCHRGNTIESTIMDvalue, mCEditPA_TC_HvBattChrgnTiEstimdvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_ONBDCHRGRHNDLSTS1value, mCEditPA_TC_OnBdChrgrHndlSts1value);
	DDX_Control(pDX, IDC_EDITPA_TC_DCCHRGNHNDLSTSvalue, mCEditPA_TC_DCChrgnHndlStsvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_CHRGNORDISCHRGNSTSFBvalue, mCEditPA_TC_ChrgnOrDisChrgnStsFbvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_DCCHRGSTvalue, mCEditPA_TC_DCChrgStvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_DCCHARGINGAVAILABLEvalue, mCEditPA_TC_DCChargingAvailablevalue);
	DDX_Control(pDX, IDC_EDITPA_TC_HVBATTIDC1value, mCEditPA_TC_HvBattIDc1value);
	DDX_Control(pDX, IDC_EDITPA_TC_HVBATTUDCvalue, mCEditPA_TC_HvBattUDcvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_DISCHARGINGAVAILABLEvalue, mCEditPA_TC_DischargingAvailablevalue);
	DDX_Control(pDX, IDC_EDITPA_TC_DCHAIACTvalue, mCEditPA_TC_DchaIActvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_DCHAUACTvalue, mCEditPA_TC_DchaUActvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_HVBATTDCHATIESTIMDvalue, mCEditPA_TC_HvBattDchaTiEstimdvalue);
	DDX_Control(pDX, IDC_EDITPA_TC_DCHAEGYACTvalue, mCEditPA_TC_DchaEgyActvalue);
	DDX_Control(pDX, IDC_EDITPA_ONBDCHRGRSTvalue, mCEditPA_OnBdChrgrStvalue);
	DDX_Control(pDX, IDC_EDITPA_ONBDCHRGRSTub, mCEditPA_OnBdChrgrStub);
	DDX_Control(pDX, IDC_EDITPA_ONBDCHRGRSTtimeout, mCEditPA_OnBdChrgrSttimeout);
	DDX_Control(pDX, IDC_EDITPA_BOOKCHARGESETRESPONSEvalue, mCEditPA_BookChargeSetResponsevalue);
	DDX_Control(pDX, IDC_EDITPA_BOOKCHARGESETRESPONSEub, mCEditPA_BookChargeSetResponseub);
	DDX_Control(pDX, IDC_EDITPA_BOOKCHARGESETRESPONSEtimeout, mCEditPA_BookChargeSetResponsetimeout);
	DDX_Control(pDX, IDC_EDITPA_TC_DCHASTOPBYTARDRVRINDCNvalue, mCEditPA_TC_DchaStopByTarDrvrIndcnvalue);
	DDX_Control(pDX, IDC_EDITPA_COLOR_HVBATTSOCdata, mCEditPA_Color_HVBattSOCdata);
	DDX_Control(pDX, IDC_EDITPA_COLOR_HVBATTSOCavailability, mCEditPA_Color_HVBattSOCavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_STATEOFCHARGEdata, mCEditPA_DIM_StateOfChargedata);
	DDX_Control(pDX, IDC_EDITPA_DIM_STATEOFCHARGEformat, mCEditPA_DIM_StateOfChargeformat);
	DDX_Control(pDX, IDC_EDITPA_DIM_STATEOFCHARGEstatus, mCEditPA_DIM_StateOfChargestatus);
	DDX_Control(pDX, IDC_EDITPA_DIM_STATEOFCHARGEavailability, mCEditPA_DIM_StateOfChargeavailability);
	DDX_Control(pDX, IDC_EDITPA_TR_TURBOPRESSUREINDICATEDdata, mCEditPA_TR_TurboPressureIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_TR_TURBOPRESSUREINDICATEDformat, mCEditPA_TR_TurboPressureIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TR_TURBOPRESSUREINDICATEDavailability, mCEditPA_TR_TurboPressureIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDdata, mCEditPA_TR_MaxTurboPressureIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDformat, mCEditPA_TR_MaxTurboPressureIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDavailability, mCEditPA_TR_MaxTurboPressureIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_EC_ECOMETERdata, mCEditPA_EC_EcoMeterdata);
	DDX_Control(pDX, IDC_EDITPA_EC_ECOMETERavailability, mCEditPA_EC_EcoMeteravailability);
	DDX_Control(pDX, IDC_EDITPA_EC_ECOGRADEdata, mCEditPA_EC_EcoGradedata);
	DDX_Control(pDX, IDC_EDITPA_EC_ECOGRADEavailability, mCEditPA_EC_EcoGradeavailability);
	DDX_Control(pDX, IDC_EDITPA_REWARDMILEAGEdata, mCEditPA_RewardMileagedata);
	DDX_Control(pDX, IDC_EDITPA_REWARDMILEAGEformat, mCEditPA_RewardMileageformat);
	DDX_Control(pDX, IDC_EDITPA_REWARDMILEAGEtimeout, mCEditPA_RewardMileagetimeout);
	DDX_Control(pDX, IDC_EDITPA_REWARDMILEAGEavailability, mCEditPA_RewardMileageavailability);
}


BEGIN_MESSAGE_MAP(pa_trip2Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_trip2Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_trip2Dlg message handlers
BOOL pa_trip2Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGBATTLOSTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGBATTLOSTtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LERETIREMSGBATTLOSTdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LERETIREMSGBATTLOSTtimeout);
			WriteDatToCom("PA_LeReTireMsgBattLoSt",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGBATTLOSTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGBATTLOSTtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGBATTLOSTdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGBATTLOSTtimeout);
			WriteDatToCom("PA_RiFrntTireMsgBattLoSt",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGBATTLOSTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGBATTLOSTtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGBATTLOSTdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGBATTLOSTtimeout);
			WriteDatToCom("PA_RiReTireMsgBattLoSt",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CI_TIMEANDDATEINDICATEDyear)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CI_TIMEANDDATEINDICATEDmonth)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CI_TIMEANDDATEINDICATEDday)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CI_TIMEANDDATEINDICATEDhour)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CI_TIMEANDDATEINDICATEDminute)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CI_TIMEANDDATEINDICATEDsecond)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CI_TIMEANDDATEINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CI_TIMEANDDATEINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT year = GetDlgItemInt(IDC_EDITPA_CI_TIMEANDDATEINDICATEDyear);
			UINT month = GetDlgItemInt(IDC_EDITPA_CI_TIMEANDDATEINDICATEDmonth);
			UINT day = GetDlgItemInt(IDC_EDITPA_CI_TIMEANDDATEINDICATEDday);
			UINT hour = GetDlgItemInt(IDC_EDITPA_CI_TIMEANDDATEINDICATEDhour);
			UINT minute = GetDlgItemInt(IDC_EDITPA_CI_TIMEANDDATEINDICATEDminute);
			UINT second = GetDlgItemInt(IDC_EDITPA_CI_TIMEANDDATEINDICATEDsecond);
			UINT format = GetDlgItemInt(IDC_EDITPA_CI_TIMEANDDATEINDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_CI_TIMEANDDATEINDICATEDavailability);
			WriteDatToCom("PA_CI_TimeAndDateIndicated",8, year, month, day, hour, minute, second, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_ACCHARGINGAVAILABLEvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_ACCHARGINGAVAILABLEvalue);
			WriteDatToCom("PA_TC_ACChargingAvailable",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DISPHVBATTLVLOFCHRGvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DISPHVBATTLVLOFCHRGvalue);
			WriteDatToCom("PA_TC_DispHvBattLvlOfChrg",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_ONBDCHRGRIACTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_ONBDCHRGRIACTvalue);
			WriteDatToCom("PA_TC_OnBdChrgrIAct",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_ONBDCHRGRUACTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_ONBDCHRGRUACTvalue);
			WriteDatToCom("PA_TC_OnBdChrgrUAct",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_CHRGNSPDvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_CHRGNSPDvalue);
			WriteDatToCom("PA_TC_ChrgnSpd",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_HVBATTCHRGNTIESTIMDvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_HVBATTCHRGNTIESTIMDvalue);
			WriteDatToCom("PA_TC_HvBattChrgnTiEstimd",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_ONBDCHRGRHNDLSTS1value)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_ONBDCHRGRHNDLSTS1value);
			WriteDatToCom("PA_TC_OnBdChrgrHndlSts1",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DCCHRGNHNDLSTSvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DCCHRGNHNDLSTSvalue);
			WriteDatToCom("PA_TC_DCChrgnHndlSts",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_CHRGNORDISCHRGNSTSFBvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_CHRGNORDISCHRGNSTSFBvalue);
			WriteDatToCom("PA_TC_ChrgnOrDisChrgnStsFb",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DCCHRGSTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DCCHRGSTvalue);
			WriteDatToCom("PA_TC_DCChrgSt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DCCHARGINGAVAILABLEvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DCCHARGINGAVAILABLEvalue);
			WriteDatToCom("PA_TC_DCChargingAvailable",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_HVBATTIDC1value)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_HVBATTIDC1value);
			WriteDatToCom("PA_TC_HvBattIDc1",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_HVBATTUDCvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_HVBATTUDCvalue);
			WriteDatToCom("PA_TC_HvBattUDc",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DISCHARGINGAVAILABLEvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DISCHARGINGAVAILABLEvalue);
			WriteDatToCom("PA_TC_DischargingAvailable",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DCHAIACTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DCHAIACTvalue);
			WriteDatToCom("PA_TC_DchaIAct",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DCHAUACTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DCHAUACTvalue);
			WriteDatToCom("PA_TC_DchaUAct",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_HVBATTDCHATIESTIMDvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_HVBATTDCHATIESTIMDvalue);
			WriteDatToCom("PA_TC_HvBattDchaTiEstimd",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DCHAEGYACTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DCHAEGYACTvalue);
			WriteDatToCom("PA_TC_DchaEgyAct",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ONBDCHRGRSTvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ONBDCHRGRSTub)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ONBDCHRGRSTtimeout)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_ONBDCHRGRSTvalue);
			UINT ub = GetDlgItemInt(IDC_EDITPA_ONBDCHRGRSTub);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_ONBDCHRGRSTtimeout);
			WriteDatToCom("PA_OnBdChrgrSt",3, value, ub, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BOOKCHARGESETRESPONSEvalue)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BOOKCHARGESETRESPONSEub)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BOOKCHARGESETRESPONSEtimeout)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_BOOKCHARGESETRESPONSEvalue);
			UINT ub = GetDlgItemInt(IDC_EDITPA_BOOKCHARGESETRESPONSEub);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_BOOKCHARGESETRESPONSEtimeout);
			WriteDatToCom("PA_BookChargeSetResponse",3, value, ub, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DCHASTOPBYTARDRVRINDCNvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TC_DCHASTOPBYTARDRVRINDCNvalue);
			WriteDatToCom("PA_TC_DchaStopByTarDrvrIndcn",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_COLOR_HVBATTSOCdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_COLOR_HVBATTSOCavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_COLOR_HVBATTSOCdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_COLOR_HVBATTSOCavailability);
			WriteDatToCom("PA_Color_HVBattSOC",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_STATEOFCHARGEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_STATEOFCHARGEformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_STATEOFCHARGEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_STATEOFCHARGEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_STATEOFCHARGEdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_DIM_STATEOFCHARGEformat);
			UINT status = GetDlgItemInt(IDC_EDITPA_DIM_STATEOFCHARGEstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_STATEOFCHARGEavailability);
			WriteDatToCom("PA_DIM_StateOfCharge",4, data, format, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TR_TURBOPRESSUREINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TR_TURBOPRESSUREINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TR_TURBOPRESSUREINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TR_TURBOPRESSUREINDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TR_TURBOPRESSUREINDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TR_TURBOPRESSUREINDICATEDavailability);
			WriteDatToCom("PA_TR_TurboPressureIndicated",3, data, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TR_MAXTURBOPRESSUREINDICATEDavailability);
			WriteDatToCom("PA_TR_MaxTurboPressureIndicated",3, data, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EC_ECOMETERdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_EC_ECOMETERavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_EC_ECOMETERdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_EC_ECOMETERavailability);
			WriteDatToCom("PA_EC_EcoMeter",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_EC_ECOGRADEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_EC_ECOGRADEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_EC_ECOGRADEdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_EC_ECOGRADEavailability);
			WriteDatToCom("PA_EC_EcoGrade",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_REWARDMILEAGEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_REWARDMILEAGEformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_REWARDMILEAGEtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_REWARDMILEAGEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_REWARDMILEAGEdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_REWARDMILEAGEformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_REWARDMILEAGEtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_REWARDMILEAGEavailability);
			WriteDatToCom("PA_RewardMileage",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
