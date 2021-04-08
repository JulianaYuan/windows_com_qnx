
// comControlPADlg.cpp : implementation file
//

#include "stdafx.h"
#include "comControlPA.h"
#include "comControlPADlg.h"
#include "afxdialogex.h"
#include <Dbt.h>
#include <sysinfoapi.h>
#include <winnt.h>

#include "Setupapi.h"
#pragma comment(lib, "Setupapi.lib")

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CcomControlPADlg dialog



CcomControlPADlg::CcomControlPADlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_COMCONTROLPA_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CcomControlPADlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBOComID, mComboBoxComId);
	DDX_Control(pDX, IDC_BUTTONConnect, mCButtonConnect);
	DDX_Control(pDX, IDC_TAB1, mCTabCtrl);
}

BEGIN_MESSAGE_MAP(CcomControlPADlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_COMBOComID, &CcomControlPADlg::OnCbnSelchangeComID)
	ON_BN_CLICKED(IDC_BUTTONConnect, &CcomControlPADlg::OnBnClickedConnect)
	ON_WM_DEVICECHANGE()
	ON_WM_DESTROY()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CcomControlPADlg::OnSelchangeTab1)
END_MESSAGE_MAP()


// CcomControlPADlg message handlers

BOOL CcomControlPADlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.
	printf("OnInitDialog\n");
	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	//InitComList();
	InitTabDlgItem();
	InitComListFromReg();
	InitComboBox();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CcomControlPADlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CcomControlPADlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CcomControlPADlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

BOOL CcomControlPADlg::OnDeviceChange(UINT nEventType, DWORD dwData)
{
	DEV_BROADCAST_HDR* dhr = (DEV_BROADCAST_HDR *)dwData;
	CString dat;
	
	switch (nEventType)
	{
	case DBT_DEVICEREMOVECOMPLETE:
	case DBT_DEVICEARRIVAL:
		if (dhr->dbch_devicetype == DBT_DEVTYP_PORT)
		{
			PDEV_BROADCAST_PORT lpdbv = (PDEV_BROADCAST_PORT)dhr;
			//int len = strlen(lpdbv->dbcp_name);
			CString name(lpdbv->dbcp_name);//COM8
			int port = 0;
			//sscanf((name.GetBuffer(0)), "COM%d", &port);
		
			//dat.Format(_T("(%x,%x,%x,%s),%x,%s,%x"), dbd->dbcc_classguid.Data1, dbd->dbcc_classguid.Data2, dbd->dbcc_classguid.Data3, dbd->dbcc_classguid.Data4, dbd->dbcc_devicetype, dbd->dbcc_name, dbd->dbcc_size);
			if(DBT_DEVICEREMOVECOMPLETE == nEventType)
			{
				//printf("DBT_DEVICEREMOVECOMPLETE %d\n", dwData);
			
				CString msg = CString("DBT_DEVICEREMOVECOMPLETE! ")+ name;
				CloseHandle(mMapCom[name]);
				theApp.setHandle(INVALID_HANDLE_VALUE);
				mMapCom.erase(name);
				//AfxMessageBox(LPCTSTR(msg));
				RefreshCom(false,name);
			}
			else
			{
				//printf("DBT_DEVICEARRIVAL %d\n", dwData);
				CString msg = CString("DBT_DEVICEARRIVAL! ") + name;
				mMapCom[name]= INVALID_HANDLE_VALUE;
				RefreshCom(true,name);
				//AfxMessageBox(LPCTSTR(msg));
			}
		}
		
		break;
	default:
		break;
	}
	return TRUE;
}

void CcomControlPADlg::RefreshCom(BOOL add, CString nm)
{ 
	
	if(TRUE == add)
	{
		mComboBoxComId.AddString(nm);
	}	
	else
	{
		int idx = mComboBoxComId.FindString(0,nm);
		mComboBoxComId.DeleteString(idx);
	}
	if (mComID == nm)
	{
		mComboBoxComId.EnableWindow(TRUE);
		mCButtonConnect.EnableWindow(TRUE);
		mComboBoxComId.SetCurSel(0);
	}
	
}

