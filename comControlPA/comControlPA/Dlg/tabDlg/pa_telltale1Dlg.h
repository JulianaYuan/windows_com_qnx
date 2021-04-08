#pragma once
#include "afxwin.h"
#include <string>

using namespace std;

// pa_telltale1Dlg dialog

class pa_telltale1Dlg : public CDialog
{
	DECLARE_DYNAMIC(pa_telltale1Dlg)

public:
	pa_telltale1Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~pa_telltale1Dlg();

	bool WriteDatToCom(string paName,int count,...);

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPA_TELLTALE1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
// //input PA_BRK_AutoHoldIndicator data value
	CEdit mCEditPA_BRK_AutoHoldIndicatoravailability;
	CEdit mCEditPA_BRK_AutoHoldIndicatordata;
// //input PA_DIM_EngineCoolantWarningLamp data value
	CEdit mCEditPA_DIM_EngineCoolantWarningLampavailability;
	CEdit mCEditPA_DIM_EngineCoolantWarningLampdata;
// //input PA_TowbarUnlockLamp data value
	CEdit mCEditPA_TowbarUnlockLampavailability;
	CEdit mCEditPA_TowbarUnlockLampdata;
// //input PA_TrailerLightStatusLamp data value
	CEdit mCEditPA_TrailerLightStatusLampavailability;
	CEdit mCEditPA_TrailerLightStatusLampdata;
// //input PA_TrailerServiceLamp data value
	CEdit mCEditPA_TrailerServiceLampavailability;
	CEdit mCEditPA_TrailerServiceLampdata;
// //input PA_DIM_StartStopLamp data value
	CEdit mCEditPA_DIM_StartStopLampavailability;
	CEdit mCEditPA_DIM_StartStopLampdata;
// //input PA_LVE_BatteryIndicator data value
	CEdit mCEditPA_LVE_BatteryIndicatoravailability;
	CEdit mCEditPA_LVE_BatteryIndicatordata;
// //input PA_DIM_LeftChildLockStatus data value
	CEdit mCEditPA_DIM_LeftChildLockStatusavailability;
	CEdit mCEditPA_DIM_LeftChildLockStatusdata;
// //input PA_DIM_RightChildLockStatus data value
	CEdit mCEditPA_DIM_RightChildLockStatusavailability;
	CEdit mCEditPA_DIM_RightChildLockStatusdata;
// //input PA_TIR_TirePressureFault data value
	CEdit mCEditPA_TIR_TirePressureFaultavailability;
	CEdit mCEditPA_TIR_TirePressureFaultdata;
// //input PA_SteeringIndicator data value
	CEdit mCEditPA_SteeringIndicatoravailability;
	CEdit mCEditPA_SteeringIndicatordata;
// //input PA_SUSP_SuspensionYellowIndicator data value
	CEdit mCEditPA_SUSP_SuspensionYellowIndicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionYellowIndicatordata;
// //input PA_SUSP_SuspensionRedIndicator data value
	CEdit mCEditPA_SUSP_SuspensionRedIndicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionRedIndicatordata;
// //input PA_SUSP_SuspensionMovingUpIndicator data value
	CEdit mCEditPA_SUSP_SuspensionMovingUpIndicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionMovingUpIndicatordata;
// //input PA_SUSP_SuspensionMovingDownIndicator data value
	CEdit mCEditPA_SUSP_SuspensionMovingDownIndicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionMovingDownIndicatordata;
// //input PA_SUSP_SuspensionStopIndicator data value
	CEdit mCEditPA_SUSP_SuspensionStopIndicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionStopIndicatordata;
// //input PA_SUSP_SuspensionCurrentLevelLL1Indicator data value
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelLL1Indicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelLL1Indicatordata;
// //input PA_SUSP_SuspensionCurrentLevelLL2Indicator data value
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelLL2Indicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelLL2Indicatordata;
// //input PA_SUSP_SuspensionCurrentLevelNRHIndicator data value
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelNRHIndicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelNRHIndicatordata;
// //input PA_SUSP_SuspensionCurrentLevelHL1Indicator data value
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelHL1Indicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelHL1Indicatordata;
// //input PA_SUSP_SuspensionCurrentLevelHL2Indicator data value
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelHL2Indicatoravailability;
	CEdit mCEditPA_SUSP_SuspensionCurrentLevelHL2Indicatordata;
// //input PA_DPS_coffeecup_lamp data value
	CEdit mCEditPA_DPS_coffeecup_lampavailability;
	CEdit mCEditPA_DPS_coffeecup_lampdata;
// //input PA_DIM_ExternalArtIficialSoundLamp data value
	CEdit mCEditPA_DIM_ExternalArtIficialSoundLampavailability;
	CEdit mCEditPA_DIM_ExternalArtIficialSoundLampdata;
// //input PA_DIM_ParkingEmergencyBrakeLamp data value
	CEdit mCEditPA_DIM_ParkingEmergencyBrakeLampavailability;
	CEdit mCEditPA_DIM_ParkingEmergencyBrakeLampdata;
// //input PA_EPWISt data value
	CEdit mCEditPA_EPWIStavailability;
	CEdit mCEditPA_EPWIStdata;
// //input PA_EPWIStUS data value
	CEdit mCEditPA_EPWIStUSavailability;
	CEdit mCEditPA_EPWIStUSdata;
// //input PA_RWSIndicator data value
	CEdit mCEditPA_RWSIndicatoravailability;
	CEdit mCEditPA_RWSIndicatordata;
// //input PA_EpedalIndicator data value
	CEdit mCEditPA_EpedalIndicatoravailability;
	CEdit mCEditPA_EpedalIndicatordata;
// //input PA_Seatbelt data value
	CEdit mCEditPA_Seatbeltavailability;
	CEdit mCEditPA_Seatbeltdata;
// //input PA_SVSLamp data value
	CEdit mCEditPA_SVSLampavailability;
	CEdit mCEditPA_SVSLampdata;
// //input PA_TCMLamp data value
	CEdit mCEditPA_TCMLampavailability;
	CEdit mCEditPA_TCMLampdata;
// //input PA_OLI_OilLevelIndicated data value
	CEdit mCEditPA_OLI_OilLevelIndicatedavailability;
	CEdit mCEditPA_OLI_OilLevelIndicateddata;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
