#include "pa_func_map.h"

/***include pa func header Start***/
#include "pa_func.h"
#include "pa_adas_func.h"
#include "pa_chime_func.h"
#include "pa_climate_func.h"
#include "pa_domain_func.h"
#include "pa_dvr_func.h"
#include "pa_gauge_func.h"
#include "pa_hardkey_func.h"
#include "pa_media_func.h"
#include "pa_navi_func.h"
#include "pa_notification_func.h"
#include "pa_phone_func.h"
#include "pa_rearmirror_func.h"
#include "pa_telltale_func.h"
#include "pa_trip_func.h"
/***include pa func header end***/

map<string, long> mFuncPtr;

void initFuncMap()
{
	/***init Map Start***/
   initpaFuncMap();
   initpa_adasFuncMap();
   initpa_chimeFuncMap();
   initpa_climateFuncMap();
   initpa_domainFuncMap();
   initpa_dvrFuncMap();
   initpa_gaugeFuncMap();
   initpa_hardkeyFuncMap();
   initpa_mediaFuncMap();
   initpa_naviFuncMap();
   initpa_notificationFuncMap();
   initpa_phoneFuncMap();
   initpa_rearmirrorFuncMap();
   initpa_telltaleFuncMap();
   initpa_tripFuncMap();
	/***init Map end***/
}
