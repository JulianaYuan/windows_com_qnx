#include "pa_chime.h"

SharedMemory::Pool SharedMemoryPool_PA_Chime{ "PA_Chime", 65535 };

SharedMemory::AtomicStruct<PA_ChimeInfo> PA_ChimeReq(SharedMemoryPool_PA_Chime,			"PA_ChimeReq",			{ 0, 1 });
SharedMemory::AtomicStruct<PA_ChimeInfo> PA_ChimeAct(SharedMemoryPool_PA_Chime,			"PA_ChimeAct",			{ 0, 1 });
