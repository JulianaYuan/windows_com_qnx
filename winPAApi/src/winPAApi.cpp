#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "pa_map.h"

using namespace std;

int main(int argc, char *argv[]) {
	//cout << "Hello World!!!" << endl; // prints Hello World!!!
	initFuncMap();
	if(argc<=2)
	{
		printf("please run as: winPAApi pa_file pa_name pa arguments list\n");
		return 0;
	}
	else
	{
		//string param[10];
		for(int i=1;i<argc;i++)
		{
			//param[i-1] = argv[i];
			printf("%s\n",argv[i]);
			//printf("%s\n",param[i-1]);
		}

#if 1
			//声明类型
			typedef void* (*FUNC)(int argc, char *argv[]);

			//获取函数
			long fptr = getFuncByName(argv[1]);
			//cout << fptr << endl;
			//char param
			if( fptr != 0 )
			{
				//调用函数fun1
				((FUNC)fptr)(argc, argv);
			}else
			{
				printf("cann't find this PA,please check code");
			}
#endif

	}
	return 0;
}
