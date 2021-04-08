#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_trip0Dlg dialog

class pa_trip0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_trip0Dlg)

public:
	pa_trip0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_trip0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_TRIP0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_DGS_GearLvrIndcn data value
	CEdit mCEditPA_DGS_GearLvrIndcndata;
	CEdit mCEditPA_DGS_GearLvrIndcnavailability;
// //input PA_DGS_GearIndcn data value
	CEdit mCEditPA_DGS_GearIndcndata;
	CEdit mCEditPA_DGS_GearIndcnavailability;
// //input PA_DGS_GearShiftIndcn data value
	CEdit mCEditPA_DGS_GearShiftIndcndata;
	CEdit mCEditPA_DGS_GearShiftIndcnavailability;
// //input PA_DD_OdometerIndicated data value
	CEdit mCEditPA_DD_OdometerIndicateddata;
	CEdit mCEditPA_DD_OdometerIndicatedformat;
	CEdit mCEditPA_DD_OdometerIndicatedstatus;
	CEdit mCEditPA_DD_OdometerIndicatedavailability;
// //input PA_DD_OdometerTripMeter1 data value
	CEdit mCEditPA_DD_OdometerTripMeter1data;
	CEdit mCEditPA_DD_OdometerTripMeter1format;
	CEdit mCEditPA_DD_OdometerTripMeter1status;
	CEdit mCEditPA_DD_OdometerTripMeter1availability;
// //input PA_DD_OdometerTripMeter2 data value
	CEdit mCEditPA_DD_OdometerTripMeter2data;
	CEdit mCEditPA_DD_OdometerTripMeter2format;
	CEdit mCEditPA_DD_OdometerTripMeter2status;
	CEdit mCEditPA_DD_OdometerTripMeter2availability;
// //input PA_DD_TripMeterRadioButton data value
	CEdit mCEditPA_DD_TripMeterRadioButtondata;
	CEdit mCEditPA_DD_TripMeterRadioButtonformat;
	CEdit mCEditPA_DD_TripMeterRadioButtonstatus;
	CEdit mCEditPA_DD_TripMeterRadioButtonavailability;
// //input PA_TC_DTEHVBattIndicated data value
	CEdit mCEditPA_TC_DTEHVBattIndicateddata;
	CEdit mCEditPA_TC_DTEHVBattIndicatedformat;
	CEdit mCEditPA_TC_DTEHVBattIndicatedavailability;
	CEdit mCEditPA_TC_DTEHVBattIndicatedstatus;
// //input PA_TC_EDT1Indicated data value
	CEdit mCEditPA_TC_EDT1Indicateddata;
	CEdit mCEditPA_TC_EDT1Indicatedavailability;
	CEdit mCEditPA_TC_EDT1Indicatedstatus;
// //input PA_TC_EDT2Indicated data value
	CEdit mCEditPA_TC_EDT2Indicateddata;
	CEdit mCEditPA_TC_EDT2Indicatedavailability;
	CEdit mCEditPA_TC_EDT2Indicatedstatus;
// //input PA_TC_AVS1Indicated data value
	CEdit mCEditPA_TC_AVS1Indicateddata;
	CEdit mCEditPA_TC_AVS1Indicatedformat;
	CEdit mCEditPA_TC_AVS1Indicatedavailability;
	CEdit mCEditPA_TC_AVS1Indicatedstatus;
// //input PA_TC_AVS2Indicated data value
	CEdit mCEditPA_TC_AVS2Indicateddata;
	CEdit mCEditPA_TC_AVS2Indicatedformat;
	CEdit mCEditPA_TC_AVS2Indicatedavailability;
	CEdit mCEditPA_TC_AVS2Indicatedstatus;
// //input PA_TC_AEC1Indicated data value
	CEdit mCEditPA_TC_AEC1Indicateddata;
	CEdit mCEditPA_TC_AEC1Indicatedformat;
	CEdit mCEditPA_TC_AEC1Indicatedavailability;
	CEdit mCEditPA_TC_AEC1Indicatedstatus;
// //input PA_TC_AEC2Indicated data value
	CEdit mCEditPA_TC_AEC2Indicateddata;
	CEdit mCEditPA_TC_AEC2Indicatedformat;
	CEdit mCEditPA_TC_AEC2Indicatedavailability;
	CEdit mCEditPA_TC_AEC2Indicatedstatus;
// //input PA_TC_IECIndicated data value
	CEdit mCEditPA_TC_IECIndicateddata;
	CEdit mCEditPA_TC_IECIndicatedformat;
	CEdit mCEditPA_TC_IECIndicatedavailability;
	CEdit mCEditPA_TC_IECIndicatedstatus;
