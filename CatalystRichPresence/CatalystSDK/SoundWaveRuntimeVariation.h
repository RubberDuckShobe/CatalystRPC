//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundWaveRuntimeVariation.h
// Created: Wed Mar 10 19:01:07 2021
//

#ifndef FBGEN_SoundWaveRuntimeVariation_H
#define FBGEN_SoundWaveRuntimeVariation_H

struct SoundWaveRuntimeVariation
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0528;
	}
	unsigned int m_PersistentDataSize; // 0x0
	unsigned short m_FirstSegmentIndex; // 0x4
	unsigned char m_FirstSubtitleIndex; // 0x6
	unsigned char m_SubtitleCount; // 0x7
	unsigned char m_SegmentCount; // 0x8
	unsigned char m_ChunkIndex; // 0x9
	unsigned char m_FirstLoopSegmentIndex; // 0xa
	unsigned char m_LastLoopSegmentIndex; // 0xb
	unsigned char m_Weight; // 0xc
	unsigned char _0xd[0x3];
}; // size = 0x10

#endif // FBGEN_SoundWaveRuntimeVariation_H
