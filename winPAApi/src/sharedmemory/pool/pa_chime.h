#ifndef PA_CHIME_H
#define PA_CHIME_H

#include "../sharedmemory.hpp"

struct PA_ChimeInfo
{
	unsigned short SoundID;				//default value is 0, Range: 0-None SoundID, 1-SoundID1, 2-SoundID2…
	unsigned char Status;				//default value is 1, Range: refer to PA
};


extern SharedMemory::Pool SharedMemoryPool_PA_Chime;

extern SharedMemory::AtomicStruct<PA_ChimeInfo> PA_ChimeReq;			//0-Play, 1-Stop
extern SharedMemory::AtomicStruct<PA_ChimeInfo> PA_ChimeAct;			//0-Playing, 1-Stoppped, 2-interruped

#endif
