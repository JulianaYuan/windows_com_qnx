此代码的目的是使用windows应用程序控制qnx应用程序以便在没有底层数据时测试HMI的显示。接口是sharememory。


1. comControlPA是一个windows应用程序，通过串口发送命令调用winPAApi设置sharememory的PA接口参数，从而实现向qnx设置接口值，改变qnx屏幕显示。
	a..\comControlPA\comControlPA\gencode\genFuncFromPa.py是一个python脚本，使用python3, 运行用以根据sharememory接口定义自动生成代码；
	b..其中自动生成的.\comControlPA\comControlPA\gencode\paFunc\目录下的所有代码文件供winPAApi使用，应用时需copy到.\winPAApi\src\paFunc\同名目录下；
	c..\comControlPA\comControlPA\gencode\comControlPA.rc和.\comControlPA\comControlPA\gencode\Resource.h是生成的MFC资源文件，
		需复制到.\comControlPA\comControlPA\目录下，并且手动将comControlPA.rc另存为unicode格式才能被MFC识别并加载；
	d..\comControlPA\comControlPA\Dlg\comControlPADlg.cpp和.\comControlPA\comControlPA\Dlg\comControlPADlg.h是主对话框，部分与子对话框相关的代码由脚本自动生成
	e..\comControlPA\comControlPA\Dlg\tabDlg\这里面是所有的子对话框，除了OutputTab0Dlg是串口输出对话框外，其它都是根据pa接口自动生成的子对话框。
	f..\comControlPA\comControlPA\sharedmemory\pool 这里面是sharememory的PA接口文件，供给python脚本解析以便自动生成代码，在comControlPA中不参与编译，在winPAApi中参与编译，
		需与.\winPAApi\src\sharedmemory\pool\中的接口文件保持完全一致。
	g.运行时连接串口之前必须关掉其它所有使用串口的工具，否则串口打开失败，不能使用。

2. winPAApi是一个qnx应用程序，被comControlPA调用运行，设置sharememory的PA接口参数，这样qnx中使用此接口的HMI可以获取到设置的接口值从而改变显示。