//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicSegmentData.h
// Created: Wed Mar 10 19:05:40 2021
//

#ifndef FBGEN_MusicSegmentData_H
#define FBGEN_MusicSegmentData_H

#include "SoundWaveAsset.h"
#include "MultitrackData.h"
#include "MusicStreamableData.h"

class MusicSegmentData :
	public MusicStreamableData // size = 0x58
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7560;
	}
	SoundWaveAsset* m_Wave; // 0x58
	MultitrackData* m_MultitrackLayers; // 0x60
}; // size = 0x68

#endif // FBGEN_MusicSegmentData_H
