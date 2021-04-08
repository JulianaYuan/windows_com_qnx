#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_trip2Dlg dialog

class pa_trip2Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_trip2Dlg)

public:
	pa_trip2Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_trip2Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_TRIP2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_LeReTireMsgBattLoSt data value
	CEdit mCEditPA_LeReTireMsgBattLoStdata;
	CEdit mCEditPA_LeReTireMsgBattLoSttimeout;
// //input PA_RiFrntTireMsgBattLoSt data value
	CEdit mCEditPA_RiFrntTireMsgBattLoStdata;
	CEdit mCEditPA_RiFrntTireMsgBattLoSttimeout;
// //input PA_RiReTireMsgBattLoSt data value
	CEdit mCEditPA_RiReTireMsgBattLoStdata;
	CEdit mCEditPA_RiReTireMsgBattLoSttimeout;
// //input PA_CI_TimeAndDateIndicated data value
	CEdit mCEditPA_CI_TimeAndDateIndicatedyear;
	CEdit mCEditPA_CI_TimeAndDateIndicatedmonth;
	CEdit mCEditPA_CI_TimeAndDateIndicatedday;
	CEdit mCEditPA_CI_TimeAndDateIndicatedhour;
	CEdit mCEditPA_CI_TimeAndDateIndicatedminute;
	CEdit mCEditPA_CI_TimeAndDateIndicatedsecond;
	CEdit mCEditPA_CI_TimeAndDateIndicatedformat;
	CEdit mCEditPA_CI_TimeAndDateIndicatedavailability;
// //input PA_TC_ACChargingAvailable data value
	CEdit mCEditPA_TC_ACChargingAvailablevalue;
// //input PA_TC_DispHvBattLvlOfChrg data value
	CEdit mCEditPA_TC_DispHvBattLvlOfChrgvalue;
// //input PA_TC_OnBdChrgrIAct data value
	CEdit mCEditPA_TC_OnBdChrgrIActvalue;
// //input PA_TC_OnBdChrgrUAct data value
	CEdit mCEditPA_TC_OnBdChrgrUActvalue;
// //input PA_TC_ChrgnSpd data value
	CEdit mCEditPA_TC_ChrgnSpdvalue;
// //input PA_TC_HvBattChrgnTiEstimd data value
	CEdit mCEditPA_TC_HvBattChrgnTiEstimdvalue;
// //input PA_TC_OnBdChrgrHndlSts1 data value
	CEdit mCEditPA_TC_OnBdChrgrHndlSts1value;
// //input PA_TC_DCChrgnHndlSts data value
	CEdit mCEditPA_TC_DCChrgnHndlStsvalue;
// //input PA_TC_ChrgnOrDisChrgnStsFb data value
	CEdit mCEditPA_TC_ChrgnOrDisChrgnStsFbvalue;
// //input PA_TC_DCChrgSt data value
	CEdit mCEditPA_TC_DCChrgStvalue;
// //input PA_TC_DCChargingAvailable data value
	CEdit mCEditPA_TC_DCChargingAvailablevalue;
// //input PA_TC_HvBattIDc1 data value
	CEdit mCEditPA_TC_HvBattIDc1value;
// //input PA_TC_HvBattUDc data value
	CEdit mCEditPA_TC_HvBattUDcvalue;
// //input PA_TC_DischargingAvailable data value
	CEdit mCEditPA_TC_DischargingAvailablevalue;
// //input PA_TC_DchaIAct data value
	CEdit mCEditPA_TC_DchaIActvalue;
// //input PA_TC_DchaUAct data value
	CEdit mCEditPA_TC_DchaUActvalue;
// //input PA_TC_HvBattDchaTiEstimd data value
	CEdit mCEditPA_TC_HvBattDchaTiEstimdvalue;
// //input PA_TC_DchaEgyAct data value
	CEdit mCEditPA_TC_DchaEgyActvalue;
// //input PA_OnBdChrgrSt data value
	CEdit mCEditPA_OnBdChrgrStvalue;
	CEdit mCEditPA_OnBdChrgrStub;
	CEdit mCEditPA_OnBdChrgrSttimeout;
// //input PA_BookChargeSetResponse data value
	CEdit mCEditPA_BookChargeSetResponsevalue;
	CEdit mCEditPA_BookChargeSetResponseub;
	CEdit mCEditPA_BookChargeSetResponsetimeout;
// //input PA_TC_DchaStopByTarDrvrIndcn data value
	CEdit mCEditPA_TC_DchaStopByTarDrvrIndcnvalue;
// //input PA_Color_HVBattSOC data value
	CEdit mCEditPA_Color_HVBattSOCdata;
	CEdit mCEditPA_Color_HVBattSOCavailability;
// //input PA_DIM_StateOfCharge data value
	CEdit mCEditPA_DIM_StateOfChargedata;
	CEdit mCEditPA_DIM_StateOfChargeformat;
	CEdit mCEditPA_DIM_StateOfChargestatus;
	CEdit mCEditPA_DIM_StateOfChargeavailability;
// //input PA_TR_TurboPressureIndicated data value
	CEdit mCEditPA_TR_TurboPressureIndicateddata;
	CEdit mCEditPA_TR_TurboPressureIndicatedformat;
	CEdit mCEditPA_TR_TurboPressureIndicatedavailability;
// //input PA_TR_MaxTurboPressureIndicated data value
	CEdit mCEditPA_TR_MaxTurboPressureIndicateddata;
	CEdit mCEditPA_TR_MaxTurboPressureIndicatedformat;
	CEdit mCEditPA_TR_MaxTurboPressureIndicatedavailability;
// //input PA_EC_EcoMeter data value
	CEdit mCEditPA_EC_EcoMeterdata;
	CEdit mCEditPA_EC_EcoMeteravailability;
// //input PA_EC_EcoGrade data value
	CEdit mCEditPA_EC_EcoGradedata;
	CEdit mCEditPA_EC_EcoGradeavailability;
// //input PA_RewardMileage data value
	CEdit mCEditPA_RewardMileagedata;
	CEdit mCEditPA_RewardMileageformat;
	CEdit mCEditPA_RewardMileagetimeout;
	CEdit mCEditPA_RewardMileageavailability;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
