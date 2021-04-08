import os
import os.path
import re
import sys
import codecs
import copy

#reload(sys)
#sys.setdefaultencoding('utf-8')
path = '..\\sharedmemory\\pool'
filePathlist=[]
filelist=[]
keyword = '.h'
FilePanameMap={}
numberTypeList=[]

#/*************************************create dictionary from pa.h start***********************************************/
class searchfile(object):
    def __init__(self):
        self._path=path
        self.abspath=os.path.abspath(self._path) # 默认当前目录
    def findfile(self,keyword,root):
 
        for root,dirs,files in os.walk(root):
            for name in files:
                fitfile=filePathlist.append(os.path.join(root, name))
                if keyword in os.path.split(name)[1]:
                    filelist.append(name)
                    #print(filelist)
                #print('\n')
                #print(fitfile)
                #print('\n')
                #print(os.path.join(root, name))
                #print('\n')
                #print(filePathlist)
                print('...........................................')
        for i in filePathlist: 
            if os.path.isfile(i):
                #print(i)
                if keyword in os.path.split(i)[1]:
                    print('yes!',i) # 绝对路径
                    #else:
                    #print('......no keyword!')
    def __call__(self):
        self.findfile(keyword,self.abspath) # 查找带指定字符的文件


def createPanameStructmemberDicInFile(filePth):
    PaNameList=[]
    StrucNameMenberDic = {}
    PaNameStrucNameMenberDic={}
    key = ''
    memberlist=[]
    fo = open(filePth, mode='r',buffering=-1,encoding='utf-8')
    line=fo.readline()
    while (line):
        line=fo.readline()
        txt1 = line.split()
        if('struct' in txt1):
            if('struct' in txt1[0]):
                #print(txt1)
                key = txt1[1]
                memberlist.clear()
                #print(key)
        #print(key)
        #print(memberlist)
        if(';'in line):
            if('}' not in line and 'extern'not in line):
                if('//' not in line.split()[0]):
                    #print(line.split(';')[0].split())
                    text = line.split(';')[0].split()
                    if(len(text)>2):
                        #print(key)
                        memberlist.append(text[2])
                        #print(text[2])
                    else:
                        memberlist.append(text[1])
                        #print(text[1])
                    #print(memberlist)

        if "};" in line:
            #print(key)
            #print(memberlist)
            if key not in StrucNameMenberDic:
                StrucNameMenberDic[key]=memberlist[:]
                #print(StrucNameMenberDic)
    #print(StrucNameMenberDic)
    fo.close()

    fo = open(filePth, mode='r',buffering=-1,encoding='utf-8')
    line=fo.readline()
    while (line):
        line=fo.readline()
        if('extern'in line and '<'in line and '>'in line):
            #print(line)
            strucName = line.split("<")[1].split(">")[0]
            #print(strucName)
            paNm = line.split(">")[1].split(";")[0].split()[0]
            #print(paNm)
            dic={}
            if(strucName in StrucNameMenberDic):
                dic[strucName]=StrucNameMenberDic[strucName]                
            else:
                ls=[]
                ls.append('value')
                dic[strucName]=ls
                if strucName not in numberTypeList:
                    numberTypeList.append(strucName)
            PaNameStrucNameMenberDic[paNm]=dic
    #print(PaNameStrucNameMenberDic)
    #print(numberTypeList)
    fo.close()
    
    return PaNameStrucNameMenberDic


def createFilePanameStructmemberDic():
    #print('createFilePanameMap\n')
    for i in filelist:
        filePth = os.path.join(path, i)
        padic = createPanameStructmemberDicInFile(filePth)
        #print(padic)
        FilePanameMap[i]=padic
    #print(FilePanameMap)
#/*************************************create dictionary from pa.h end***********************************************/

