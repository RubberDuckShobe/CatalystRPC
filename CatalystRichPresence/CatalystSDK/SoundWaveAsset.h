//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundWaveAsset.h
// Created: Wed Mar 10 19:01:08 2021
//

#ifndef FBGEN_SoundWaveAsset_H
#define FBGEN_SoundWaveAsset_H

#include "SoundWaveVariationSelection.h"
#include "StreamPoolAsset.h"
#include "Array.h"
#include "SoundDataAsset.h"

class SoundWaveAsset :
	public SoundDataAsset // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D07D0;
	}
	Array<SoundWaveRuntimeVariation> m_RuntimeVariations; // 0x30
	Array<SoundWaveLocalizationInfo> m_Localization; // 0x38
	Array<const char*> m_SubtitleStringIds; // 0x40
	Array<SoundWaveSubtitle> m_Subtitles; // 0x48
	SoundWaveVariationSelection m_Selection; // 0x50
	unsigned char _0x54[0x4];
	StreamPoolAsset* m_StreamPool; // 0x58
	Array<SoundWaveVariationSegment> m_Segments; // 0x60
	float m_WaveLength; // 0x68
	bool m_Seekable; // 0x6c
	unsigned char m_VariationHistoryCount; // 0x6d
	unsigned char m_PersistentVariationCount; // 0x6e
	bool m_PreferAvailableVariations; // 0x6f
	unsigned char m_StreamingMode; // 0x70
	unsigned char m_ChannelCount; // 0x71
	unsigned char m_VoicePriority; // 0x72
	unsigned char _0x73[0x5];
}; // size = 0x78

#endif // FBGEN_SoundWaveAsset_H
