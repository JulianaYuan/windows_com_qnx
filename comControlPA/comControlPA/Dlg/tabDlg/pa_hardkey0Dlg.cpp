// pa_hardkey0Dlg.cpp : implementation file
//

// pa_hardkey0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_hardkey0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_hardkey0Dlg, CDialog)

pa_hardkey0Dlg::pa_hardkey0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_HARDKEY0, pParent)
{

}

pa_hardkey0Dlg::~pa_hardkey0Dlg()
{
}

void pa_hardkey0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTOPKEYstatus, mCEditPA_LeftSteerWhlTopKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTOPKEYavailability, mCEditPA_LeftSteerWhlTopKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTOPKEYvalue, mCEditPA_LeftSteerWhlTopKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYstatus, mCEditPA_LeftSteerWhlBottomKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYavailability, mCEditPA_LeftSteerWhlBottomKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYvalue, mCEditPA_LeftSteerWhlBottomKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLRIKEYstatus, mCEditPA_LeftSteerWhlRiKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLRIKEYavailability, mCEditPA_LeftSteerWhlRiKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLRIKEYvalue, mCEditPA_LeftSteerWhlRiKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLLEKEYstatus, mCEditPA_LeftSteerWhlLeKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLLEKEYavailability, mCEditPA_LeftSteerWhlLeKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLLEKEYvalue, mCEditPA_LeftSteerWhlLeKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYstatus, mCEditPA_LeftSteerWhlConfirmKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYavailability, mCEditPA_LeftSteerWhlConfirmKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYvalue, mCEditPA_LeftSteerWhlConfirmKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTIGAPKEYstatus, mCEditPA_LeftSteerWhlTiGapKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTIGAPKEYavailability, mCEditPA_LeftSteerWhlTiGapKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTIGAPKEYvalue, mCEditPA_LeftSteerWhlTiGapKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLVIEWKEYstatus, mCEditPA_LeftSteerWhlViewKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLVIEWKEYavailability, mCEditPA_LeftSteerWhlViewKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLVIEWKEYvalue, mCEditPA_LeftSteerWhlViewKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLRESUKEYstatus, mCEditPA_LeftSteerWhlResuKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLRESUKEYavailability, mCEditPA_LeftSteerWhlResuKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLRESUKEYvalue, mCEditPA_LeftSteerWhlResuKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLCANCLEKEYstatus, mCEditPA_LeftSteerWhlCancleKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLCANCLEKEYavailability, mCEditPA_LeftSteerWhlCancleKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLCANCLEKEYvalue, mCEditPA_LeftSteerWhlCancleKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHADASKEYstatus, mCEditPA_LeftSteerWhADASKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHADASKEYavailability, mCEditPA_LeftSteerWhADASKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHADASKEYvalue, mCEditPA_LeftSteerWhADASKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRstatus, mCEditPA_LeftSteerWhlTiGapCtrlrstatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRavailability, mCEditPA_LeftSteerWhlTiGapCtrlravailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRvalue, mCEditPA_LeftSteerWhlTiGapCtrlrvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLAPAKEYstatus, mCEditPA_LeftSteerWhlAPAKeystatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLAPAKEYavailability, mCEditPA_LeftSteerWhlAPAKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLAPAKEYvalue, mCEditPA_LeftSteerWhlAPAKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLHOZLSWPstatus, mCEditPA_LeftSteerWhlHozlSwpstatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLHOZLSWPavailability, mCEditPA_LeftSteerWhlHozlSwpavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLHOZLSWPvalue, mCEditPA_LeftSteerWhlHozlSwpvalue);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLVERTSWPstatus, mCEditPA_LeftSteerWhlVertSwpstatus);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLVERTSWPavailability, mCEditPA_LeftSteerWhlVertSwpavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFTSTEERWHLVERTSWPvalue, mCEditPA_LeftSteerWhlVertSwpvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLTOPKEYstatus, mCEditPA_RightSteerWhlTopKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLTOPKEYavailability, mCEditPA_RightSteerWhlTopKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLTOPKEYvalue, mCEditPA_RightSteerWhlTopKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYstatus, mCEditPA_RightSteerWhlBottomKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYavailability, mCEditPA_RightSteerWhlBottomKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYvalue, mCEditPA_RightSteerWhlBottomKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLLEKEYstatus, mCEditPA_RightSteerWhlLeKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLLEKEYavailability, mCEditPA_RightSteerWhlLeKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLLEKEYvalue, mCEditPA_RightSteerWhlLeKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLRIKEYstatus, mCEditPA_RightSteerWhlRiKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLRIKEYavailability, mCEditPA_RightSteerWhlRiKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLRIKEYvalue, mCEditPA_RightSteerWhlRiKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLROLLKEYstatus, mCEditPA_RightSteerWhlRollKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLROLLKEYavailability, mCEditPA_RightSteerWhlRollKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLROLLKEYvalue, mCEditPA_RightSteerWhlRollKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYstatus, mCEditPA_RightSteerWhlConfirmKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYavailability, mCEditPA_RightSteerWhlConfirmKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYvalue, mCEditPA_RightSteerWhlConfirmKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVRKEYstatus, mCEditPA_RightSteerWhlVRKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVRKEYavailability, mCEditPA_RightSteerWhlVRKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVRKEYvalue, mCEditPA_RightSteerWhlVRKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLMENUKEYstatus, mCEditPA_RightSteerWhlMenuKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLMENUKEYavailability, mCEditPA_RightSteerWhlMenuKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLMENUKEYvalue, mCEditPA_RightSteerWhlMenuKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYstatus, mCEditPA_RightSteerWhlCustomDefdKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYavailability, mCEditPA_RightSteerWhlCustomDefdKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYvalue, mCEditPA_RightSteerWhlCustomDefdKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLMUTEKEYstatus, mCEditPA_RightSteerWhlMuteKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLMUTEKEYavailability, mCEditPA_RightSteerWhlMuteKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLMUTEKEYvalue, mCEditPA_RightSteerWhlMuteKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVERTMOVEstatus, mCEditPA_RightSteerWhlVertMovestatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVERTMOVEavailability, mCEditPA_RightSteerWhlVertMoveavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVERTMOVEvalue, mCEditPA_RightSteerWhlVertMovevalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLHOZLSWPstatus, mCEditPA_RightSteerWhlHozlSwpstatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLHOZLSWPavailability, mCEditPA_RightSteerWhlHozlSwpavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLHOZLSWPvalue, mCEditPA_RightSteerWhlHozlSwpvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVERTSWPstatus, mCEditPA_RightSteerWhlVertSwpstatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVERTSWPavailability, mCEditPA_RightSteerWhlVertSwpavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLVERTSWPvalue, mCEditPA_RightSteerWhlVertSwpvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLTRIPKEYstatus, mCEditPA_RightSteerWhlTripKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLTRIPKEYavailability, mCEditPA_RightSteerWhlTripKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLTRIPKEYvalue, mCEditPA_RightSteerWhlTripKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLWECHATKEYstatus, mCEditPA_RightSteerWhlWeChatKeystatus);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLWECHATKEYavailability, mCEditPA_RightSteerWhlWeChatKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_RIGHTSTEERWHLWECHATKEYvalue, mCEditPA_RightSteerWhlWeChatKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_SNGTRIPKEYstatus, mCEditPA_SngTripKeystatus);
	DDX_Control(pDX, IDC_EDITPA_SNGTRIPKEYavailability, mCEditPA_SngTripKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_SNGTRIPKEYvalue, mCEditPA_SngTripKeyvalue);
	DDX_Control(pDX, IDC_EDITPA_DRVRMODPADLstatus, mCEditPA_DrvrModPadlstatus);
	DDX_Control(pDX, IDC_EDITPA_DRVRMODPADLavailability, mCEditPA_DrvrModPadlavailability);
	DDX_Control(pDX, IDC_EDITPA_DRVRMODPADLvalue, mCEditPA_DrvrModPadlvalue);
	DDX_Control(pDX, IDC_EDITPA_CUSTOMDEFKEYstatus, mCEditPA_CustomDefKeystatus);
	DDX_Control(pDX, IDC_EDITPA_CUSTOMDEFKEYavailability, mCEditPA_CustomDefKeyavailability);
	DDX_Control(pDX, IDC_EDITPA_CUSTOMDEFKEYvalue, mCEditPA_CustomDefKeyvalue);
}