#/*************************************create winPAApi function code from dictionary start***********************************************/       
def genCode_h(key):
    dfText = []
    defh = key.split('.')[0].upper()+"_FUNC_H_"
    txt="#ifndef "+defh
    dfText.append(txt)
    dfText.append("\n")
    txt="#define "+defh
    dfText.append(txt)
    dfText.append("\n")
    dfText.append("\n")
    dfText.append("\n")
    PaNameMemberDic = FilePanameMap[key]
    for paN in PaNameMemberDic:
        txt="void* func"+paN+"(int argc, char *argv[]);"
        dfText.append(txt)
        dfText.append("\n")
    dfText.append("\n")
    dfText.append("\n")
    txt="void init"+key.split('.')[0]+"FuncMap();"
    dfText.append(txt)
    dfText.append("\n")
    dfText.append("\n")
    txt="#endif //"+defh
    dfText.append(txt)
    dfText.append("\n")
    return dfText

def genCode_cpp(key):
    dfText = []
    txt="#include \"pa_func_map.h\""
    dfText.append(txt)
    dfText.append("\n")
    txt="#include \"../sharedmemory/pool/"+key+"\""
    dfText.append(txt)
    dfText.append("\n")
    txt="#include <vector>"
    dfText.append(txt)
    dfText.append("\n")
    txt="using namespace std;"
    dfText.append(txt)
    dfText.append("\n")
    PaNameMemberDic = FilePanameMap[key]
    for paN in PaNameMemberDic:
        txt="void* func"+paN+"(int argc, char *argv[])"
        dfText.append(txt)
        dfText.append("\n")
        txt="{"
        dfText.append(txt)
        dfText.append("\n")
        txt="   for(int i=1;i<argc;i++)"
        dfText.append(txt)
        dfText.append("\n")
        txt="   {"
        dfText.append(txt)
        dfText.append("\n")
        txt="      printf(\"%s\\n\",argv[i]);"
        dfText.append(txt)
        dfText.append("\n")
        txt="   }"
        dfText.append(txt)
        dfText.append("\n")
        dic=PaNameMemberDic[paN]
        members =[];
        strucName=''
        for i in dic:
            strucName = i
            members = dic[i]
        txt="   if(argc<(2+"+str(len(members))+"))"
        dfText.append(txt)
        dfText.append("\n")
        txt="   {"
        dfText.append(txt)
        dfText.append("\n")
        params =''
        for i in members:
            params+=" "+i
        txt="      printf(\"too few parameters,run app like this: ./winPAApi "+paN+params+"\");"
        dfText.append(txt)
        dfText.append("\n")
        txt="   }else"
        dfText.append(txt)
        dfText.append("\n")
        txt="   {"
        dfText.append(txt)
        dfText.append("\n")
        txt="      "+strucName+" value;"
        dfText.append(txt)
        dfText.append("\n")
        idx=0
        for mem in members:
            #print(strucName)
            if strucName in numberTypeList:
                #print(mem)
                txt="      value = atoi(argv["+str(2+idx)+"]);"
            else:
                #print(mem)
                txt="      value"+"."+mem+" = atoi(argv["+str(2+idx)+"]);"
            dfText.append(txt)
            dfText.append("\n")
            idx+=1
        txt="      "+paN+".setValue(value);"
        dfText.append(txt)
        dfText.append("\n")
        txt="   }"
        dfText.append(txt)
        dfText.append("\n")
        txt="}"
        dfText.append(txt)
        dfText.append("\n")
    dfText.append("\n")
    dfText.append("\n")
    txt="void init"+key.split('.')[0]+"FuncMap()"
    dfText.append(txt)
    dfText.append("\n")
    txt="{"
    dfText.append(txt)
    dfText.append("\n")
    for paN in PaNameMemberDic:
        txt="   mFuncPtr.insert(make_pair<string, long>(\""+paN+"\", (long)&func"+paN+"));"
        dfText.append(txt)
        dfText.append("\n")
    txt="}"
    dfText.append(txt)
    dfText.append("\n")
    return dfText
        
    

def output_to_new_file(df, out_file=None):
    #print('Start to write the cpp/h file...')
    #print(df)
    output = df
    if not out_file:
        out_file = './pa_func.h'
    with open(out_file, 'w', encoding='utf-8') as f:
        for line in output:
            f.write(line)
    
        
    #print('Done!\nThe output file is: {}'.format(out_file))
    
    return None

