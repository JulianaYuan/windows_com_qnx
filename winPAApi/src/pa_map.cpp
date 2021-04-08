#include "pa_map.h"

long getFuncByName(string funcName)
{
	map<string, long>::iterator it = mFuncPtr.find(funcName);

	if(it != mFuncPtr.end() )
		return it->second;
	return 0;
}
