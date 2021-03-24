//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPlaylistSelector.h
// Created: Wed Mar 10 19:05:40 2021
//

#ifndef FBGEN_MusicPlaylistSelector_H
#define FBGEN_MusicPlaylistSelector_H

#include "MusicAsset.h"
#include "MusicEventData.h"
#include "DataContainer.h"

class MusicPlaylistSelector :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7200;
	}
	MusicEventData* m_Event; // 0x10
	MusicAsset* m_Target; // 0x18
	MusicEventData* m_TriggerOnTarget; // 0x20
}; // size = 0x28

#endif // FBGEN_MusicPlaylistSelector_H
