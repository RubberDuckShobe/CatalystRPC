//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundWaveLocalizationInfo.h
// Created: Wed Mar 10 19:01:08 2021
//

#ifndef FBGEN_SoundWaveLocalizationInfo_H
#define FBGEN_SoundWaveLocalizationInfo_H

#include "AudioLanguage.h"
struct SoundWaveLocalizationInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0508;
	}
	AudioLanguage* m_Language; // 0x0
	unsigned short m_FirstVariationIndex; // 0x8
	unsigned short m_VariationCount; // 0xa
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_SoundWaveLocalizationInfo_H
