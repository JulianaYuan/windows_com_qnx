#ifndef PA_MEDIA_H
#define PA_MEDIA_H

#include "../sharedmemory.hpp"

struct PA_Media
{
	signed int id;
	unsigned short type ;					// default value is 0, Range: 0=Podcarst/bluetooth/localMedia/Streaming/USB..., 1 = AM/FM/HD radio
	unsigned short play ;					// default value is 0, Range: 0=pasued, 1=play, 
	unsigned short mute ;					// default value is 0, Range: 0=None, 1=Mute, 
};


extern SharedMemory::Pool SharedMemoryPool_PA_Media;

extern SharedMemory::AtomicStruct<PA_Media> PA_MediaInfo;
extern SharedMemory::AtomicNumber<unsigned char> PA_MediaVolume;//0 - 100
extern SharedMemory::AtomicString PA_MediaAlbumPicturePath;//id:MediaAlbumPicturePath
extern SharedMemory::AtomicString PA_MediaTitle;//id:MediaTitle
extern SharedMemory::AtomicString PA_MediaArtist;//id:PA_MediaArtist


//extern SharedMemory::AtomicStringVector PA_MediaList;//1/0(1means playing):favorite/unfavorite:itemText
extern SharedMemory::AtomicNumber<signed int> PA_MediaListFocusItem;

extern SharedMemory::AtomicStringVector PA_RadioList;//1/0(1means playing):favorite/unfavorite:itemText
extern SharedMemory::AtomicStringVector PA_PodcastList;//1/0(1means playing):favorite/unfavorite:itemText
extern SharedMemory::AtomicStringVector PA_BluetoothList;//1/0(1means playing):bluetoothName:itemText
extern SharedMemory::AtomicStringVector PA_DownloadsList;//1/0(1means playing):favorite/unfavorite:itemText
extern SharedMemory::AtomicStringVector PA_StreamingList;//1/0(1means playing):favorite/unfavorite:itemText
extern SharedMemory::AtomicStringVector PA_USBList;//1/0(1means playing):favorite/unfavorite:itemText
#endif