//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPlaylistAsset.h
// Created: Wed Mar 10 19:05:40 2021
//

#ifndef FBGEN_MusicPlaylistAsset_H
#define FBGEN_MusicPlaylistAsset_H

#include "MusicPlaylistType.h"
#include "Array.h"
#include "SynchedFadeData.h"
#include "MusicBaseAsset.h"

class MusicPlaylistAsset :
	public MusicBaseAsset // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C71A0;
	}
	MusicPlaylistType m_PlaylistType; // 0x28
	unsigned char _0x2c[0x4];
	Array<MusicAsset*> m_Assets; // 0x30
	Array<MusicPlaylistSelector*> m_Selectors; // 0x38
	SynchedFadeData* m_Fade; // 0x40
	float m_MinDelay; // 0x48
	float m_MaxDelay; // 0x4c
	bool m_Repeat; // 0x50
	unsigned char _0x51[0x7];
}; // size = 0x58

#endif // FBGEN_MusicPlaylistAsset_H