void CcomControlPADlg::InitComboBox()
{
	int cnt = mMapCom.size();
	std::map<CString, HANDLE>::iterator it = mMapCom.begin();
	for (; it != mMapCom.end(); it++)
	{
		mComboBoxComId.AddString(it->first);
	}
	mComboBoxComId.SetCurSel(0);
	mComboBoxComId.GetLBText(0, mComID);
}
void CcomControlPADlg::OnCbnSelchangeComID()
{
	// TODO: Add your control notification handler code here
	int idx = mComboBoxComId.GetCurSel();
	mComboBoxComId.GetLBText(idx, mComID);
}


void CcomControlPADlg::OnBnClickedConnect()
{
	// TODO: Add your control notification handler code here
	if (TRUE == openComSync(mComID))
	{
		mComboBoxComId.EnableWindow(FALSE);
		mCButtonConnect.EnableWindow(FALSE);
	}
}

void CcomControlPADlg::InitComList()
{
	GUID GUID_DEVCLASS_PORTS;
	HDEVINFO hDevInfo = SetupDiGetClassDevs(&GUID_DEVCLASS_PORTS, NULL, NULL, 0);
	HANDLE hCom;
	if (hDevInfo)
	{
		int iy = 0;
		SP_DEVINFO_DATA SpDevInfo = { sizeof(SP_DEVINFO_DATA) };
		DWORD iDevIndex = 0;
		BOOL isB = SetupDiEnumDeviceInfo(hDevInfo, iDevIndex, &SpDevInfo);
		for (; isB; iDevIndex++)
		{
			TCHAR szName[512] = { 0 };
			if (SetupDiGetDeviceRegistryProperty(hDevInfo, &SpDevInfo, SPDRP_FRIENDLYNAME,
				NULL, (PBYTE)szName, sizeof(szName), NULL))
			{
				_tprintf(_T("%s\n"), szName);
				CString com, str, strComOpen;
				str.Format(_T("%s"), szName);
				int posBeg = str.Find('(');
				int posEnd = str.Find(')');
				com = str.Mid(posBeg + 1, posEnd - posBeg - 1);
				strComOpen = _T("\\\\.\\") + com;
				hCom = CreateFile(strComOpen, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);
				if (INVALID_HANDLE_VALUE == hCom/* || ComYanzheng == com*/)
				{
					DWORD error = ::GetLastError();
				}
				else
				{
					mMapCom[com] = hCom;
					//ComYanzheng = com;
					//ComY[iy] = str;
					iy++;
				}
				//CloseHandle(hCom);
			}
		}
		SetupDiDestroyDeviceInfoList(hDevInfo);
	}
}

void CcomControlPADlg::InitComListFromReg()
{
	HKEY hKey;
	LONG ret;
	OSVERSIONINFO osvi;
	BOOL bOsVersionInfoEx;
	char comm_name[200], ValueName[200];
	int i;
	DWORD sType, Reserved, cbData, cbValueName;

	//hIcon = AfxGetApp()->LoadIcon(IDI_HARDWARE);
	//SetIcon(hIcon, false);

	ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
	osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

	//memset(keyinfo, 0, 100);
	//strcpy(keyinfo, "HARDWARE\\DEVICEMAP\\SERIALCOMM");
	CString keyinfo = CString("HARDWARE\\DEVICEMAP\\SERIALCOMM");
	i = 0; sType = REG_SZ; Reserved = 0;
	bOsVersionInfoEx = GetVersionEx(&osvi);
	ret = RegOpenKeyEx(HKEY_LOCAL_MACHINE, LPCWSTR(keyinfo), 0, KEY_ALL_ACCESS, &hKey);
	if (ret == ERROR_SUCCESS) {
		// 10-25
		if (osvi.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS)
		{
			for (i = 1; i <= 128; i++)
			{
				sprintf(comm_name, "COM%d", i);

			}
		}
		else if (osvi.dwPlatformId == VER_PLATFORM_WIN32_NT)
		{
			do
			{
				cbData = 200; cbValueName = 200;
				memset(comm_name, 0, 200);
				memset(ValueName, 0, 200);
				ret = RegEnumValue(hKey, i, LPWSTR(ValueName), &cbValueName, NULL, &sType, (LPBYTE)comm_name, &cbData);
				CString id;
				id.Format(_T("COM%d"), cbValueName);
				if (ret == ERROR_SUCCESS)
				{
					mMapCom[id] = INVALID_HANDLE_VALUE;
				}
				i++;
			} while (ret == ERROR_SUCCESS);
		}
	}
	RegCloseKey(hKey);
}