def output_to_exist_file(target_file, df,startPort,endPort, out_file=None,coding='utf-8'):
    print('Start to write the cpp/h file...')
    try:
        with open(target_file, 'r',encoding=coding) as f:
            content = f.readlines()
    #except IOError:
        #print('connt find file')
    except IOError as error:
        print(target_file)
        print('Please check the target file!')
        return None

    #contents = contents.rstrip("\n").decode("utf-16")
    #contents = contents.split("\r\n")
    ix_start, ix_end = 0, 0
    for lineno, line in enumerate(content):
        if not ix_start and line.strip() == startPort:
            ix_start = lineno
        if ix_start and line.strip() == endPort:
            ix_end = lineno
            break
    #print(df)
    output = content[:ix_start+1] + df + content[ix_end:]
    #print(output)
 
      
    if not out_file:
        out_file = './' + target_file.split('.')[-1]
    with open(out_file, 'w', encoding=coding) as f:
        for line in output:
            f.write(line)
    
        
    print('Done!\nThe output file is: {}'.format(out_file))
    
    return None

########################################################################################
HeaderSTART_PORT = '/***include pa func header Start***/'
HeaderEND_PORT = '/***include pa func header end***/'

InitSTART_PORT = '/***init Map Start***/'
InitEND_PORT = '/***init Map end***/'
########################################################################################

def createCodeFromDictionary():
    df_headers=[]
    df_init=[]
    for key in FilePanameMap:
        df_h = genCode_h(key)
        df_cpp = genCode_cpp(key)
        output_to_new_file(df_h,"./paFunc/"+key.split('.')[0]+"_func.h")
        output_to_new_file(df_cpp,"./paFunc/"+key.split('.')[0]+"_func.cpp")
        txt="#include \""+key.split('.')[0]+"_func.h\""
        df_headers.append(txt)
        df_headers.append("\n")
        txt="   init"+key.split('.')[0]+"FuncMap();"
        df_init.append(txt)
        df_init.append("\n")
    output_to_exist_file("./paFunc/pa_func_map.cpp",df_headers,HeaderSTART_PORT,HeaderEND_PORT,"./paFunc/pa_func_map.cpp")
    output_to_exist_file("./paFunc/pa_func_map.cpp",df_init,InitSTART_PORT,InitEND_PORT,"./paFunc/pa_func_map.cpp")

#/*************************************create winPAApi function code from dictionary start***********************************************/

#/*************************************create comControlPA UI code from dictionary start***********************************************/

########################################################################################
comControlPADlg_h='comControlPADlg.h'

incPaDlgHeadersSTART_PORT = '/********auto gen pa Dialog headers start********/'
incPaDlgHeadersEND_PORT = '/********auto gen pa Dialog headers end********/'

eTypeTabCtrlSTART_PORT = '/********auto gen eTypeTabCtrl start********/'
eTypeTabCtrlEND_PORT = '/********auto gen eTypeTabCtrl end********/'

paDialogMembersSTART_PORT = '/********auto gen pa Dialog Members start********/'
paDialogMembersEND_PORT = '/********auto gen pa Dialog Members end********/'

#############################
comControlPADlg_cpp='comControlPADlg.cpp'

dlgCreateAndInsertToTabSTART_PORT = '/********auto gen dlgCreateAndInsertToTab start********/'
dlgCreateAndInsertToTabEND_PORT = '/********auto gen dlgCreateAndInsertToTab end********/'

initTabStateSTART_PORT = '/********auto gen initTabState start********/'
initTabStateEND_PORT = '/********auto gen initTabState end********/'


hidePaDlgSTART_PORT = '/********auto gen hidePaDlg start********/'
hidePaDlgEND_PORT = '/********auto gen hidePaDlg end********/'

showPaDlgSTART_PORT = '/********auto gen showPaDlg start********/'
showPaDlgEND_PORT = '/********auto gen showPaDlg end********/'

#############################
comControlPA_rc='comControlPA.rc'

