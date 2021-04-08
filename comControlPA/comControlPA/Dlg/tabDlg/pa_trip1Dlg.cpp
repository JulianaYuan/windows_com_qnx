// pa_trip1Dlg.cpp : implementation file
//

// pa_trip1Dlg.cpp : implementation file
#include "stdafx.h"
#include "comControlPA.h"
#include "pa_trip1Dlg.h"
#include "afxdialogex.h"


IMPLEMENT_DYNAMIC(pa_trip1Dlg, CDialog)

pa_trip1Dlg::pa_trip1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGPA_TRIP1, pParent)
{

}

pa_trip1Dlg::~pa_trip1Dlg()
{
}

void pa_trip1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERDISPLAYdata, mCEditPA_DIM_DriverDisplaydata);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERDISPLAYavailability, mCEditPA_DIM_DriverDisplayavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERDISPLAYBGdata, mCEditPA_DIM_DriverDisplayBgdata);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERDISPLAYBGavailability, mCEditPA_DIM_DriverDisplayBgavailability);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERDISPLAYBG2data, mCEditPA_DIM_DriverDisplayBg2data);
	DDX_Control(pDX, IDC_EDITPA_DIM_DRIVERDISPLAYBG2availability, mCEditPA_DIM_DriverDisplayBg2availability);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGPdata, mCEditPA_LeFrntTireMsgPdata);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGPformat, mCEditPA_LeFrntTireMsgPformat);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGPtimeout, mCEditPA_LeFrntTireMsgPtimeout);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGPavailability, mCEditPA_LeFrntTireMsgPavailability);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGPdata, mCEditPA_RiFrntTireMsgPdata);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGPformat, mCEditPA_RiFrntTireMsgPformat);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGPtimeout, mCEditPA_RiFrntTireMsgPtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGPavailability, mCEditPA_RiFrntTireMsgPavailability);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGPdata, mCEditPA_LeReTireMsgPdata);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGPformat, mCEditPA_LeReTireMsgPformat);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGPtimeout, mCEditPA_LeReTireMsgPtimeout);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGPavailability, mCEditPA_LeReTireMsgPavailability);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGPdata, mCEditPA_RiReTireMsgPdata);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGPformat, mCEditPA_RiReTireMsgPformat);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGPtimeout, mCEditPA_RiReTireMsgPtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGPavailability, mCEditPA_RiReTireMsgPavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGTdata, mCEditPA_LeFrntTireMsgTdata);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGTformat, mCEditPA_LeFrntTireMsgTformat);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGTtimeout, mCEditPA_LeFrntTireMsgTtimeout);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGTavailability, mCEditPA_LeFrntTireMsgTavailability);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGTdata, mCEditPA_RiFrntTireMsgTdata);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGTformat, mCEditPA_RiFrntTireMsgTformat);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGTtimeout, mCEditPA_RiFrntTireMsgTtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGTavailability, mCEditPA_RiFrntTireMsgTavailability);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGTdata, mCEditPA_LeReTireMsgTdata);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGTformat, mCEditPA_LeReTireMsgTformat);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGTtimeout, mCEditPA_LeReTireMsgTtimeout);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGTavailability, mCEditPA_LeReTireMsgTavailability);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGTdata, mCEditPA_RiReTireMsgTdata);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGTformat, mCEditPA_RiReTireMsgTformat);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGTtimeout, mCEditPA_RiReTireMsgTtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGTavailability, mCEditPA_RiReTireMsgTavailability);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGMSGOLDFLGdata, mCEditPA_LeFrntTireMsgMsgOldFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGMSGOLDFLGtimeout, mCEditPA_LeFrntTireMsgMsgOldFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGMSGOLDFLGdata, mCEditPA_LeReTireMsgMsgOldFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGMSGOLDFLGtimeout, mCEditPA_LeReTireMsgMsgOldFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGMSGOLDFLGdata, mCEditPA_RiFrntTireMsgMsgOldFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGMSGOLDFLGtimeout, mCEditPA_RiFrntTireMsgMsgOldFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGMSGOLDFLGdata, mCEditPA_RiReTireMsgMsgOldFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGMSGOLDFLGtimeout, mCEditPA_RiReTireMsgMsgOldFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGPWARNFLGdata, mCEditPA_LeFrntTireMsgPWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGPWARNFLGtimeout, mCEditPA_LeFrntTireMsgPWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGPWARNFLGdata, mCEditPA_LeReTireMsgPWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGPWARNFLGtimeout, mCEditPA_LeReTireMsgPWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGPWARNFLGdata, mCEditPA_RiFrntTireMsgPWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGPWARNFLGtimeout, mCEditPA_RiFrntTireMsgPWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGPWARNFLGdata, mCEditPA_RiReTireMsgPWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGPWARNFLGtimeout, mCEditPA_RiReTireMsgPWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGTWARNFLGdata, mCEditPA_LeFrntTireMsgTWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGTWARNFLGtimeout, mCEditPA_LeFrntTireMsgTWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGTWARNFLGdata, mCEditPA_LeReTireMsgTWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGTWARNFLGtimeout, mCEditPA_LeReTireMsgTWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGTWARNFLGdata, mCEditPA_RiFrntTireMsgTWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGTWARNFLGtimeout, mCEditPA_RiFrntTireMsgTWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGTWARNFLGdata, mCEditPA_RiReTireMsgTWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGTWARNFLGtimeout, mCEditPA_RiReTireMsgTWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGSYSWARNFLGdata, mCEditPA_LeFrntTireMsgSysWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGSYSWARNFLGtimeout, mCEditPA_LeFrntTireMsgSysWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGSYSWARNFLGdata, mCEditPA_LeReTireMsgSysWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGSYSWARNFLGtimeout, mCEditPA_LeReTireMsgSysWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGSYSWARNFLGdata, mCEditPA_RiFrntTireMsgSysWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGSYSWARNFLGtimeout, mCEditPA_RiFrntTireMsgSysWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGSYSWARNFLGdata, mCEditPA_RiReTireMsgSysWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGSYSWARNFLGtimeout, mCEditPA_RiReTireMsgSysWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGFASTLOSEWARNFLGdata, mCEditPA_LeFrntTireMsgFastLoseWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGFASTLOSEWARNFLGtimeout, mCEditPA_LeFrntTireMsgFastLoseWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGFASTLOSEWARNFLGdata, mCEditPA_LeReTireMsgFastLoseWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_LERETIREMSGFASTLOSEWARNFLGtimeout, mCEditPA_LeReTireMsgFastLoseWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGFASTLOSEWARNFLGdata, mCEditPA_RiFrntTireMsgFastLoseWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIFRNTTIREMSGFASTLOSEWARNFLGtimeout, mCEditPA_RiFrntTireMsgFastLoseWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGFASTLOSEWARNFLGdata, mCEditPA_RiReTireMsgFastLoseWarnFlgdata);
	DDX_Control(pDX, IDC_EDITPA_RIRETIREMSGFASTLOSEWARNFLGtimeout, mCEditPA_RiReTireMsgFastLoseWarnFlgtimeout);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGBATTLOSTdata, mCEditPA_LeFrntTireMsgBattLoStdata);
	DDX_Control(pDX, IDC_EDITPA_LEFRNTTIREMSGBATTLOSTtimeout, mCEditPA_LeFrntTireMsgBattLoSttimeout);
}


