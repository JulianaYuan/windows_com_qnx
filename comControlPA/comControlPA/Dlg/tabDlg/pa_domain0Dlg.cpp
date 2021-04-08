// pa_domain0Dlg.cpp : implementation file
//

// pa_domain0Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_domain0Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_domain0Dlg, CDialog)

pa_domain0Dlg::pa_domain0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_DOMAIN0, pParent)
{

}

pa_domain0Dlg::~pa_domain0Dlg()
{
}

void pa_domain0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_CLKFMTFORUSEINTvalue, mCEditPA_ClkFmtForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_DATEFMTFORUSEINTvalue, mCEditPA_DateFmtForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_DSTLONGUNITFORUSEINTvalue, mCEditPA_DstLongUnitForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_DSTSHOUNITFORUSEINTvalue, mCEditPA_DstShoUnitForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_FUCNSUNITFORUSEINTvalue, mCEditPA_FuCnsUnitForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_VEHSPDUNITFORUSEINTvalue, mCEditPA_VehSpdUnitForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_AMBTUNITFORUSEINTvalue, mCEditPA_AmbTUnitForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_VOLUNITFORUSEINTvalue, mCEditPA_VolUnitForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_PUNITFORUSEINTvalue, mCEditPA_PUnitForUseIntvalue);
	DDX_Control(pDX, IDC_EDITPA_SAVESETGTOMEMPRMNTvalue, mCEditPA_SaveSetgToMemPrmntvalue);
	DDX_Control(pDX, IDC_EDITPA_DOM_DIMSEQUENCEvalue, mCEditPA_DOM_DIMSequencevalue);
	DDX_Control(pDX, IDC_EDITPA_NOTICEDISPLAYSTATUSvalue, mCEditPA_NoticeDisplayStatusvalue);
	DDX_Control(pDX, IDC_EDITPA_WELCOMEDISPLAYFINISHvalue, mCEditPA_WelcomeDisplayFinishvalue);
	DDX_Control(pDX, IDC_EDITPA_MEMORYFAILUREvalue, mCEditPA_MemoryFailurevalue);
	DDX_Control(pDX, IDC_EDITPA_TRIP_SCREENSWITCH_REQUESTvalue, mCEditPA_Trip_ScreenSwitch_Requestvalue);
}


BEGIN_MESSAGE_MAP(pa_domain0Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_domain0Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_domain0Dlg message handlers
BOOL pa_domain0Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_CLKFMTFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_CLKFMTFORUSEINTvalue);
			WriteDatToCom("PA_ClkFmtForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DATEFMTFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DATEFMTFORUSEINTvalue);
			WriteDatToCom("PA_DateFmtForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DSTLONGUNITFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DSTLONGUNITFORUSEINTvalue);
			WriteDatToCom("PA_DstLongUnitForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DSTSHOUNITFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DSTSHOUNITFORUSEINTvalue);
			WriteDatToCom("PA_DstShoUnitForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_FUCNSUNITFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_FUCNSUNITFORUSEINTvalue);
			WriteDatToCom("PA_FuCnsUnitForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_VEHSPDUNITFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_VEHSPDUNITFORUSEINTvalue);
			WriteDatToCom("PA_VehSpdUnitForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_AMBTUNITFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_AMBTUNITFORUSEINTvalue);
			WriteDatToCom("PA_AmbTUnitForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_VOLUNITFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_VOLUNITFORUSEINTvalue);
			WriteDatToCom("PA_VolUnitForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_PUNITFORUSEINTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_PUNITFORUSEINTvalue);
			WriteDatToCom("PA_PUnitForUseInt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_SAVESETGTOMEMPRMNTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_SAVESETGTOMEMPRMNTvalue);
			WriteDatToCom("PA_SaveSetgToMemPrmnt",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DOM_DIMSEQUENCEvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_DOM_DIMSEQUENCEvalue);
			WriteDatToCom("PA_DOM_DIMSequence",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_NOTICEDISPLAYSTATUSvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_NOTICEDISPLAYSTATUSvalue);
			WriteDatToCom("PA_NoticeDisplayStatus",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_WELCOMEDISPLAYFINISHvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_WELCOMEDISPLAYFINISHvalue);
			WriteDatToCom("PA_WelcomeDisplayFinish",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_MEMORYFAILUREvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_MEMORYFAILUREvalue);
			WriteDatToCom("PA_MemoryFailure",1, value);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_TRIP_SCREENSWITCH_REQUESTvalue)
			)
		{
				UpdateData(TRUE);
			UINT value = GetDlgItemInt(IDC_EDITPA_TRIP_SCREENSWITCH_REQUESTvalue);
			WriteDatToCom("PA_Trip_ScreenSwitch_Request",1, value);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