DIALOG_DETAIL_LAYOUTSTART_PORT = '/********auto gen DIALOG_DETAIL_LAYOUT start********/'
DIALOG_DETAIL_LAYOUTEND_PORT = '/********auto gen DIALOG_DETAIL_LAYOUT end********/'

DIALOGSTART_PORT = '/********auto gen DIALOG start********/'
DIALOGEND_PORT = '/********auto gen DIALOG end********/'

AFX_DIALOG_LAYOUTSTART_PORT = '/********auto gen AFX_DIALOG_LAYOUT start********/'
AFX_DIALOG_LAYOUTEND_PORT = '/********auto gen AFX_DIALOG_LAYOUT end********/'
#############################
Resource_h='Resource.h'
IDD_DIALOGSTART_PORT = '/********auto gen IDD_DIALOG start********/'
IDD_DIALOGCtrlEND_PORT = '/********auto gen IDD_DIALOG end********/'

IDC_EDITPASTART_PORT = '/********auto gen IDC_EDITPA start********/'
IDC_EDITPAEND_PORT = '/********auto gen IDC_EDITPA end********/'


########################################################################################
def genDlgCode_h(key):
    dfText = []
    dfText.append("#pragma once\n")
    dfText.append("#include \"afxwin.h\"\n")
    dfText.append("#include <string>\n")
    dfText.append("\n")
    dfText.append("using namespace std;\n")
    dfText.append("\n")
    txt="// "+key.split('.')[0]+"Dlg dialog\n"
    dfText.append(txt)
    dfText.append("\n")
    txt="class "+key.split('.')[0]+"Dlg : public CDialog\n"
    dfText.append(txt)
    dfText.append("{\n")
    txt="	DECLARE_DYNAMIC("+key.split('.')[0]+"Dlg)\n"
    dfText.append(txt)
    dfText.append("\n")
    dfText.append("public:\n")
    txt="	"+key.split('.')[0]+"Dlg(CWnd* pParent = NULL);   // standard constructor\n"
    dfText.append(txt)
    txt="	virtual ~"+key.split('.')[0]+"Dlg();\n"
    dfText.append(txt)
    dfText.append("\n")
    dfText.append("	bool WriteDatToCom(string paName,int count,...);\n")
    dfText.append("\n")
    dfText.append("// Dialog Data\n")
    dfText.append("#ifdef AFX_DESIGN_TIME\n")
    txt="	enum { IDD = IDD_DIALOG"+key.split('.')[0].upper()+" };\n"
    dfText.append(txt)
    dfText.append("#endif\n")
    dfText.append("\n")
    dfText.append("protected:\n")
    dfText.append("	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support\n")
    dfText.append("\n")
    dfText.append("	DECLARE_MESSAGE_MAP()\n")
    dfText.append("public:\n")
    PaNameMemberDic = UIFilePanameMap[key]
    for paN in PaNameMemberDic:
        txt="// //input "+paN+" data value\n"
        dfText.append(txt)
        dic=PaNameMemberDic[paN]
        members =[];
        strucName=''
        for i in dic:
            strucName = i
            members = dic[i]
        for member in members:
            txt="	CEdit mCEdit"+paN+member+";\n"
            dfText.append(txt)
    dfText.append("	virtual BOOL PreTranslateMessage(MSG* pMsg);\n")
    dfText.append("};\n")
    return dfText

