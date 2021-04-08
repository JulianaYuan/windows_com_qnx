#ifndef PA_REARMIRROR_FUNC_H_
#define PA_REARMIRROR_FUNC_H_


void* funcPA_ERMD_ERMDAdjustmentEntrance_Grey(int argc, char *argv[]);
void* funcPA_ERMD_ERMDAdjustmentEntrance_Normal(int argc, char *argv[]);
void* funcPA_ERMD_ERMDAdjustmentEntrance_Highlight(int argc, char *argv[]);
void* funcPA_ERMD_Left_Normal(int argc, char *argv[]);
void* funcPA_ERMD_Left_Highlight(int argc, char *argv[]);
void* funcPA_ERMD_Left_Grey(int argc, char *argv[]);
void* funcPA_ERMD_Right_Normal(int argc, char *argv[]);
void* funcPA_ERMD_Right_Highlight(int argc, char *argv[]);
void* funcPA_ERMD_Right_Grey(int argc, char *argv[]);
void* funcPA_ExtrMirrAdjHmiReq(int argc, char *argv[]);
void* funcPA_ExtrMirrSelnHmiReq(int argc, char *argv[]);
void* funcPA_ExtrReViewMirrDispAdjHmiReq(int argc, char *argv[]);
void* funcPA_ExtrReViewMirrDispRstSetg(int argc, char *argv[]);
void* funcPA_Select_ERMD_Entrance(int argc, char *argv[]);
void* funcPA_Enter_ERMD_Entrance(int argc, char *argv[]);
void* funcPA_Enter_ERMD_Adjustment(int argc, char *argv[]);
void* funcPA_Select_ERMD_Adjustment(int argc, char *argv[]);


void initpa_rearmirrorFuncMap();

#endif //PA_REARMIRROR_FUNC_H_
