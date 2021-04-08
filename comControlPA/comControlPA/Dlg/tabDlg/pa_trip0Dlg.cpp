// pa_trip0Dlg.cpp : implementation file
//

// pa_trip0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_trip0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_trip0Dlg, CDialog)

pa_trip0Dlg::pa_trip0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_TRIP0, pParent)
{

}

pa_trip0Dlg::~pa_trip0Dlg()
{
}

void pa_trip0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_DGS_GEARLVRINDCNdata, mCEditPA_DGS_GearLvrIndcndata);
	DDX_Control(pDX, IDC_EDITPA_DGS_GEARLVRINDCNavailability, mCEditPA_DGS_GearLvrIndcnavailability);
	DDX_Control(pDX, IDC_EDITPA_DGS_GEARINDCNdata, mCEditPA_DGS_GearIndcndata);
	DDX_Control(pDX, IDC_EDITPA_DGS_GEARINDCNavailability, mCEditPA_DGS_GearIndcnavailability);
	DDX_Control(pDX, IDC_EDITPA_DGS_GEARSHIFTINDCNdata, mCEditPA_DGS_GearShiftIndcndata);
	DDX_Control(pDX, IDC_EDITPA_DGS_GEARSHIFTINDCNavailability, mCEditPA_DGS_GearShiftIndcnavailability);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERINDICATEDdata, mCEditPA_DD_OdometerIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERINDICATEDformat, mCEditPA_DD_OdometerIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERINDICATEDstatus, mCEditPA_DD_OdometerIndicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERINDICATEDavailability, mCEditPA_DD_OdometerIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERTRIPMETER1data, mCEditPA_DD_OdometerTripMeter1data);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERTRIPMETER1format, mCEditPA_DD_OdometerTripMeter1format);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERTRIPMETER1status, mCEditPA_DD_OdometerTripMeter1status);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERTRIPMETER1availability, mCEditPA_DD_OdometerTripMeter1availability);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERTRIPMETER2data, mCEditPA_DD_OdometerTripMeter2data);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERTRIPMETER2format, mCEditPA_DD_OdometerTripMeter2format);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERTRIPMETER2status, mCEditPA_DD_OdometerTripMeter2status);
	DDX_Control(pDX, IDC_EDITPA_DD_ODOMETERTRIPMETER2availability, mCEditPA_DD_OdometerTripMeter2availability);
	DDX_Control(pDX, IDC_EDITPA_DD_TRIPMETERRADIOBUTTONdata, mCEditPA_DD_TripMeterRadioButtondata);
	DDX_Control(pDX, IDC_EDITPA_DD_TRIPMETERRADIOBUTTONformat, mCEditPA_DD_TripMeterRadioButtonformat);
	DDX_Control(pDX, IDC_EDITPA_DD_TRIPMETERRADIOBUTTONstatus, mCEditPA_DD_TripMeterRadioButtonstatus);
	DDX_Control(pDX, IDC_EDITPA_DD_TRIPMETERRADIOBUTTONavailability, mCEditPA_DD_TripMeterRadioButtonavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEHVBATTINDICATEDdata, mCEditPA_TC_DTEHVBattIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEHVBATTINDICATEDformat, mCEditPA_TC_DTEHVBattIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEHVBATTINDICATEDavailability, mCEditPA_TC_DTEHVBattIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEHVBATTINDICATEDstatus, mCEditPA_TC_DTEHVBattIndicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_EDT1INDICATEDdata, mCEditPA_TC_EDT1Indicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_EDT1INDICATEDavailability, mCEditPA_TC_EDT1Indicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_EDT1INDICATEDstatus, mCEditPA_TC_EDT1Indicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_EDT2INDICATEDdata, mCEditPA_TC_EDT2Indicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_EDT2INDICATEDavailability, mCEditPA_TC_EDT2Indicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_EDT2INDICATEDstatus, mCEditPA_TC_EDT2Indicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_AVS1INDICATEDdata, mCEditPA_TC_AVS1Indicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_AVS1INDICATEDformat, mCEditPA_TC_AVS1Indicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_AVS1INDICATEDavailability, mCEditPA_TC_AVS1Indicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_AVS1INDICATEDstatus, mCEditPA_TC_AVS1Indicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_AVS2INDICATEDdata, mCEditPA_TC_AVS2Indicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_AVS2INDICATEDformat, mCEditPA_TC_AVS2Indicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_AVS2INDICATEDavailability, mCEditPA_TC_AVS2Indicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_AVS2INDICATEDstatus, mCEditPA_TC_AVS2Indicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_AEC1INDICATEDdata, mCEditPA_TC_AEC1Indicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_AEC1INDICATEDformat, mCEditPA_TC_AEC1Indicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_AEC1INDICATEDavailability, mCEditPA_TC_AEC1Indicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_AEC1INDICATEDstatus, mCEditPA_TC_AEC1Indicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_AEC2INDICATEDdata, mCEditPA_TC_AEC2Indicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_AEC2INDICATEDformat, mCEditPA_TC_AEC2Indicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_AEC2INDICATEDavailability, mCEditPA_TC_AEC2Indicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_AEC2INDICATEDstatus, mCEditPA_TC_AEC2Indicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_IECINDICATEDdata, mCEditPA_TC_IECIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_IECINDICATEDformat, mCEditPA_TC_IECIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_IECINDICATEDavailability, mCEditPA_TC_IECIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_IECINDICATEDstatus, mCEditPA_TC_IECIndicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_ZERO_EMISSIONdata, mCEditPA_TC_Zero_Emissiondata);
	DDX_Control(pDX, IDC_EDITPA_TC_ZERO_EMISSIONavailability, mCEditPA_TC_Zero_Emissionavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_ZERO_EMISSIONstatus, mCEditPA_TC_Zero_Emissionstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEINDICATEDdata, mCEditPA_TC_DTEIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEINDICATEDformat, mCEditPA_TC_DTEIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEINDICATEDavailability, mCEditPA_TC_DTEIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEINDICATEDstatus, mCEditPA_TC_DTEIndicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_DTEINDICATEDtriggered, mCEditPA_TC_DTEIndicatedtriggered);
	DDX_Control(pDX, IDC_EDITPA_TC_AFC1INDICATEDdata, mCEditPA_TC_AFC1Indicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_AFC1INDICATEDformat, mCEditPA_TC_AFC1Indicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_AFC1INDICATEDavailability, mCEditPA_TC_AFC1Indicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_AFC1INDICATEDstatus, mCEditPA_TC_AFC1Indicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_AFC2INDICATEDdata, mCEditPA_TC_AFC2Indicateddata);
	DDX_Control(pDX, IDC_EDITPA_TC_AFC2INDICATEDformat, mCEditPA_TC_AFC2Indicatedformat);
	DDX_Control(pDX, IDC_EDITPA_TC_AFC2INDICATEDavailability, mCEditPA_TC_AFC2Indicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_AFC2INDICATEDstatus, mCEditPA_TC_AFC2Indicatedstatus);
	DDX_Control(pDX, IDC_EDITPA_TC_IFCINDICATEDCALCdata, mCEditPA_TC_IFCIndicatedCalcdata);
	DDX_Control(pDX, IDC_EDITPA_TC_IFCINDICATEDCALCformat, mCEditPA_TC_IFCIndicatedCalcformat);
	DDX_Control(pDX, IDC_EDITPA_TC_IFCINDICATEDCALCavailability, mCEditPA_TC_IFCIndicatedCalcavailability);
	DDX_Control(pDX, IDC_EDITPA_TC_IFCINDICATEDCALCstatus, mCEditPA_TC_IFCIndicatedCalcstatus);
	DDX_Control(pDX, IDC_EDITPA_ZEROEMISSIONTIMEdata, mCEditPA_ZeroEmissionTimedata);
	DDX_Control(pDX, IDC_EDITPA_ZEROEMISSIONTIMEformat, mCEditPA_ZeroEmissionTimeformat);
	DDX_Control(pDX, IDC_EDITPA_ZEROEMISSIONTIMEavailability, mCEditPA_ZeroEmissionTimeavailability);
	DDX_Control(pDX, IDC_EDITPA_SAILINGTIMEdata, mCEditPA_SailingTimedata);
	DDX_Control(pDX, IDC_EDITPA_SAILINGTIMEformat, mCEditPA_SailingTimeformat);
	DDX_Control(pDX, IDC_EDITPA_SAILINGTIMEavailability, mCEditPA_SailingTimeavailability);
	DDX_Control(pDX, IDC_EDITPA_BOOSTTIMEdata, mCEditPA_BoostTimedata);
	DDX_Control(pDX, IDC_EDITPA_BOOSTTIMEformat, mCEditPA_BoostTimeformat);
	DDX_Control(pDX, IDC_EDITPA_BOOSTTIMEavailability, mCEditPA_BoostTimeavailability);
	DDX_Control(pDX, IDC_EDITPA_ECONOMICALMILEAGEdata, mCEditPA_EconomicalMileagedata);
	DDX_Control(pDX, IDC_EDITPA_ECONOMICALMILEAGEformat, mCEditPA_EconomicalMileageformat);
	DDX_Control(pDX, IDC_EDITPA_ECONOMICALMILEAGEavailability, mCEditPA_EconomicalMileageavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_PHEVPOWERFLOWINDICdata, mCEditPA_DIM_PHEVPowerFlowIndicdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_PHEVPOWERFLOWINDICavailability, mCEditPA_DIM_PHEVPowerFlowIndicavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_BEVPOWERFLOWINDICdata, mCEditPA_DIM_BEVPowerFlowIndicdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_BEVPOWERFLOWINDICavailability, mCEditPA_DIM_BEVPowerFlowIndicavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_BSGPOWERFLOWINDICdata, mCEditPA_DIM_BSGPowerFlowIndicdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_BSGPOWERFLOWINDICavailability, mCEditPA_DIM_BSGPowerFlowIndicavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_HEVPOWERFLOWINDICdata, mCEditPA_DIM_HEVPowerFlowIndicdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_HEVPOWERFLOWINDICavailability, mCEditPA_DIM_HEVPowerFlowIndicavailability);
	DDX_Control(pDX, IDC_EDITPA_ODT_TEMPINDICATEDdata, mCEditPA_ODT_TempIndicateddata);
	DDX_Control(pDX, IDC_EDITPA_ODT_TEMPINDICATEDformat, mCEditPA_ODT_TempIndicatedformat);
	DDX_Control(pDX, IDC_EDITPA_ODT_TEMPINDICATEDreserve, mCEditPA_ODT_TempIndicatedreserve);
	DDX_Control(pDX, IDC_EDITPA_ODT_TEMPINDICATEDavailability, mCEditPA_ODT_TempIndicatedavailability);
	DDX_Control(pDX, IDC_EDITPA_ODT_SNOWFLAKELITdata, mCEditPA_ODT_SnowFlakeLitdata);
	DDX_Control(pDX, IDC_EDITPA_ODT_SNOWFLAKELITformat, mCEditPA_ODT_SnowFlakeLitformat);
	DDX_Control(pDX, IDC_EDITPA_ODT_SNOWFLAKELITreserve, mCEditPA_ODT_SnowFlakeLitreserve);
	DDX_Control(pDX, IDC_EDITPA_ODT_SNOWFLAKELITavailability, mCEditPA_ODT_SnowFlakeLitavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_USAGE_MODEdata, mCEditPA_DIM_USAGE_MODEdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_USAGE_MODEavailability, mCEditPA_DIM_USAGE_MODEavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_GPILOTDISPLAYdata, mCEditPA_DIM_GpilotDisplaydata);
	DDX_Control(pDX, IDC_EDITPA_DIM_GPILOTDISPLAYavailability, mCEditPA_DIM_GpilotDisplayavailability);
}


