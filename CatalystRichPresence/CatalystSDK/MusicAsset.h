//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicAsset.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MusicAsset_H
#define FBGEN_MusicAsset_H

#include "MusicSelector.h"
#include "Array.h"
#include "MusicBaseAsset.h"

class MusicAsset :
	public MusicBaseAsset // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7260;
	}
	unsigned int m_NameHash; // 0x28
	float m_BeatsPerMinute; // 0x2c
	float m_BeatsPerBar; // 0x30
	unsigned char _0x34[0x4];
	Array<MusicStreamableData*> m_Playables; // 0x38
	Array<MusicOverlayData*> m_Overlays; // 0x40
	Array<MusicSelector*> m_Selectors; // 0x48
	MusicSelector* m_DefaultSelector; // 0x50
	Array<MusicTransition*> m_FallbackTransitions; // 0x58
	unsigned char m_VoicePriority; // 0x60
	unsigned char _0x61[0x7];
}; // size = 0x68

#endif // FBGEN_MusicAsset_H
