//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundWaveVariationSegment.h
// Created: Wed Mar 10 19:01:07 2021
//

#ifndef FBGEN_SoundWaveVariationSegment_H
#define FBGEN_SoundWaveVariationSegment_H

struct SoundWaveVariationSegment
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0568;
	}
	unsigned int m_SamplesOffset; // 0x0
	unsigned int m_SeekTableOffset; // 0x4
	float m_SegmentLength; // 0x8
}; // size = 0xc

#endif // FBGEN_SoundWaveVariationSegment_H