bool CcomControlPADlg::openComSync(CString comId)
{
	CString strComOpen = _T("\\\\.\\") + comId;
	mMapCom[comId] = CreateFile(strComOpen,
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		OPEN_EXISTING,
		0,
		NULL);

	if (mMapCom[comId] == (HANDLE)-1)
	{
		AfxMessageBox(LPCTSTR("OPEN com Fail!"));
		return FALSE;
	}
	theApp.setHandle(mMapCom[comId]);
	SetComBaudRate();
	WriteDatToCom();
	ReadDatFromCom();
	//mOutputDlg.startTimer();
	return TRUE;
}

bool CcomControlPADlg::openComAsync(LPCWSTR comId)
{
	mMapCom[comId] = CreateFile(comId,
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED,
		NULL);

	if (mMapCom[comId] == INVALID_HANDLE_VALUE)
	{
		//AfxMessageBox(LPCTSTR("OPEN com Fail!"));
		return FALSE;
	}
	theApp.setHandle(mMapCom[comId]);
	SetComBaudRate();
	//mOutputDlg.startTimer();
	WriteDatToCom();
	ReadDatFromCom();
	return TRUE;
}

void CcomControlPADlg::SetComBaudRate()
{
	DCB dcb;
	if(INVALID_HANDLE_VALUE!=mMapCom[mComID])
	{
		GetCommState(mMapCom[mComID], &dcb);
		dcb.BaudRate = 115200;
		SetCommState(mMapCom[mComID], &dcb);
	}
}
bool CcomControlPADlg::ReadDatFromCom()
{
	HANDLE hdl = theApp.getHandle();

	char IpBuffer[1024]; 

	DWORD nBytesSent = 0;
	memset(IpBuffer, 0, 1024);
	if (INVALID_HANDLE_VALUE != hdl)
	{
		BOOL ir = TRUE;			
		memset(IpBuffer, 0, 1024);
		if (!ReadFile(hdl, IpBuffer, 1024, &nBytesSent, NULL))
		{
			GetLastError();
			ir = FALSE;
		}
		//ir = ReadFile(hdl, IpBuffer, 1024, &nBytesSent, NULL);
		//printf("%s, %d\n", IpBuffer, nBytesSent);
		CString txt= CString(IpBuffer);
		int length = mOutputDlg.mCEditComOutput.GetWindowTextLength();
		mOutputDlg.mCEditComOutput.SetSel(length, length);
		mOutputDlg.mCEditComOutput.ReplaceSel(txt);
		printf("exit while\n");
	}

	return TRUE;
}
bool CcomControlPADlg::WriteDatToCom()
{

	char IpBuffer[] = "cd /usr/bin/dhu-cluster/\r";
	char IpBuffer2[] = "ls -la\r";
	//char IpBuffer3[] = "./cluster_hmi_bak &\r";

	DWORD nNumberOfBytesToWrite =
		strlen(IpBuffer);
	DWORD nBytesSent;
	if (INVALID_HANDLE_VALUE != mMapCom[mComID])
	{
		WriteFile(mMapCom[mComID], IpBuffer, nNumberOfBytesToWrite, &nBytesSent, NULL);
		WriteFile(mMapCom[mComID], IpBuffer2, strlen(IpBuffer2), &nBytesSent, NULL);
		//WriteFile(mMapCom[mComID], IpBuffer3, strlen(IpBuffer3), &nBytesSent, NULL);
	}

	return TRUE;
}



