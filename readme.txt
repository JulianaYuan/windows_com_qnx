�˴����Ŀ����ʹ��windowsӦ�ó������qnxӦ�ó����Ա���û�еײ�����ʱ����HMI����ʾ���ӿ���sharememory��


1. comControlPA��һ��windowsӦ�ó���ͨ�����ڷ����������winPAApi����sharememory��PA�ӿڲ������Ӷ�ʵ����qnx���ýӿ�ֵ���ı�qnx��Ļ��ʾ��
	a..\comControlPA\comControlPA\gencode\genFuncFromPa.py��һ��python�ű���ʹ��python3, �������Ը���sharememory�ӿڶ����Զ����ɴ��룻
	b..�����Զ����ɵ�.\comControlPA\comControlPA\gencode\paFunc\Ŀ¼�µ����д����ļ���winPAApiʹ�ã�Ӧ��ʱ��copy��.\winPAApi\src\paFunc\ͬ��Ŀ¼�£�
	c..\comControlPA\comControlPA\gencode\comControlPA.rc��.\comControlPA\comControlPA\gencode\Resource.h�����ɵ�MFC��Դ�ļ���
		�踴�Ƶ�.\comControlPA\comControlPA\Ŀ¼�£������ֶ���comControlPA.rc���Ϊunicode��ʽ���ܱ�MFCʶ�𲢼��أ�
	d..\comControlPA\comControlPA\Dlg\comControlPADlg.cpp��.\comControlPA\comControlPA\Dlg\comControlPADlg.h�����Ի��򣬲������ӶԻ�����صĴ����ɽű��Զ�����
	e..\comControlPA\comControlPA\Dlg\tabDlg\�����������е��ӶԻ��򣬳���OutputTab0Dlg�Ǵ�������Ի����⣬�������Ǹ���pa�ӿ��Զ����ɵ��ӶԻ���
	f..\comControlPA\comControlPA\sharedmemory\pool ��������sharememory��PA�ӿ��ļ�������python�ű������Ա��Զ����ɴ��룬��comControlPA�в�������룬��winPAApi�в�����룬
		����.\winPAApi\src\sharedmemory\pool\�еĽӿ��ļ�������ȫһ�¡�
	g.����ʱ���Ӵ���֮ǰ����ص���������ʹ�ô��ڵĹ��ߣ����򴮿ڴ�ʧ�ܣ�����ʹ�á�

2. winPAApi��һ��qnxӦ�ó��򣬱�comControlPA�������У�����sharememory��PA�ӿڲ���������qnx��ʹ�ô˽ӿڵ�HMI���Ի�ȡ�����õĽӿ�ֵ�Ӷ��ı���ʾ��