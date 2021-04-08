#include "pa_media.h"

SharedMemory::Pool SharedMemoryPool_PA_Media{ "PA_Media", 65535 };

SharedMemory::AtomicStruct<PA_Media> PA_MediaInfo(SharedMemoryPool_PA_Media, "PA_MediaInfo", PA_Media());

//SharedMemory::AtomicStruct<PA_MediaList> PA_MediaList(SharedMemoryPool_PA_Media, "PA_MediaList", PA_MediaList());

SharedMemory::AtomicNumber<unsigned char> PA_MediaVolume(SharedMemoryPool_PA_Media, "PA_MediaVolume", 0);//0 - 100
SharedMemory::AtomicString PA_MediaAlbumPicturePath(SharedMemoryPool_PA_Media, "PA_MediaAlbumPicturePath", ":");
SharedMemory::AtomicString PA_MediaTitle(SharedMemoryPool_PA_Media, "PA_MediaTitle", ":");
SharedMemory::AtomicString PA_MediaArtist(SharedMemoryPool_PA_Media, "PA_MediaArtist", ":");

//SharedMemory::AtomicStringVector PA_MediaList(SharedMemoryPool_PA_Media,"PA_MediaList");
SharedMemory::AtomicNumber<signed int> PA_MediaListFocusItem(SharedMemoryPool_PA_Media, "PA_MediaListFocusItem", {0});

SharedMemory::AtomicStringVector PA_RadioList(SharedMemoryPool_PA_Media, "PA_RadioList");
SharedMemory::AtomicStringVector PA_PodcastList(SharedMemoryPool_PA_Media, "PA_PodcastList");
SharedMemory::AtomicStringVector PA_BluetoothList(SharedMemoryPool_PA_Media, "PA_BluetoothList");
SharedMemory::AtomicStringVector PA_DownloadsList(SharedMemoryPool_PA_Media, "PA_DownloadsList");
SharedMemory::AtomicStringVector PA_StreamingList(SharedMemoryPool_PA_Media, "PA_StreamingList");
SharedMemory::AtomicStringVector PA_USBList(SharedMemoryPool_PA_Media, "PA_USBList");