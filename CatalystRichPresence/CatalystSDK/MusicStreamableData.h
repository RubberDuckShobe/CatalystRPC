//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicStreamableData.h
// Created: Wed Mar 10 19:05:40 2021
//

#ifndef FBGEN_MusicStreamableData_H
#define FBGEN_MusicStreamableData_H

#include "MusicStreamableData.h"
#include "MusicOverlayData.h"
#include "MusicPlayableData.h"

class MusicStreamableData :
	public MusicPlayableData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C77A0;
	}
	float m_RangeValue; // 0x38
	int m_Weight; // 0x3c
	MusicStreamableData* m_NextPlayable; // 0x40
	MusicOverlayData* m_OnNextPlayableOverlay; // 0x48
	bool m_AllowRangeFade; // 0x50
	bool m_RestartIfAlreadyPlaying; // 0x51
	unsigned char _0x52[0x6];
}; // size = 0x58

#endif // FBGEN_MusicStreamableData_H