void CcomControlPADlg::OnDestroy()
{
	CDialogEx::OnDestroy();

	// TODO: Add your message handler code here
	CloseHandle(mMapCom[mComID]);
}

void CcomControlPADlg::InitTabDlgItem()
{
	
	mOutputDlg.Create(IDD_DIALOGOUTPUT_TAB0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_OUTPUT_DLG, _T("com output"));
	
	/********auto gen dlgCreateAndInsertToTab start********/
	mpa_adas0Dlg.Create(IDD_DIALOGPA_ADAS0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_ADAS0_DLG, _T("pa_adas0"));
	mpa_adas1Dlg.Create(IDD_DIALOGPA_ADAS1, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_ADAS1_DLG, _T("pa_adas1"));
	mpa_adas2Dlg.Create(IDD_DIALOGPA_ADAS2, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_ADAS2_DLG, _T("pa_adas2"));
	mpa_chime0Dlg.Create(IDD_DIALOGPA_CHIME0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_CHIME0_DLG, _T("pa_chime0"));
	mpa_climate0Dlg.Create(IDD_DIALOGPA_CLIMATE0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_CLIMATE0_DLG, _T("pa_climate0"));
	mpa_domain0Dlg.Create(IDD_DIALOGPA_DOMAIN0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_DOMAIN0_DLG, _T("pa_domain0"));
	mpa_dvr0Dlg.Create(IDD_DIALOGPA_DVR0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_DVR0_DLG, _T("pa_dvr0"));
	mpa_gauge0Dlg.Create(IDD_DIALOGPA_GAUGE0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_GAUGE0_DLG, _T("pa_gauge0"));
	mpa_hardkey0Dlg.Create(IDD_DIALOGPA_HARDKEY0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_HARDKEY0_DLG, _T("pa_hardkey0"));
	mpa_hardkey1Dlg.Create(IDD_DIALOGPA_HARDKEY1, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_HARDKEY1_DLG, _T("pa_hardkey1"));
	mpa_media0Dlg.Create(IDD_DIALOGPA_MEDIA0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_MEDIA0_DLG, _T("pa_media0"));
	mpa_navi0Dlg.Create(IDD_DIALOGPA_NAVI0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_NAVI0_DLG, _T("pa_navi0"));
	mpa_notification0Dlg.Create(IDD_DIALOGPA_NOTIFICATION0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_NOTIFICATION0_DLG, _T("pa_notification0"));
	mpa_phone0Dlg.Create(IDD_DIALOGPA_PHONE0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_PHONE0_DLG, _T("pa_phone0"));
	mpa_rearmirror0Dlg.Create(IDD_DIALOGPA_REARMIRROR0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_REARMIRROR0_DLG, _T("pa_rearmirror0"));
	mpa_telltale0Dlg.Create(IDD_DIALOGPA_TELLTALE0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_TELLTALE0_DLG, _T("pa_telltale0"));
	mpa_telltale1Dlg.Create(IDD_DIALOGPA_TELLTALE1, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_TELLTALE1_DLG, _T("pa_telltale1"));
	mpa_telltale2Dlg.Create(IDD_DIALOGPA_TELLTALE2, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_TELLTALE2_DLG, _T("pa_telltale2"));
	mpa_trip0Dlg.Create(IDD_DIALOGPA_TRIP0, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_TRIP0_DLG, _T("pa_trip0"));
	mpa_trip1Dlg.Create(IDD_DIALOGPA_TRIP1, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_TRIP1_DLG, _T("pa_trip1"));
	mpa_trip2Dlg.Create(IDD_DIALOGPA_TRIP2, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_TRIP2_DLG, _T("pa_trip2"));
	mpa_trip3Dlg.Create(IDD_DIALOGPA_TRIP3, &mCTabCtrl);
	mCTabCtrl.InsertItem(E_PA_TRIP3_DLG, _T("pa_trip3"));
	/********auto gen dlgCreateAndInsertToTab end********/
	CRect rc;
	mCTabCtrl.GetClientRect(rc);
	rc.top += 20;
	mOutputDlg.MoveWindow(&rc);	
	rc.bottom -= 20;
	mOutputDlg.mCEditComOutput.MoveWindow(&rc);
	//display init page
	mOutputDlg.ShowWindow(SW_SHOW);
	rc.bottom += 20;

	/********auto gen initTabState start********/
	mpa_adas0Dlg.MoveWindow(&rc);
	mpa_adas0Dlg.ShowWindow(SW_HIDE);
	mpa_adas1Dlg.MoveWindow(&rc);
	mpa_adas1Dlg.ShowWindow(SW_HIDE);
	mpa_adas2Dlg.MoveWindow(&rc);
	mpa_adas2Dlg.ShowWindow(SW_HIDE);
	mpa_chime0Dlg.MoveWindow(&rc);
	mpa_chime0Dlg.ShowWindow(SW_HIDE);
	mpa_climate0Dlg.MoveWindow(&rc);
	mpa_climate0Dlg.ShowWindow(SW_HIDE);
	mpa_domain0Dlg.MoveWindow(&rc);
	mpa_domain0Dlg.ShowWindow(SW_HIDE);
	mpa_dvr0Dlg.MoveWindow(&rc);
	mpa_dvr0Dlg.ShowWindow(SW_HIDE);
	mpa_gauge0Dlg.MoveWindow(&rc);
	mpa_gauge0Dlg.ShowWindow(SW_HIDE);
	mpa_hardkey0Dlg.MoveWindow(&rc);
	mpa_hardkey0Dlg.ShowWindow(SW_HIDE);
	mpa_hardkey1Dlg.MoveWindow(&rc);
	mpa_hardkey1Dlg.ShowWindow(SW_HIDE);
	mpa_media0Dlg.MoveWindow(&rc);
	mpa_media0Dlg.ShowWindow(SW_HIDE);
	mpa_navi0Dlg.MoveWindow(&rc);
	mpa_navi0Dlg.ShowWindow(SW_HIDE);
	mpa_notification0Dlg.MoveWindow(&rc);
	mpa_notification0Dlg.ShowWindow(SW_HIDE);
	mpa_phone0Dlg.MoveWindow(&rc);
	mpa_phone0Dlg.ShowWindow(SW_HIDE);
	mpa_rearmirror0Dlg.MoveWindow(&rc);
	mpa_rearmirror0Dlg.ShowWindow(SW_HIDE);
	mpa_telltale0Dlg.MoveWindow(&rc);
	mpa_telltale0Dlg.ShowWindow(SW_HIDE);
	mpa_telltale1Dlg.MoveWindow(&rc);
	mpa_telltale1Dlg.ShowWindow(SW_HIDE);
	mpa_telltale2Dlg.MoveWindow(&rc);
	mpa_telltale2Dlg.ShowWindow(SW_HIDE);
	mpa_trip0Dlg.MoveWindow(&rc);
	mpa_trip0Dlg.ShowWindow(SW_HIDE);
	mpa_trip1Dlg.MoveWindow(&rc);
	mpa_trip1Dlg.ShowWindow(SW_HIDE);
	mpa_trip2Dlg.MoveWindow(&rc);
	mpa_trip2Dlg.ShowWindow(SW_HIDE);
	mpa_trip3Dlg.MoveWindow(&rc);
	mpa_trip3Dlg.ShowWindow(SW_HIDE);
	/********auto gen initTabState end********/
}



