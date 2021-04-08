#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_telltale0Dlg dialog

class pa_telltale0Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_telltale0Dlg)

public:
	pa_telltale0Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_telltale0Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_TELLTALE0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_AFSLamp data value
	CEdit mCEditPA_AFSLampavailability;
	CEdit mCEditPA_AFSLampdata;
// //input PA_PositionLamp data value
	CEdit mCEditPA_PositionLampavailability;
	CEdit mCEditPA_PositionLampdata;
// //input PA_HighBeamLamp data value
	CEdit mCEditPA_HighBeamLampavailability;
	CEdit mCEditPA_HighBeamLampdata;
// //input PA_LowBeamLamp data value
	CEdit mCEditPA_LowBeamLampavailability;
	CEdit mCEditPA_LowBeamLampdata;
// //input PA_ABLLamp data value
	CEdit mCEditPA_ABLLampavailability;
	CEdit mCEditPA_ABLLampdata;
// //input PA_ManualLevelingLamp data value
	CEdit mCEditPA_ManualLevelingLampavailability;
	CEdit mCEditPA_ManualLevelingLampdata;
// //input PA_FrontFogLamp data value
	CEdit mCEditPA_FrontFogLampavailability;
	CEdit mCEditPA_FrontFogLampdata;
// //input PA_RearFogLamp data value
	CEdit mCEditPA_RearFogLampavailability;
	CEdit mCEditPA_RearFogLampdata;
// //input PA_TurnLeftLamp data value
	CEdit mCEditPA_TurnLeftLampavailability;
	CEdit mCEditPA_TurnLeftLampdata;
// //input PA_TurnRightLamp data value
	CEdit mCEditPA_TurnRightLampavailability;
	CEdit mCEditPA_TurnRightLampdata;
// //input PA_BrakeLightFailure data value
	CEdit mCEditPA_BrakeLightFailureavailability;
	CEdit mCEditPA_BrakeLightFailuredata;
// //input PA_AHBCLamp data value
	CEdit mCEditPA_AHBCLampavailability;
	CEdit mCEditPA_AHBCLampdata;
// //input PA_DIM_ReadyLamp data value
	CEdit mCEditPA_DIM_ReadyLampavailability;
	CEdit mCEditPA_DIM_ReadyLampdata;
// //input PA_DIM_CheckEngineLamp data value
	CEdit mCEditPA_DIM_CheckEngineLampavailability;
	CEdit mCEditPA_DIM_CheckEngineLampdata;
// //input PA_BATT_BatteryLowIndicator data value
	CEdit mCEditPA_BATT_BatteryLowIndicatoravailability;
	CEdit mCEditPA_BATT_BatteryLowIndicatordata;
// //input PA_BATT_BatteryFailureIndicator data value
	CEdit mCEditPA_BATT_BatteryFailureIndicatoravailability;
	CEdit mCEditPA_BATT_BatteryFailureIndicatordata;
// //input PA_BATT_ChargingHandleIndicator data value
	CEdit mCEditPA_BATT_ChargingHandleIndicatoravailability;
	CEdit mCEditPA_BATT_ChargingHandleIndicatordata;
// //input PA_DIM_OilPressureLamp data value
	CEdit mCEditPA_DIM_OilPressureLampavailability;
	CEdit mCEditPA_DIM_OilPressureLampdata;
// //input PA_DIM_PowerLimitationLamp data value
	CEdit mCEditPA_DIM_PowerLimitationLampavailability;
	CEdit mCEditPA_DIM_PowerLimitationLampdata;
// //input PA_DIM_SystemFaultLamp data value
	CEdit mCEditPA_DIM_SystemFaultLampavailability;
	CEdit mCEditPA_DIM_SystemFaultLampdata;
// //input PA_DIM_ElectricalMachineErrorLamp data value
	CEdit mCEditPA_DIM_ElectricalMachineErrorLampavailability;
	CEdit mCEditPA_DIM_ElectricalMachineErrorLampdata;
// //input PA_DIM_SRSLamp data value
	CEdit mCEditPA_DIM_SRSLampavailability;
	CEdit mCEditPA_DIM_SRSLampdata;
// //input PA_BRK_ESCIndicator data value
	CEdit mCEditPA_BRK_ESCIndicatoravailability;
	CEdit mCEditPA_BRK_ESCIndicatordata;
// //input PA_BRK_EscSportIndicator data value
	CEdit mCEditPA_BRK_EscSportIndicatoravailability;
	CEdit mCEditPA_BRK_EscSportIndicatordata;
// //input PA_BRK_ABSIndicator data value
	CEdit mCEditPA_BRK_ABSIndicatoravailability;
	CEdit mCEditPA_BRK_ABSIndicatordata;
// //input PA_BRK_HDCWhiteIndicator data value
	CEdit mCEditPA_BRK_HDCWhiteIndicatoravailability;
	CEdit mCEditPA_BRK_HDCWhiteIndicatordata;
// //input PA_BRK_HDCGreenIndicator data value
	CEdit mCEditPA_BRK_HDCGreenIndicatoravailability;
	CEdit mCEditPA_BRK_HDCGreenIndicatordata;
// //input PA_BRK_HDCYellowIndicator data value
	CEdit mCEditPA_BRK_HDCYellowIndicatoravailability;
	CEdit mCEditPA_BRK_HDCYellowIndicatordata;
// //input PA_BRK_BrakeReleaseIndicator data value
	CEdit mCEditPA_BRK_BrakeReleaseIndicatoravailability;
	CEdit mCEditPA_BRK_BrakeReleaseIndicatordata;
// //input PA_BRK_EPBIndicator data value
	CEdit mCEditPA_BRK_EPBIndicatoravailability;
	CEdit mCEditPA_BRK_EPBIndicatordata;
// //input PA_BRK_BrakeYellowIndicator data value
	CEdit mCEditPA_BRK_BrakeYellowIndicatoravailability;
	CEdit mCEditPA_BRK_BrakeYellowIndicatordata;
// //input PA_BRK_BrakeRedIndicator data value
	CEdit mCEditPA_BRK_BrakeRedIndicatoravailability;
	CEdit mCEditPA_BRK_BrakeRedIndicatordata;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
