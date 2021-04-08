#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_navi.h"
#include <vector>
using namespace std;
void* funcPA_NaviInof(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_NaviInof active mute");
   }else
   {
      PA_Navi value;
      value.active = atoi(argv[2]);
      value.mute = atoi(argv[3]);
      PA_NaviInof.setValue(value);
   }
}
void* funcPA_TBTInof(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_TBTInof active progress icon distance");
   }else
   {
      PA_TBT value;
      value.active = atoi(argv[2]);
      value.progress = atoi(argv[3]);
      value.icon = atoi(argv[4]);
      value.distance = atoi(argv[5]);
      PA_TBTInof.setValue(value);
   }
}


void initpa_naviFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_NaviInof", (long)&funcPA_NaviInof));
   mFuncPtr.insert(make_pair<string, long>("PA_TBTInof", (long)&funcPA_TBTInof));
}