BEGIN_MESSAGE_MAP(pa_trip1Dlg, CDialog)

END_MESSAGE_MAP()



bool pa_trip1Dlg::WriteDatToCom(string paName, int count, ...)		    
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

// pa_trip1Dlg message handlers
BOOL pa_trip1Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)
	{
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERDISPLAYdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERDISPLAYavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERDISPLAYdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERDISPLAYavailability);
			WriteDatToCom("PA_DIM_DriverDisplay",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERDISPLAYBGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERDISPLAYBGavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERDISPLAYBGdata);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERDISPLAYBGavailability);
			WriteDatToCom("PA_DIM_DriverDisplayBg",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERDISPLAYBG2data)
			||GetFocus() == GetDlgItem(IDC_EDITPA_DIM_DRIVERDISPLAYBG2availability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERDISPLAYBG2data);
			UINT availability = GetDlgItemInt(IDC_EDITPA_DIM_DRIVERDISPLAYBG2availability);
			WriteDatToCom("PA_DIM_DriverDisplayBg2",2, data, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGPformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGPtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGPdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGPformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGPtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGPavailability);
			WriteDatToCom("PA_LeFrntTireMsgP",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGPformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGPtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGPdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGPformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGPtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGPavailability);
			WriteDatToCom("PA_RiFrntTireMsgP",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGPformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGPtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LERETIREMSGPdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_LERETIREMSGPformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LERETIREMSGPtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LERETIREMSGPavailability);
			WriteDatToCom("PA_LeReTireMsgP",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGPdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGPformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGPtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGPavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGPdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGPformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGPtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGPavailability);
			WriteDatToCom("PA_RiReTireMsgP",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGTformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGTtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGTavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGTdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGTformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGTtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGTavailability);
			WriteDatToCom("PA_LeFrntTireMsgT",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGTformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGTtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGTavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGTdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGTformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGTtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGTavailability);
			WriteDatToCom("PA_RiFrntTireMsgT",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGTformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGTtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGTavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LERETIREMSGTdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_LERETIREMSGTformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LERETIREMSGTtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_LERETIREMSGTavailability);
			WriteDatToCom("PA_LeReTireMsgT",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGTformat)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGTtimeout)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGTavailability)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGTdata);
			UINT format = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGTformat);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGTtimeout);
			UINT availability = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGTavailability);
			WriteDatToCom("PA_RiReTireMsgT",4, data, format, timeout, availability);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGMSGOLDFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGMSGOLDFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGMSGOLDFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGMSGOLDFLGtimeout);
			WriteDatToCom("PA_LeFrntTireMsgMsgOldFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGMSGOLDFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGMSGOLDFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LERETIREMSGMSGOLDFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LERETIREMSGMSGOLDFLGtimeout);
			WriteDatToCom("PA_LeReTireMsgMsgOldFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGMSGOLDFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGMSGOLDFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGMSGOLDFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGMSGOLDFLGtimeout);
			WriteDatToCom("PA_RiFrntTireMsgMsgOldFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGMSGOLDFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGMSGOLDFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGMSGOLDFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGMSGOLDFLGtimeout);
			WriteDatToCom("PA_RiReTireMsgMsgOldFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGPWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGPWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGPWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGPWARNFLGtimeout);
			WriteDatToCom("PA_LeFrntTireMsgPWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGPWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGPWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LERETIREMSGPWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LERETIREMSGPWARNFLGtimeout);
			WriteDatToCom("PA_LeReTireMsgPWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGPWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGPWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGPWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGPWARNFLGtimeout);
			WriteDatToCom("PA_RiFrntTireMsgPWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGPWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGPWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGPWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGPWARNFLGtimeout);
			WriteDatToCom("PA_RiReTireMsgPWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGTWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGTWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGTWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGTWARNFLGtimeout);
			WriteDatToCom("PA_LeFrntTireMsgTWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGTWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGTWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LERETIREMSGTWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LERETIREMSGTWARNFLGtimeout);
			WriteDatToCom("PA_LeReTireMsgTWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGTWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGTWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGTWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGTWARNFLGtimeout);
			WriteDatToCom("PA_RiFrntTireMsgTWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGTWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGTWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGTWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGTWARNFLGtimeout);
			WriteDatToCom("PA_RiReTireMsgTWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGSYSWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGSYSWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGSYSWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGSYSWARNFLGtimeout);
			WriteDatToCom("PA_LeFrntTireMsgSysWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGSYSWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGSYSWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LERETIREMSGSYSWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LERETIREMSGSYSWARNFLGtimeout);
			WriteDatToCom("PA_LeReTireMsgSysWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGSYSWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGSYSWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGSYSWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGSYSWARNFLGtimeout);
			WriteDatToCom("PA_RiFrntTireMsgSysWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGSYSWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGSYSWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGSYSWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGSYSWARNFLGtimeout);
			WriteDatToCom("PA_RiReTireMsgSysWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGFASTLOSEWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGFASTLOSEWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGFASTLOSEWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGFASTLOSEWARNFLGtimeout);
			WriteDatToCom("PA_LeFrntTireMsgFastLoseWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGFASTLOSEWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LERETIREMSGFASTLOSEWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LERETIREMSGFASTLOSEWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LERETIREMSGFASTLOSEWARNFLGtimeout);
			WriteDatToCom("PA_LeReTireMsgFastLoseWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGFASTLOSEWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIFRNTTIREMSGFASTLOSEWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGFASTLOSEWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIFRNTTIREMSGFASTLOSEWARNFLGtimeout);
			WriteDatToCom("PA_RiFrntTireMsgFastLoseWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGFASTLOSEWARNFLGdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_RIRETIREMSGFASTLOSEWARNFLGtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGFASTLOSEWARNFLGdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_RIRETIREMSGFASTLOSEWARNFLGtimeout);
			WriteDatToCom("PA_RiReTireMsgFastLoseWarnFlg",2, data, timeout);
				UpdateData(FALSE);
		}
		if (GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGBATTLOSTdata)
			||GetFocus() == GetDlgItem(IDC_EDITPA_LEFRNTTIREMSGBATTLOSTtimeout)
			)
		{
				UpdateData(TRUE);
			UINT data = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGBATTLOSTdata);
			UINT timeout = GetDlgItemInt(IDC_EDITPA_LEFRNTTIREMSGBATTLOSTtimeout);
			WriteDatToCom("PA_LeFrntTireMsgBattLoSt",2, data, timeout);
				UpdateData(FALSE);
		}
		return true;
	}
	return CDialog::PreTranslateMessage(pMsg);
}
