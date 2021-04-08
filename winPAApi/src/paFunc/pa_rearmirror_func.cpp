#include "pa_func_map.h"
#include "../sharedmemory/pool/pa_rearmirror.h"
#include <vector>
using namespace std;
void* funcPA_ERMD_ERMDAdjustmentEntrance_Grey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_ERMDAdjustmentEntrance_Grey value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_ERMDAdjustmentEntrance_Grey.setValue(value);
   }
}
void* funcPA_ERMD_ERMDAdjustmentEntrance_Normal(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_ERMDAdjustmentEntrance_Normal value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_ERMDAdjustmentEntrance_Normal.setValue(value);
   }
}
void* funcPA_ERMD_ERMDAdjustmentEntrance_Highlight(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_ERMDAdjustmentEntrance_Highlight value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_ERMDAdjustmentEntrance_Highlight.setValue(value);
   }
}
void* funcPA_ERMD_Left_Normal(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_Left_Normal value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_Left_Normal.setValue(value);
   }
}
void* funcPA_ERMD_Left_Highlight(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_Left_Highlight value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_Left_Highlight.setValue(value);
   }
}
void* funcPA_ERMD_Left_Grey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_Left_Grey value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_Left_Grey.setValue(value);
   }
}
void* funcPA_ERMD_Right_Normal(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_Right_Normal value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_Right_Normal.setValue(value);
   }
}
void* funcPA_ERMD_Right_Highlight(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_Right_Highlight value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_Right_Highlight.setValue(value);
   }
}
void* funcPA_ERMD_Right_Grey(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+2))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ERMD_Right_Grey value availability");
   }else
   {
      PA_Mirror value;
      value.value = atoi(argv[2]);
      value.availability = atoi(argv[3]);
      PA_ERMD_Right_Grey.setValue(value);
   }
}
void* funcPA_ExtrMirrAdjHmiReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ExtrMirrAdjHmiReq value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_ExtrMirrAdjHmiReq.setValue(value);
   }
}
void* funcPA_ExtrMirrSelnHmiReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ExtrMirrSelnHmiReq value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_ExtrMirrSelnHmiReq.setValue(value);
   }
}
void* funcPA_ExtrReViewMirrDispAdjHmiReq(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ExtrReViewMirrDispAdjHmiReq value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_ExtrReViewMirrDispAdjHmiReq.setValue(value);
   }
}
void* funcPA_ExtrReViewMirrDispRstSetg(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_ExtrReViewMirrDispRstSetg value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_ExtrReViewMirrDispRstSetg.setValue(value);
   }
}
void* funcPA_Select_ERMD_Entrance(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Select_ERMD_Entrance value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Select_ERMD_Entrance.setValue(value);
   }
}
void* funcPA_Enter_ERMD_Entrance(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Enter_ERMD_Entrance value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Enter_ERMD_Entrance.setValue(value);
   }
}
void* funcPA_Enter_ERMD_Adjustment(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Enter_ERMD_Adjustment value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Enter_ERMD_Adjustment.setValue(value);
   }
}
void* funcPA_Select_ERMD_Adjustment(int argc, char *argv[])
{
   for(int i=1;i<argc;i++)
   {
      printf("%s\n",argv[i]);
   }
   if(argc<(2+1))
   {
      printf("too few parameters,run app like this: ./winPAApi PA_Select_ERMD_Adjustment value");
   }else
   {
      unsigned char value;
      value = atoi(argv[2]);
      PA_Select_ERMD_Adjustment.setValue(value);
   }
}


void initpa_rearmirrorFuncMap()
{
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_ERMDAdjustmentEntrance_Grey", (long)&funcPA_ERMD_ERMDAdjustmentEntrance_Grey));
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_ERMDAdjustmentEntrance_Normal", (long)&funcPA_ERMD_ERMDAdjustmentEntrance_Normal));
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_ERMDAdjustmentEntrance_Highlight", (long)&funcPA_ERMD_ERMDAdjustmentEntrance_Highlight));
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_Left_Normal", (long)&funcPA_ERMD_Left_Normal));
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_Left_Highlight", (long)&funcPA_ERMD_Left_Highlight));
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_Left_Grey", (long)&funcPA_ERMD_Left_Grey));
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_Right_Normal", (long)&funcPA_ERMD_Right_Normal));
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_Right_Highlight", (long)&funcPA_ERMD_Right_Highlight));
   mFuncPtr.insert(make_pair<string, long>("PA_ERMD_Right_Grey", (long)&funcPA_ERMD_Right_Grey));
   mFuncPtr.insert(make_pair<string, long>("PA_ExtrMirrAdjHmiReq", (long)&funcPA_ExtrMirrAdjHmiReq));
   mFuncPtr.insert(make_pair<string, long>("PA_ExtrMirrSelnHmiReq", (long)&funcPA_ExtrMirrSelnHmiReq));
   mFuncPtr.insert(make_pair<string, long>("PA_ExtrReViewMirrDispAdjHmiReq", (long)&funcPA_ExtrReViewMirrDispAdjHmiReq));
   mFuncPtr.insert(make_pair<string, long>("PA_ExtrReViewMirrDispRstSetg", (long)&funcPA_ExtrReViewMirrDispRstSetg));
   mFuncPtr.insert(make_pair<string, long>("PA_Select_ERMD_Entrance", (long)&funcPA_Select_ERMD_Entrance));
   mFuncPtr.insert(make_pair<string, long>("PA_Enter_ERMD_Entrance", (long)&funcPA_Enter_ERMD_Entrance));
   mFuncPtr.insert(make_pair<string, long>("PA_Enter_ERMD_Adjustment", (long)&funcPA_Enter_ERMD_Adjustment));
   mFuncPtr.insert(make_pair<string, long>("PA_Select_ERMD_Adjustment", (long)&funcPA_Select_ERMD_Adjustment));
}
