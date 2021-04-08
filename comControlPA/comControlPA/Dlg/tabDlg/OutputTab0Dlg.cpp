// OutputTab0Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "comControlPA.h"
#include "OutputTab0Dlg.h"
#include "afxdialogex.h"


// OutputTab0Dlg dialog

IMPLEMENT_DYNAMIC(OutputTab0Dlg, CDialog)

OutputTab0Dlg::OutputTab0Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOGOUTPUT_TAB0, pParent)
{
	//startTimer();
}

OutputTab0Dlg::~OutputTab0Dlg()
{
	endTimer();
}

void OutputTab0Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDITOutput, mCEditComOutput);
	//startTimer();
}


BEGIN_MESSAGE_MAP(OutputTab0Dlg, CDialog)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// OutputTab0Dlg message handlers

bool OutputTab0Dlg::ReadDatFromCom()
{
	HANDLE hdl = theApp.getHandle();
	//3.往串口写数据
	char IpBuffer[1024]; //将要写入的数据
						 //DWORD nNumberOfBytesToWrite = strlen(IpBuffer);    //将要数据长度
	DWORD nBytesSent=0;     //实际数据长度
	memset(IpBuffer, 0, 1024);
	if (INVALID_HANDLE_VALUE != hdl)
	{
		BOOL ir = TRUE;
		
		memset(IpBuffer, 0, 1024);
		ir = ReadFile(hdl, IpBuffer, 1024, &nBytesSent, NULL);
		printf("%s, %d\n", IpBuffer, nBytesSent);
		CString txt= CString(IpBuffer);
		int length = mCEditComOutput.GetWindowTextLength();
		mCEditComOutput.SetSel(length, length);
		mCEditComOutput.ReplaceSel(txt);
	}

	return TRUE;
}
#define TIMER_ID_CHECK_COM_OUTPUT 0xee
#define TIMER_DELAY_CHECK_COM_OUTPUT_MS 2000 //ms
void OutputTab0Dlg::startTimer()
{
	SetTimer(TIMER_ID_CHECK_COM_OUTPUT, TIMER_DELAY_CHECK_COM_OUTPUT_MS,NULL);
}

void OutputTab0Dlg::endTimer()
{
	KillTimer(TIMER_ID_CHECK_COM_OUTPUT);
}

void OutputTab0Dlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	switch (nIDEvent)
	{
	case TIMER_ID_CHECK_COM_OUTPUT:
		ReadDatFromCom();
		break;
	default:
		break;
	}
	CDialog::OnTimer(nIDEvent);
}