def genDlgCode_cpp(key):
    dfText=[]
    txt="// "+key.split('.')[0]+"Dlg.cpp : implementation file\n"
    dfText.append(txt)
    dfText.append("//\n")
    dfText.append("\n")
    dfText.append(txt)
    dfText.append("#include \"stdafx.h\"\n")
    dfText.append("#include \"comControlPA.h\"\n")
    txt="#include \""+key.split('.')[0]+"Dlg.h\"\n"
    dfText.append(txt)
    dfText.append("#include \"afxdialogex.h\"\n")
    dfText.append("\n")
    txt="// "+key.split('.')[0]+"Dlg dialog\n"
    dfText.append("\n")
    txt="IMPLEMENT_DYNAMIC("+key.split('.')[0]+"Dlg, CDialog)\n"
    dfText.append(txt)
    dfText.append("\n")
    txt=key.split('.')[0]+"Dlg::"+key.split('.')[0]+"Dlg(CWnd* pParent /*=NULL*/)\n"
    dfText.append(txt)
    txt="	: CDialog(IDD_DIALOG"+key.split('.')[0].upper()+", pParent)\n"
    dfText.append(txt)
    dfText.append("{\n")
    dfText.append("\n")
    dfText.append("}\n")
    dfText.append("\n")
    txt=key.split('.')[0]+"Dlg::~"+key.split('.')[0]+"Dlg()\n"
    dfText.append(txt)
    dfText.append("{\n")
    dfText.append("}\n")
    dfText.append("\n")
    txt="void "+key.split('.')[0]+"Dlg::DoDataExchange(CDataExchange* pDX)\n"
    dfText.append(txt)
    dfText.append("{\n")
    dfText.append("	CDialog::DoDataExchange(pDX);\n")
    PaNameMemberDic = UIFilePanameMap[key]
    for paN in PaNameMemberDic:
        dic=PaNameMemberDic[paN]
        members =[];
        strucName=''
        for i in dic:
            strucName = i
            members = dic[i]
            for member in members:
                txt="	DDX_Control(pDX, IDC_EDIT"+paN.upper()+member+", mCEdit"+paN+member+");\n"
                dfText.append(txt)        
    dfText.append("}\n")
    dfText.append("\n")
    dfText.append("\n")
    txt="BEGIN_MESSAGE_MAP("+key.split('.')[0]+"Dlg, CDialog)\n"
    dfText.append(txt)
    dfText.append("\n")
    dfText.append("END_MESSAGE_MAP()\n")
    dfText.append("\n")
    dfText.append("\n")
    dfText.append("\n")
    dfText.append("bool "+key.split('.')[0]+"Dlg::WriteDatToCom(string paName, int count, ...)		    \n")	
    dfText.append("{                                                                                \n")
    dfText.append("	HANDLE hdl = theApp.getHandle();                                                \n")
    dfText.append("	//3.input date to com            \n")
    dfText.append("	string IpBuffer = \"./winPAApi \";                                              \n")
    dfText.append("	va_list ap;                                                                     \n")
    dfText.append("	va_start(ap, count);                                                            \n")
    dfText.append("	IpBuffer += paName;                                                             \n")
    dfText.append("	IpBuffer += \" \";                                                              \n")
    dfText.append("	for (int i=0;i<count;i++)                                                       \n")
    dfText.append("	{                                                                               \n")
    dfText.append("		int param =	va_arg(ap, int);                                        \n")
    dfText.append("		IpBuffer += to_string(param);                                           \n")
    dfText.append("		IpBuffer += \" \";                                                      \n")
    dfText.append("	}                                                                               \n")
    dfText.append("	IpBuffer += \"\\r\";                                                               \n")
    dfText.append("                                                                                 \n")
    dfText.append("	DWORD nBytesSent;     //real count that inputing                              \n")
    dfText.append("	if (INVALID_HANDLE_VALUE != hdl)                                                \n")
    dfText.append("	{                                                                               \n")
    dfText.append("		WriteFile(hdl, IpBuffer.c_str(), strlen(IpBuffer.c_str()), &nBytesSent, NULL);\n")
    dfText.append("	}                                                                               \n")
    dfText.append("                                                                                 \n")
    dfText.append("	return TRUE;                                                                    \n")
    dfText.append("}\n")
    dfText.append("\n")
    txt="// "+key.split('.')[0]+"Dlg message handlers\n"
    dfText.append(txt)
    txt="BOOL "+key.split('.')[0]+"Dlg::PreTranslateMessage(MSG* pMsg)\n"
    dfText.append(txt)
    dfText.append("{\n")
    dfText.append("	// TODO: Add your specialized code here and/or call the base class\n")
    dfText.append("	if (WM_KEYDOWN == pMsg->message && VK_RETURN == pMsg->wParam)\n")
    dfText.append("	{\n")
    for paN in PaNameMemberDic:
        dic=PaNameMemberDic[paN]
        members =[];
        strucName=''
        for i in dic:
            strucName = i
            members = dic[i]
        txt="		if ("
        for member in members:
            txt+="GetFocus() == GetDlgItem(IDC_EDIT"+paN.upper()+member+")\n			||"
        finaltxt=txt.strip('\n||')
        finaltxt+=")\n"
        dfText.append(finaltxt)
        dfText.append("		{\n")
        dfText.append("				UpdateData(TRUE);\n")
        params=""
        for member in members:
            txt="			UINT "+member+" = GetDlgItemInt(IDC_EDIT"+paN.upper()+member+");\n"
            dfText.append(txt)
            params+=", "+member
        txt="			WriteDatToCom(\""+paN+"\","+str(len(members))+params+");\n"
        dfText.append(txt)
        dfText.append("				UpdateData(FALSE);\n")
        dfText.append("		}\n")
    dfText.append("		return true;\n")
    dfText.append("	}\n")
    dfText.append("	return CDialog::PreTranslateMessage(pMsg);\n")
    dfText.append("}\n")
    return dfText
    
    
