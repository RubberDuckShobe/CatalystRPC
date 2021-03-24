//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundWaveVariation.h
// Created: Wed Mar 10 19:01:07 2021
//

#ifndef FBGEN_SoundWaveVariation_H
#define FBGEN_SoundWaveVariation_H

#include "Array.h"
#include "DataContainer.h"

class SoundWaveVariation :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0830;
	}
	Array<SoundWaveSubtitle> m_Subtitles; // 0x10
	Array<SoundWaveVariationSegment> m_Segments; // 0x18
	unsigned int m_PersistentDataSize; // 0x20
	unsigned char m_Weight; // 0x24
	unsigned char m_ChunkIndex; // 0x25
	unsigned char m_FirstLoopSegmentIndex; // 0x26
	unsigned char m_LastLoopSegmentIndex; // 0x27
}; // size = 0x28

#endif // FBGEN_SoundWaveVariation_H