BEGIN_MESSAGE_MAP(pa_trip0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_trip0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_trip0Dlg message handlers
BOOL pa_trip0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DGS_GEARLVRINDCNdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DGS_GEARLVRINDCNavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DGS_GEARLVRINDCNdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DGS_GEARLVRINDCNavailability);
			WriteDatToCom("PA_DGS_GearLvrIndcn",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DGS_GEARINDCNdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DGS_GEARINDCNavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DGS_GEARINDCNdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DGS_GEARINDCNavailability);
			WriteDatToCom("PA_DGS_GearIndcn",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DGS_GEARSHIFTINDCNdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DGS_GEARSHIFTINDCNavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DGS_GEARSHIFTINDCNdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DGS_GEARSHIFTINDCNavailability);
			WriteDatToCom("PA_DGS_GearShiftIndcn",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERINDICATEDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERINDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERINDICATEDformat);
			UINT status = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERINDICATEDstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERINDICATEDavailability);
			WriteDatToCom("PA_DD_OdometerIndicated",4, data, format, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERTRIPMETER1data)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERTRIPMETER1format)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERTRIPMETER1status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERTRIPMETER1availability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERTRIPMETER1data);
			UINT format = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERTRIPMETER1format);
			UINT status = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERTRIPMETER1status);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERTRIPMETER1availability);
			WriteDatToCom("PA_DD_OdometerTripMeter1",4, data, format, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERTRIPMETER2data)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERTRIPMETER2format)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERTRIPMETER2status)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_ODOMETERTRIPMETER2availability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERTRIPMETER2data);
			UINT format = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERTRIPMETER2format);
			UINT status = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERTRIPMETER2status);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DD_ODOMETERTRIPMETER2availability);
			WriteDatToCom("PA_DD_OdometerTripMeter2",4, data, format, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DD_TRIPMETERRADIOBUTTONdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_TRIPMETERRADIOBUTTONformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_TRIPMETERRADIOBUTTONstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DD_TRIPMETERRADIOBUTTONavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DD_TRIPMETERRADIOBUTTONdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_DD_TRIPMETERRADIOBUTTONformat);
			UINT status = GetDlgItemInt(IDC_EDITPA_DD_TRIPMETERRADIOBUTTONstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DD_TRIPMETERRADIOBUTTONavailability);
			WriteDatToCom("PA_DD_TripMeterRadioButton",4, data, format, status, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEHVBATTINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEHVBATTINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEHVBATTINDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEHVBATTINDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_DTEHVBATTINDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_DTEHVBATTINDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_DTEHVBATTINDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_DTEHVBATTINDICATEDstatus);
			WriteDatToCom("PA_TC_DTEHVBattIndicated",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_EDT1INDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_EDT1INDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_EDT1INDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_EDT1INDICATEDdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_EDT1INDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_EDT1INDICATEDstatus);
			WriteDatToCom("PA_TC_EDT1Indicated",3, data, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_EDT2INDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_EDT2INDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_EDT2INDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_EDT2INDICATEDdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_EDT2INDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_EDT2INDICATEDstatus);
			WriteDatToCom("PA_TC_EDT2Indicated",3, data, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_AVS1INDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AVS1INDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AVS1INDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AVS1INDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_AVS1INDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_AVS1INDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_AVS1INDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_AVS1INDICATEDstatus);
			WriteDatToCom("PA_TC_AVS1Indicated",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_AVS2INDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AVS2INDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AVS2INDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AVS2INDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_AVS2INDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_AVS2INDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_AVS2INDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_AVS2INDICATEDstatus);
			WriteDatToCom("PA_TC_AVS2Indicated",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_AEC1INDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AEC1INDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AEC1INDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AEC1INDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_AEC1INDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_AEC1INDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_AEC1INDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_AEC1INDICATEDstatus);
			WriteDatToCom("PA_TC_AEC1Indicated",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_AEC2INDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AEC2INDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AEC2INDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AEC2INDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_AEC2INDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_AEC2INDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_AEC2INDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_AEC2INDICATEDstatus);
			WriteDatToCom("PA_TC_AEC2Indicated",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_IECINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_IECINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_IECINDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_IECINDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_IECINDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_IECINDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_IECINDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_IECINDICATEDstatus);
			WriteDatToCom("PA_TC_IECIndicated",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_ZERO_EMISSIONdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_ZERO_EMISSIONavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_ZERO_EMISSIONstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_ZERO_EMISSIONdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_ZERO_EMISSIONavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_ZERO_EMISSIONstatus);
			WriteDatToCom("PA_TC_Zero_Emission",3, data, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEINDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEINDICATEDstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_DTEINDICATEDtriggered)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_DTEINDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_DTEINDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_DTEINDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_DTEINDICATEDstatus);
			UINT triggered = GetDlgItemInt(IDC_EDITPA_TC_DTEINDICATEDtriggered);
			WriteDatToCom("PA_TC_DTEIndicated",5, data, format, availability, status, triggered);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_AFC1INDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AFC1INDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AFC1INDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AFC1INDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_AFC1INDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_AFC1INDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_AFC1INDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_AFC1INDICATEDstatus);
			WriteDatToCom("PA_TC_AFC1Indicated",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_AFC2INDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AFC2INDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AFC2INDICATEDavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_AFC2INDICATEDstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_AFC2INDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_AFC2INDICATEDformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_AFC2INDICATEDavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_AFC2INDICATEDstatus);
			WriteDatToCom("PA_TC_AFC2Indicated",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TC_IFCINDICATEDCALCdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_IFCINDICATEDCALCformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_IFCINDICATEDCALCavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_TC_IFCINDICATEDCALCstatus)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_TC_IFCINDICATEDCALCdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_TC_IFCINDICATEDCALCformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_TC_IFCINDICATEDCALCavailability);
			UINT status = GetDlgItemInt(IDC_EDITPA_TC_IFCINDICATEDCALCstatus);
			WriteDatToCom("PA_TC_IFCIndicatedCalc",4, data, format, availability, status);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ZEROEMISSIONTIMEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ZEROEMISSIONTIMEformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ZEROEMISSIONTIMEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ZEROEMISSIONTIMEdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_ZEROEMISSIONTIMEformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ZEROEMISSIONTIMEavailability);
			WriteDatToCom("PA_ZeroEmissionTime",3, data, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SAILINGTIMEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SAILINGTIMEformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SAILINGTIMEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_SAILINGTIMEdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_SAILINGTIMEformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SAILINGTIMEavailability);
			WriteDatToCom("PA_SailingTime",3, data, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_BOOSTTIMEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BOOSTTIMEformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_BOOSTTIMEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_BOOSTTIMEdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_BOOSTTIMEformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_BOOSTTIMEavailability);
			WriteDatToCom("PA_BoostTime",3, data, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ECONOMICALMILEAGEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ECONOMICALMILEAGEformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ECONOMICALMILEAGEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ECONOMICALMILEAGEdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_ECONOMICALMILEAGEformat);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ECONOMICALMILEAGEavailability);
			WriteDatToCom("PA_EconomicalMileage",3, data, format, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_PHEVPOWERFLOWINDICdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_PHEVPOWERFLOWINDICavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_PHEVPOWERFLOWINDICdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_PHEVPOWERFLOWINDICavailability);
			WriteDatToCom("PA_DIM_PHEVPowerFlowIndic",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_BEVPOWERFLOWINDICdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_BEVPOWERFLOWINDICavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_BEVPOWERFLOWINDICdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_BEVPOWERFLOWINDICavailability);
			WriteDatToCom("PA_DIM_BEVPowerFlowIndic",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_BSGPOWERFLOWINDICdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_BSGPOWERFLOWINDICavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_BSGPOWERFLOWINDICdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_BSGPOWERFLOWINDICavailability);
			WriteDatToCom("PA_DIM_BSGPowerFlowIndic",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_HEVPOWERFLOWINDICdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_HEVPOWERFLOWINDICavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_HEVPOWERFLOWINDICdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_HEVPOWERFLOWINDICavailability);
			WriteDatToCom("PA_DIM_HEVPowerFlowIndic",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ODT_TEMPINDICATEDdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ODT_TEMPINDICATEDformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ODT_TEMPINDICATEDreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ODT_TEMPINDICATEDavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ODT_TEMPINDICATEDdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_ODT_TEMPINDICATEDformat);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_ODT_TEMPINDICATEDreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ODT_TEMPINDICATEDavailability);
			WriteDatToCom("PA_ODT_TempIndicated",4, data, format, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_ODT_SNOWFLAKELITdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ODT_SNOWFLAKELITformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ODT_SNOWFLAKELITreserve)
			||GetFocus() == GetDlgItem(IDC_EDITPA_ODT_SNOWFLAKELITavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_ODT_SNOWFLAKELITdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_ODT_SNOWFLAKELITformat);
			UINT reserve = GetDlgItemInt(IDC_EDITPA_ODT_SNOWFLAKELITreserve);
			UINT availability = GetDlgItemInt(IDC_EDITPA_ODT_SNOWFLAKELITavailability);
			WriteDatToCom("PA_ODT_SnowFlakeLit",4, data, format, reserve, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_USAGE_MODEdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_USAGE_MODEavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_USAGE_MODEdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_USAGE_MODEavailability);
			WriteDatToCom("PA_DIM_USAGE_MODE",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_GPILOTDISPLAYdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_GPILOTDISPLAYavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_GPILOTDISPLAYdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_GPILOTDISPLAYavailability);
			WriteDatToCom("PA_DIM_GpilotDisplay",2, data, availability);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