def genPaLayout_rc(key):
    dfText=[]
    PaNameMemberDic = UIFilePanameMap[key]
    cnt=0
    gbposx=10
    gbposy=10
    gbwidth=0
    gbheightmax=0
    for paN in PaNameMemberDic:
        dic=PaNameMemberDic[paN]
        members =[];
        strucName=''
        for i in dic:
            strucName = i
            members = dic[i]
        if(cnt%8==0):
            gbposx=10
            gbposy+=10+gbheightmax
            gbheightmax=0
        else:
            gbposx +=10+gbwidth
        gbwidth=95
        gbheight=len(members)*20
        if gbheightmax<gbheight:
            gbheightmax=gbheight

        dfText.append("    GROUPBOX        \""+paN+"\",IDC_STATIC,"+str(gbposx)+","+str(gbposy)+","+str(gbwidth)+","+str(gbheight)+"\n")
        membercnt=0
        for member in members:
            dfText.append("    LTEXT           \""+member+"\",IDC_STATIC,"+str(gbposx+11)+","+str(gbposy+13+18*membercnt)+",30,8\n")
            dfText.append("    EDITTEXT        IDC_EDIT"+paN.upper()+member+","+str(gbposx+50)+","+str(gbposy+10+18*membercnt)+",40,14,ES_AUTOHSCROLL | ES_NUMBER\n")
            membercnt+=1
        cnt+=1
    return dfText

def genIDC_EDITPA(key,keyID):
    dfText=[]
    
    PaNameMemberDic = UIFilePanameMap[key]
    idcCnt=(keyID+1)*1000+6
    #print(idcCnt)
    #paCnt=0
    for paN in PaNameMemberDic:
        dic=PaNameMemberDic[paN]
        members =[];
        strucName=''
        for i in dic:
            strucName = i
            members = dic[i]
        for member in members:
            idcCnt+=1
            #print(idcCnt)
            dfText.append("#define IDC_EDIT"+paN.upper()+member+" "+str(idcCnt)+"\n")            
        #paCnt+=1
    #print(dfText)
    return dfText

UIFilePanameMap={}
def createUIFilenamePAMap():    
    for key in FilePanameMap:
        PaNameMemberDic = FilePanameMap[key]
        PaNameMemberDicNew={}
        cnt=0
        keyCnt=0
        memberscnt=0
        for paN in PaNameMemberDic:
            dic=PaNameMemberDic[paN]
            PaNameMemberDicNew[paN]=dic
            members =[];
            strucName=''
            for i in dic:
                strucName = i
                members = dic[i]
            cnt+=1
            memberscnt+=len(members)
            if cnt>=32 or memberscnt>=108:
                #print(key.split('.')[0]+str(keyCnt)+".h")
                dicNew=copy.deepcopy(PaNameMemberDicNew)
                UIFilePanameMap[key.split('.')[0]+str(keyCnt)+".h"]=dicNew
                keyCnt+=1
                PaNameMemberDicNew.clear()
                cnt=0
                memberscnt=0
        #print(key.split('.')[0]+str(keyCnt)+".h")
        dicNew=copy.deepcopy(PaNameMemberDicNew)
        UIFilePanameMap[key.split('.')[0]+str(keyCnt)+".h"]=dicNew
                
    print(UIFilePanameMap)
            


