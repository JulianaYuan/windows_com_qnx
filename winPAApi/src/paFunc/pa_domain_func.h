#ifndef PA_DOMAIN_FUNC_H_
#define PA_DOMAIN_FUNC_H_


void* funcPA_ClkFmtForUseInt(int argc, char *argv[]);
void* funcPA_DateFmtForUseInt(int argc, char *argv[]);
void* funcPA_DstLongUnitForUseInt(int argc, char *argv[]);
void* funcPA_DstShoUnitForUseInt(int argc, char *argv[]);
void* funcPA_FuCnsUnitForUseInt(int argc, char *argv[]);
void* funcPA_VehSpdUnitForUseInt(int argc, char *argv[]);
void* funcPA_AmbTUnitForUseInt(int argc, char *argv[]);
void* funcPA_VolUnitForUseInt(int argc, char *argv[]);
void* funcPA_PUnitForUseInt(int argc, char *argv[]);
void* funcPA_SaveSetgToMemPrmnt(int argc, char *argv[]);
void* funcPA_DOM_DIMSequence(int argc, char *argv[]);
void* funcPA_NoticeDisplayStatus(int argc, char *argv[]);
void* funcPA_WelcomeDisplayFinish(int argc, char *argv[]);
void* funcPA_MemoryFailure(int argc, char *argv[]);
void* funcPA_Trip_ScreenSwitch_Request(int argc, char *argv[]);


void initpa_domainFuncMap();

#endif //PA_DOMAIN_FUNC_H_
