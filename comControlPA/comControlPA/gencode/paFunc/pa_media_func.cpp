#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_media.h"
#include <vector>
using namespace std;
void* funcPA_MediaInfo(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+4))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_MediaInfo id type play mute");
   }else
   {
      PA_Media value;
      value.id = atoi(argv[2]);
      value.type = atoi(argv[3]);
      value.play = atoi(argv[4]);
      value.mute = atoi(argv[5]);
      PA_MediaInfo.setValue(value);
   }
}
void* funcPA_MediaVolume(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_MediaVolume value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_MediaVolume.setValue(value);
   }
}
void* funcPA_MediaListFocusItem(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_MediaListFocusItem value");
   }else
   {
      signed int value;
      value = atoi(argv[2]);
      PA_MediaListFocusItem.setValue(value);
   }
}


void initpa_mediaFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_MediaInfo", (long)&funcPA_MediaInfo));
   mFuncPtr.insert(make_pair<string, long>("PA_MediaVolume", (long)&funcPA_MediaVolume));
   mFuncPtr.insert(make_pair<string, long>("PA_MediaListFocusItem", (long)&funcPA_MediaListFocusItem));
}