// //input PA_TC_Zero_Emission data value
	CEdit mCEditPA_TC_Zero_Emissiondata;
	CEdit mCEditPA_TC_Zero_Emissionavailability;
	CEdit mCEditPA_TC_Zero_Emissionstatus;
// //input PA_TC_DTEIndicated data value
	CEdit mCEditPA_TC_DTEIndicateddata;
	CEdit mCEditPA_TC_DTEIndicatedformat;
	CEdit mCEditPA_TC_DTEIndicatedavailability;
	CEdit mCEditPA_TC_DTEIndicatedstatus;
	CEdit mCEditPA_TC_DTEIndicatedtriggered;
// //input PA_TC_AFC1Indicated data value
	CEdit mCEditPA_TC_AFC1Indicateddata;
	CEdit mCEditPA_TC_AFC1Indicatedformat;
	CEdit mCEditPA_TC_AFC1Indicatedavailability;
	CEdit mCEditPA_TC_AFC1Indicatedstatus;
// //input PA_TC_AFC2Indicated data value
	CEdit mCEditPA_TC_AFC2Indicateddata;
	CEdit mCEditPA_TC_AFC2Indicatedformat;
	CEdit mCEditPA_TC_AFC2Indicatedavailability;
	CEdit mCEditPA_TC_AFC2Indicatedstatus;
// //input PA_TC_IFCIndicatedCalc data value
	CEdit mCEditPA_TC_IFCIndicatedCalcdata;
	CEdit mCEditPA_TC_IFCIndicatedCalcformat;
	CEdit mCEditPA_TC_IFCIndicatedCalcavailability;
	CEdit mCEditPA_TC_IFCIndicatedCalcstatus;
// //input PA_ZeroEmissionTime data value
	CEdit mCEditPA_ZeroEmissionTimedata;
	CEdit mCEditPA_ZeroEmissionTimeformat;
	CEdit mCEditPA_ZeroEmissionTimeavailability;
// //input PA_SailingTime data value
	CEdit mCEditPA_SailingTimedata;
	CEdit mCEditPA_SailingTimeformat;
	CEdit mCEditPA_SailingTimeavailability;
// //input PA_BoostTime data value
	CEdit mCEditPA_BoostTimedata;
	CEdit mCEditPA_BoostTimeformat;
	CEdit mCEditPA_BoostTimeavailability;
// //input PA_EconomicalMileage data value
	CEdit mCEditPA_EconomicalMileagedata;
	CEdit mCEditPA_EconomicalMileageformat;
	CEdit mCEditPA_EconomicalMileageavailability;
// //input PA_DIM_PHEVPowerFlowIndic data value
	CEdit mCEditPA_DIM_PHEVPowerFlowIndicdata;
	CEdit mCEditPA_DIM_PHEVPowerFlowIndicavailability;
// //input PA_DIM_BEVPowerFlowIndic data value
	CEdit mCEditPA_DIM_BEVPowerFlowIndicdata;
	CEdit mCEditPA_DIM_BEVPowerFlowIndicavailability;
// //input PA_DIM_BSGPowerFlowIndic data value
	CEdit mCEditPA_DIM_BSGPowerFlowIndicdata;
	CEdit mCEditPA_DIM_BSGPowerFlowIndicavailability;
// //input PA_DIM_HEVPowerFlowIndic data value
	CEdit mCEditPA_DIM_HEVPowerFlowIndicdata;
	CEdit mCEditPA_DIM_HEVPowerFlowIndicavailability;
// //input PA_ODT_TempIndicated data value
	CEdit mCEditPA_ODT_TempIndicateddata;
	CEdit mCEditPA_ODT_TempIndicatedformat;
	CEdit mCEditPA_ODT_TempIndicatedreserve;
	CEdit mCEditPA_ODT_TempIndicatedavailability;
// //input PA_ODT_SnowFlakeLit data value
	CEdit mCEditPA_ODT_SnowFlakeLitdata;
	CEdit mCEditPA_ODT_SnowFlakeLitformat;
	CEdit mCEditPA_ODT_SnowFlakeLitreserve;
	CEdit mCEditPA_ODT_SnowFlakeLitavailability;
// //input PA_DIM_USAGE_MODE data value
	CEdit mCEditPA_DIM_USAGE_MODEdata;
	CEdit mCEditPA_DIM_USAGE_MODEavailability;
// //input PA_DIM_GpilotDisplay data value
	CEdit mCEditPA_DIM_GpilotDisplaydata;
	CEdit mCEditPA_DIM_GpilotDisplayavailability;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
