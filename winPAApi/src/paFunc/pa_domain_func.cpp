#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_domain.h"
#include <vector>
using namespace std;
void* funcPA_ClkFmtForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ClkFmtForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_ClkFmtForUseInt.setValue(value);
   }
}
void* funcPA_DateFmtForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DateFmtForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_DateFmtForUseInt.setValue(value);
   }
}
void* funcPA_DstLongUnitForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DstLongUnitForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_DstLongUnitForUseInt.setValue(value);
   }
}
void* funcPA_DstShoUnitForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DstShoUnitForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_DstShoUnitForUseInt.setValue(value);
   }
}
void* funcPA_FuCnsUnitForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_FuCnsUnitForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_FuCnsUnitForUseInt.setValue(value);
   }
}
void* funcPA_VehSpdUnitForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_VehSpdUnitForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_VehSpdUnitForUseInt.setValue(value);
   }
}
void* funcPA_AmbTUnitForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_AmbTUnitForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_AmbTUnitForUseInt.setValue(value);
   }
}
void* funcPA_VolUnitForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_VolUnitForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_VolUnitForUseInt.setValue(value);
   }
}
void* funcPA_PUnitForUseInt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_PUnitForUseInt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_PUnitForUseInt.setValue(value);
   }
}
void* funcPA_SaveSetgToMemPrmnt(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_SaveSetgToMemPrmnt value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_SaveSetgToMemPrmnt.setValue(value);
   }
}
void* funcPA_DOM_DIMSequence(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_DOM_DIMSequence value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_DOM_DIMSequence.setValue(value);
   }
}
void* funcPA_NoticeDisplayStatus(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_NoticeDisplayStatus value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_NoticeDisplayStatus.setValue(value);
   }
}
void* funcPA_WelcomeDisplayFinish(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_WelcomeDisplayFinish value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_WelcomeDisplayFinish.setValue(value);
   }
}
void* funcPA_MemoryFailure(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_MemoryFailure value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_MemoryFailure.setValue(value);
   }
}
void* funcPA_Trip_ScreenSwitch_Request(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Trip_ScreenSwitch_Request value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Trip_ScreenSwitch_Request.setValue(value);
   }
}


void initpa_domainFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_ClkFmtForUseInt", (long)&funcPA_ClkFmtForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_DateFmtForUseInt", (long)&funcPA_DateFmtForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_DstLongUnitForUseInt", (long)&funcPA_DstLongUnitForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_DstShoUnitForUseInt", (long)&funcPA_DstShoUnitForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_FuCnsUnitForUseInt", (long)&funcPA_FuCnsUnitForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_VehSpdUnitForUseInt", (long)&funcPA_VehSpdUnitForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_AmbTUnitForUseInt", (long)&funcPA_AmbTUnitForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_VolUnitForUseInt", (long)&funcPA_VolUnitForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_PUnitForUseInt", (long)&funcPA_PUnitForUseInt));
   mFuncPtr.insert(make_pair<string, long>("PA_SaveSetgToMemPrmnt", (long)&funcPA_SaveSetgToMemPrmnt));
   mFuncPtr.insert(make_pair<string, long>("PA_DOM_DIMSequence", (long)&funcPA_DOM_DIMSequence));
   mFuncPtr.insert(make_pair<string, long>("PA_NoticeDisplayStatus", (long)&funcPA_NoticeDisplayStatus));
   mFuncPtr.insert(make_pair<string, long>("PA_WelcomeDisplayFinish", (long)&funcPA_WelcomeDisplayFinish));
   mFuncPtr.insert(make_pair<string, long>("PA_MemoryFailure", (long)&funcPA_MemoryFailure));
   mFuncPtr.insert(make_pair<string, long>("PA_Trip_ScreenSwitch_Request", (long)&funcPA_Trip_ScreenSwitch_Request));
}