BEGIN_MESSAGE_MAP(pa_hardkey0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_hardkey0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_hardkey0Dlg message handlers
BOOL pa_hardkey0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTOPKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTOPKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTOPKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTOPKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTOPKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTOPKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlTopKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLBOTTOMKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlBottomKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLRIKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLRIKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLRIKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLRIKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLRIKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLRIKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlRiKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLLEKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLLEKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLLEKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLLEKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLLEKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLLEKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlLeKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLCONFIRMKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlConfirmKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTIGAPKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTIGAPKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTIGAPKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTIGAPKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTIGAPKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTIGAPKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlTiGapKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLVIEWKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLVIEWKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLVIEWKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLVIEWKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLVIEWKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLVIEWKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlViewKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLRESUKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLRESUKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLRESUKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLRESUKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLRESUKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLRESUKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlResuKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLCANCLEKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLCANCLEKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLCANCLEKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLCANCLEKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLCANCLEKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLCANCLEKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlCancleKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHADASKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHADASKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHADASKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHADASKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHADASKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHADASKEYvalue);
			WriteDatToCom("PA_LeftSteerWhADASKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLTIGAPCTRLRvalue);
			WriteDatToCom("PA_LeftSteerWhlTiGapCtrlr",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLAPAKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLAPAKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLAPAKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLAPAKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLAPAKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLAPAKEYvalue);
			WriteDatToCom("PA_LeftSteerWhlAPAKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLHOZLSWPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLHOZLSWPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLHOZLSWPvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLHOZLSWPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLHOZLSWPavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLHOZLSWPvalue);
			WriteDatToCom("PA_LeftSteerWhlHozlSwp",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLVERTSWPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLVERTSWPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFTSTEERWHLVERTSWPvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLVERTSWPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLVERTSWPavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_LEFTSTEERWHLVERTSWPvalue);
			WriteDatToCom("PA_LeftSteerWhlVertSwp",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLTOPKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLTOPKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLTOPKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLTOPKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLTOPKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLTOPKEYvalue);
			WriteDatToCom("PA_RightSteerWhlTopKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLBOTTOMKEYvalue);
			WriteDatToCom("PA_RightSteerWhlBottomKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLLEKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLLEKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLLEKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLLEKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLLEKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLLEKEYvalue);
			WriteDatToCom("PA_RightSteerWhlLeKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLRIKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLRIKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLRIKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLRIKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLRIKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLRIKEYvalue);
			WriteDatToCom("PA_RightSteerWhlRiKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLROLLKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLROLLKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLROLLKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLROLLKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLROLLKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLROLLKEYvalue);
			WriteDatToCom("PA_RightSteerWhlRollKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLCONFIRMKEYvalue);
			WriteDatToCom("PA_RightSteerWhlConfirmKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVRKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVRKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVRKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVRKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVRKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVRKEYvalue);
			WriteDatToCom("PA_RightSteerWhlVRKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLMENUKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLMENUKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLMENUKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLMENUKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLMENUKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLMENUKEYvalue);
			WriteDatToCom("PA_RightSteerWhlMenuKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLCUSTOMDEFDKEYvalue);
			WriteDatToCom("PA_RightSteerWhlCustomDefdKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLMUTEKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLMUTEKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLMUTEKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLMUTEKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLMUTEKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLMUTEKEYvalue);
			WriteDatToCom("PA_RightSteerWhlMuteKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVERTMOVEstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVERTMOVEavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVERTMOVEvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVERTMOVEstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVERTMOVEavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVERTMOVEvalue);
			WriteDatToCom("PA_RightSteerWhlVertMove",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLHOZLSWPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLHOZLSWPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLHOZLSWPvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLHOZLSWPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLHOZLSWPavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLHOZLSWPvalue);
			WriteDatToCom("PA_RightSteerWhlHozlSwp",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVERTSWPstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVERTSWPavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLVERTSWPvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVERTSWPstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVERTSWPavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLVERTSWPvalue);
			WriteDatToCom("PA_RightSteerWhlVertSwp",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLTRIPKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLTRIPKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLTRIPKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLTRIPKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLTRIPKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLTRIPKEYvalue);
			WriteDatToCom("PA_RightSteerWhlTripKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLWECHATKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLWECHATKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIGHTSTEERWHLWECHATKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLWECHATKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLWECHATKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_RIGHTSTEERWHLWECHATKEYvalue);
			WriteDatToCom("PA_RightSteerWhlWeChatKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SNGTRIPKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SNGTRIPKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_SNGTRIPKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_SNGTRIPKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_SNGTRIPKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_SNGTRIPKEYvalue);
			WriteDatToCom("PA_SngTripKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DRVRMODPADLstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DRVRMODPADLavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DRVRMODPADLvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_DRVRMODPADLstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DRVRMODPADLavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_DRVRMODPADLvalue);
			WriteDatToCom("PA_DrvrModPadl",3, status, availability, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CUSTOMDEFKEYstatus)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CUSTOMDEFKEYavailability)
			||GetFocus() == GetDlgItem(IDC_EDITPA_CUSTOMDEFKEYvalue)
			)
		{
				UpdateData(TRUE);
			UINT status = GetDlgItemInt(IDC_EDITPA_CUSTOMDEFKEYstatus);
			UINT availability = GetDlgItemInt(IDC_EDITPA_CUSTOMDEFKEYavailability);
			UINT value = GetDlgItemInt(IDC_EDITPA_CUSTOMDEFKEYvalue);
			WriteDatToCom("PA_CustomDefKey",3, status, availability, value);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