void CcomControlPADlg::OnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: Add your control notification handler code here
	*pResult = 0;
	int curSel = mCTabCtrl.GetCurSel();
	if(0!=curSel)
	{ 
		mOutputDlg.endTimer();		
	}
	mOutputDlg.ShowWindow(SW_HIDE);
	/********auto gen hidePaDlg start********/
		mpa_adas0Dlg.ShowWindow(SW_HIDE);
		mpa_adas1Dlg.ShowWindow(SW_HIDE);
		mpa_adas2Dlg.ShowWindow(SW_HIDE);
		mpa_chime0Dlg.ShowWindow(SW_HIDE);
		mpa_climate0Dlg.ShowWindow(SW_HIDE);
		mpa_domain0Dlg.ShowWindow(SW_HIDE);
		mpa_dvr0Dlg.ShowWindow(SW_HIDE);
		mpa_gauge0Dlg.ShowWindow(SW_HIDE);
		mpa_hardkey0Dlg.ShowWindow(SW_HIDE);
		mpa_hardkey1Dlg.ShowWindow(SW_HIDE);
		mpa_media0Dlg.ShowWindow(SW_HIDE);
		mpa_navi0Dlg.ShowWindow(SW_HIDE);
		mpa_notification0Dlg.ShowWindow(SW_HIDE);
		mpa_phone0Dlg.ShowWindow(SW_HIDE);
		mpa_rearmirror0Dlg.ShowWindow(SW_HIDE);
		mpa_telltale0Dlg.ShowWindow(SW_HIDE);
		mpa_telltale1Dlg.ShowWindow(SW_HIDE);
		mpa_telltale2Dlg.ShowWindow(SW_HIDE);
		mpa_trip0Dlg.ShowWindow(SW_HIDE);
		mpa_trip1Dlg.ShowWindow(SW_HIDE);
		mpa_trip2Dlg.ShowWindow(SW_HIDE);
		mpa_trip3Dlg.ShowWindow(SW_HIDE);
	/********auto gen hidePaDlg end********/
	switch (curSel)
	{
	case E_OUTPUT_DLG:
		mOutputDlg.ShowWindow(SW_SHOW);		
		mOutputDlg.startTimer();
		break;
		/********auto gen showPaDlg start********/
	case E_PA_ADAS0_DLG:
		mpa_adas0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_ADAS1_DLG:
		mpa_adas1Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_ADAS2_DLG:
		mpa_adas2Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_CHIME0_DLG:
		mpa_chime0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_CLIMATE0_DLG:
		mpa_climate0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_DOMAIN0_DLG:
		mpa_domain0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_DVR0_DLG:
		mpa_dvr0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_GAUGE0_DLG:
		mpa_gauge0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_HARDKEY0_DLG:
		mpa_hardkey0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_HARDKEY1_DLG:
		mpa_hardkey1Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_MEDIA0_DLG:
		mpa_media0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_NAVI0_DLG:
		mpa_navi0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_NOTIFICATION0_DLG:
		mpa_notification0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_PHONE0_DLG:
		mpa_phone0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_REARMIRROR0_DLG:
		mpa_rearmirror0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_TELLTALE0_DLG:
		mpa_telltale0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_TELLTALE1_DLG:
		mpa_telltale1Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_TELLTALE2_DLG:
		mpa_telltale2Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_TRIP0_DLG:
		mpa_trip0Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_TRIP1_DLG:
		mpa_trip1Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_TRIP2_DLG:
		mpa_trip2Dlg.ShowWindow(SW_SHOW);
		break;
	case E_PA_TRIP3_DLG:
		mpa_trip3Dlg.ShowWindow(SW_SHOW);
		break;
		/********auto gen showPaDlg end********/
	default:
		break;
	}
}