def createUIFromdictionary():
    createUIFilenamePAMap()
    #print(UIFilePanameMap)
    df_incPaDlgHeaders=[]
    df_eTypeTabCtrl=[]
    df_paDialogMembers=[]

    df_dlgCreateAndInsertToTab=[]
    df_initTabState=[]
    df_hidePaDlg=[]
    df_showPaDlg=[]

    df_DIALOG_DETAIL_LAYOUT=[]
    df_DIALOG=[]
    df_AFX_DIALOG_LAYOUT=[]

    df_IDD_DIALOG=[]
    df_IDC_EDITPA=[]
    keyID=0;
    for key in UIFilePanameMap:
        df_h = genDlgCode_h(key)
        df_cpp = genDlgCode_cpp(key)
        if len(df_h):
            output_to_new_file(df_h,"../Dlg/tabDlg/"+key.split('.')[0]+"Dlg.h")
        else:
            print("df is none\n")
        if len(df_cpp):
            output_to_new_file(df_cpp,"../Dlg/tabDlg/"+key.split('.')[0]+"Dlg.cpp")
        else:
            print("df is none\n")
        df_incPaDlgHeaders.append("#include \""+key.split('.')[0]+"Dlg.h\"\n")
        df_eTypeTabCtrl.append("		E_"+key.split('.')[0].upper()+"_DLG,\n")
        df_paDialogMembers.append("	"+key.split('.')[0]+"Dlg m"+key.split('.')[0]+"Dlg;\n")

        df_dlgCreateAndInsertToTab.append("	m"+key.split('.')[0]+"Dlg.Create(IDD_DIALOG"+key.split('.')[0].upper()+", &mCTabCtrl);\n")
        df_dlgCreateAndInsertToTab.append("	mCTabCtrl.InsertItem(E_"+key.split('.')[0].upper()+"_DLG, _T(\""+key.split('.')[0]+"\"));\n")
        df_initTabState.append("	m"+key.split('.')[0]+"Dlg.MoveWindow(&rc);\n")
        df_initTabState.append("	m"+key.split('.')[0]+"Dlg.ShowWindow(SW_HIDE);\n")
        df_hidePaDlg.append("		m"+key.split('.')[0]+"Dlg.ShowWindow(SW_HIDE);\n")
        df_showPaDlg.append("	case E_"+key.split('.')[0].upper()+"_DLG:\n")
        df_showPaDlg.append("		m"+key.split('.')[0]+"Dlg.ShowWindow(SW_SHOW);\n")
        df_showPaDlg.append("		break;\n")

        df_DIALOG_DETAIL_LAYOUT.append("IDD_DIALOG"+key.split('.')[0].upper()+" DIALOGEX 0, 0, 1051, 475\n")
        df_DIALOG_DETAIL_LAYOUT.append("STYLE DS_SETFONT | DS_FIXEDSYS | WS_CHILD | WS_SYSMENU\n")
        df_DIALOG_DETAIL_LAYOUT.append("FONT 8, \"MS Shell Dlg\", 400, 0, 0x1\n")
        df_DIALOG_DETAIL_LAYOUT.append("BEGIN\n")
        df_DIALOG_DETAIL_LAYOUT+=genPaLayout_rc(key)
        df_DIALOG_DETAIL_LAYOUT.append("END\n")
        df_DIALOG.append("    IDD_DIALOG"+key.split('.')[0].upper()+", DIALOG\n")
        df_DIALOG.append("    BEGIN\n")
        df_DIALOG.append("        LEFTMARGIN, 7\n")
        df_DIALOG.append("        RIGHTMARGIN, 1044\n")
        df_DIALOG.append("        TOPMARGIN, 7\n")
        df_DIALOG.append("        BOTTOMMARGIN, 468\n")
        df_DIALOG.append("    END\n")
        df_DIALOG.append("    \n")
        df_AFX_DIALOG_LAYOUT.append("IDD_DIALOG"+key.split('.')[0].upper()+" AFX_DIALOG_LAYOUT\n")
        df_AFX_DIALOG_LAYOUT.append("BEGIN\n")
        df_AFX_DIALOG_LAYOUT.append("    0\n")
        df_AFX_DIALOG_LAYOUT.append("END\n")
        df_AFX_DIALOG_LAYOUT.append("\n")

        df_IDD_DIALOG.append("#define IDD_DIALOG"+key.split('.')[0].upper()+"             "+str(131+keyID)+"\n")        
        df_IDC_EDITPA+=genIDC_EDITPA(key,keyID)
        keyID+=1
        
    
    output_to_exist_file("../Dlg/"+comControlPADlg_h,df_incPaDlgHeaders,incPaDlgHeadersSTART_PORT,incPaDlgHeadersEND_PORT,"../Dlg/"+comControlPADlg_h)
    output_to_exist_file("../Dlg/"+comControlPADlg_h,df_eTypeTabCtrl,eTypeTabCtrlSTART_PORT,eTypeTabCtrlEND_PORT,"../Dlg/"+comControlPADlg_h)
    output_to_exist_file("../Dlg/"+comControlPADlg_h,df_paDialogMembers,paDialogMembersSTART_PORT,paDialogMembersEND_PORT,"../Dlg/"+comControlPADlg_h)

    output_to_exist_file("../Dlg/"+comControlPADlg_cpp,df_dlgCreateAndInsertToTab,dlgCreateAndInsertToTabSTART_PORT,dlgCreateAndInsertToTabEND_PORT,"../Dlg/"+comControlPADlg_cpp)
    output_to_exist_file("../Dlg/"+comControlPADlg_cpp,df_initTabState,initTabStateSTART_PORT,initTabStateEND_PORT,"../Dlg/"+comControlPADlg_cpp)
    output_to_exist_file("../Dlg/"+comControlPADlg_cpp,df_hidePaDlg,hidePaDlgSTART_PORT,hidePaDlgEND_PORT,"../Dlg/"+comControlPADlg_cpp)
    output_to_exist_file("../Dlg/"+comControlPADlg_cpp,df_showPaDlg,showPaDlgSTART_PORT,showPaDlgEND_PORT,"../Dlg/"+comControlPADlg_cpp)

    output_to_exist_file("./"+comControlPA_rc,df_DIALOG_DETAIL_LAYOUT,DIALOG_DETAIL_LAYOUTSTART_PORT,DIALOG_DETAIL_LAYOUTEND_PORT,"./"+comControlPA_rc,coding='utf-8')
    output_to_exist_file("./"+comControlPA_rc,df_DIALOG,DIALOGSTART_PORT,DIALOGEND_PORT,"./"+comControlPA_rc,coding='utf-8')
    output_to_exist_file("./"+comControlPA_rc,df_AFX_DIALOG_LAYOUT,AFX_DIALOG_LAYOUTSTART_PORT,AFX_DIALOG_LAYOUTEND_PORT,"./"+comControlPA_rc,coding='utf-8')

    output_to_exist_file("./"+Resource_h,df_IDD_DIALOG,IDD_DIALOGSTART_PORT,IDD_DIALOGCtrlEND_PORT,"./"+Resource_h,coding='utf-8')
    #print(df_IDC_EDITPA)
    output_to_exist_file("./"+Resource_h,df_IDC_EDITPA,IDC_EDITPASTART_PORT,IDC_EDITPAEND_PORT,"./"+Resource_h,coding='utf-8')

    
#/*************************************create comControlPA UI code from dictionary start***********************************************/
if __name__ == '__main__':
 search = searchfile()
 search()
 createFilePanameStructmemberDic()
 createCodeFromDictionary()
 createUIFromdictionary()
 
