#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_gauge0Dlg dialog

class pa_gauge0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_gauge0Dlg)

public:
	pa_gauge0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_gauge0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_GAUGE0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_VS_VehicleSpeedIndicated data value
	CEdit mCEditPA_VS_VehicleSpeedIndicateddata;
	CEdit mCEditPA_VS_VehicleSpeedIndicatedstatus;
	CEdit mCEditPA_VS_VehicleSpeedIndicatedformat;
	CEdit mCEditPA_VS_VehicleSpeedIndicatedavailability;
// //input PA_VS_VehicleSpeedDigital data value
	CEdit mCEditPA_VS_VehicleSpeedDigitaldata;
	CEdit mCEditPA_VS_VehicleSpeedDigitalstatus;
	CEdit mCEditPA_VS_VehicleSpeedDigitalformat;
	CEdit mCEditPA_VS_VehicleSpeedDigitalavailability;
// //input PA_VS_VehicleSpeedExtendedCheckbox data value
	CEdit mCEditPA_VS_VehicleSpeedExtendedCheckboxdata;
	CEdit mCEditPA_VS_VehicleSpeedExtendedCheckboxstatus;
	CEdit mCEditPA_VS_VehicleSpeedExtendedCheckboxformat;
	CEdit mCEditPA_VS_VehicleSpeedExtendedCheckboxavailability;
// //input PA_BLI_HVBattLevelIndication data value
	CEdit mCEditPA_BLI_HVBattLevelIndicationdata;
	CEdit mCEditPA_BLI_HVBattLevelIndicationstatus;
	CEdit mCEditPA_BLI_HVBattLevelIndicationlevel;
	CEdit mCEditPA_BLI_HVBattLevelIndicationreserve;
	CEdit mCEditPA_BLI_HVBattLevelIndicationavailability;
// //input PA_PDS_DriverSupportIndicated data value
	CEdit mCEditPA_PDS_DriverSupportIndicatedvalue;
	CEdit mCEditPA_PDS_DriverSupportIndicatedreserve;
	CEdit mCEditPA_PDS_DriverSupportIndicateddata;
	CEdit mCEditPA_PDS_DriverSupportIndicatedavailability;
// //input PA_PDS_DriverSupportEngineStart data value
	CEdit mCEditPA_PDS_DriverSupportEngineStartvalue;
	CEdit mCEditPA_PDS_DriverSupportEngineStartreserve;
	CEdit mCEditPA_PDS_DriverSupportEngineStartdata;
	CEdit mCEditPA_PDS_DriverSupportEngineStartavailability;
// //input PA_PDS_DriverSupportPrplMode data value
	CEdit mCEditPA_PDS_DriverSupportPrplModevalue;
	CEdit mCEditPA_PDS_DriverSupportPrplModereserve;
	CEdit mCEditPA_PDS_DriverSupportPrplModedata;
	CEdit mCEditPA_PDS_DriverSupportPrplModeavailability;
// //input PA_PDS_DriverSupportAvailableRagan data value
	CEdit mCEditPA_PDS_DriverSupportAvailableRaganvalue;
	CEdit mCEditPA_PDS_DriverSupportAvailableRaganreserve;
	CEdit mCEditPA_PDS_DriverSupportAvailableRagandata;
	CEdit mCEditPA_PDS_DriverSupportAvailableRaganavailability;
// //input PA_DIM_BSGPowerRegeneration data value
	CEdit mCEditPA_DIM_BSGPowerRegenerationvalue;
	CEdit mCEditPA_DIM_BSGPowerRegenerationreserve;
	CEdit mCEditPA_DIM_BSGPowerRegenerationavailability;
// //input PA_ES_EngSpeedIndicated data value
	CEdit mCEditPA_ES_EngSpeedIndicateddata;
	CEdit mCEditPA_ES_EngSpeedIndicatedformat;
	CEdit mCEditPA_ES_EngSpeedIndicatedavailability;
// //input PA_ES_MaxEngSpeedIndicated data value
	CEdit mCEditPA_ES_MaxEngSpeedIndicateddata;
	CEdit mCEditPA_ES_MaxEngSpeedIndicatedreserve_1;
	CEdit mCEditPA_ES_MaxEngSpeedIndicatedreserve_2;
	CEdit mCEditPA_ES_MaxEngSpeedIndicatedavailability;
// //input PA_DIM_EngineCoolantTemperatureLevelIndication data value
	CEdit mCEditPA_DIM_EngineCoolantTemperatureLevelIndicationdata;
	CEdit mCEditPA_DIM_EngineCoolantTemperatureLevelIndicationvalues;
	CEdit mCEditPA_DIM_EngineCoolantTemperatureLevelIndicationcolor;
	CEdit mCEditPA_DIM_EngineCoolantTemperatureLevelIndicationavailability;
// //input PA_FL_FuelLevelIndicated data value
	CEdit mCEditPA_FL_FuelLevelIndicatedData;
	CEdit mCEditPA_FL_FuelLevelIndicatedAvailability;
	CEdit mCEditPA_FL_FuelLevelIndicatedStatus;
// //input PA_FL_LowFuelWarningLamp data value
	CEdit mCEditPA_FL_LowFuelWarningLampData;
	CEdit mCEditPA_FL_LowFuelWarningLampAvailability;
// //input PA_GFR_Long data value
	CEdit mCEditPA_GFR_LongData;
	CEdit mCEditPA_GFR_LongStatus;
	CEdit mCEditPA_GFR_LongAvailability;
// //input PA_GFR_Acc_Value data value
	CEdit mCEditPA_GFR_Acc_ValueData;
	CEdit mCEditPA_GFR_Acc_ValueAvailability;
// //input PA_GFR_Brake_Value data value
	CEdit mCEditPA_GFR_Brake_ValueData;
	CEdit mCEditPA_GFR_Brake_ValueAvailability;
// //input PA_GFR_Lat data value
	CEdit mCEditPA_GFR_LatData;
	CEdit mCEditPA_GFR_LatStatus;
	CEdit mCEditPA_GFR_LatAvailability;
// //input PA_GFR_Right_Value data value
	CEdit mCEditPA_GFR_Right_ValueData;
	CEdit mCEditPA_GFR_Right_ValueAvailability;
// //input PA_GFR_Left_Value data value
	CEdit mCEditPA_GFR_Left_ValueData;
	CEdit mCEditPA_GFR_Left_ValueAvailability;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
