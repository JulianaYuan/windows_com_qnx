#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_chime.h"
#include <vector>
using namespace std;
void* funcPA_ChimeReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ChimeReq SoundID Status");
   }else
   {
      PA_ChimeInfo value;
      value.SoundID = atoi(argv[2]);
      value.Status = atoi(argv[3]);
      PA_ChimeReq.setValue(value);
   }
}
void* funcPA_ChimeAct(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ChimeAct SoundID Status");
   }else
   {
      PA_ChimeInfo value;
      value.SoundID = atoi(argv[2]);
      value.Status = atoi(argv[3]);
      PA_ChimeAct.setValue(value);
   }
}


void initpa_chimeFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_ChimeReq", (long)&funcPA_ChimeReq));
   mFuncPtr.insert(make_pair<string, long>("PA_ChimeAct", (long)&funcPA_ChimeAct));
}
