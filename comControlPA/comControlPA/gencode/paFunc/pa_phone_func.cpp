#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_phone.h"
#include <vector>
using namespace std;
void* funcPA_PhoneInfo(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_PhoneInfo state microphoneMute soundMute time");
   }else
   {
      PA_PhonePage value;
      value.state = atoi(argv[2]);
      value.microphoneMute = atoi(argv[3]);
      value.soundMute = atoi(argv[4]);
      value.time = atoi(argv[5]);
      PA_PhoneInfo.setValue(value);
   }
}


void initpa_phoneFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_PhoneInfo", (long)&funcPA_PhoneInfo));
}
