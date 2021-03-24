//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverPronunciation.h
// Created: Wed Mar 10 18:58:58 2021
//

#ifndef FBGEN_VoiceOverPronunciation_H
#define FBGEN_VoiceOverPronunciation_H

#include "AudioLanguage.h"
#include "VoiceOverPronunciationFallback.h"
#include "DataContainer.h"

class VoiceOverPronunciation :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3950;
	}
	const char* m_Name; // 0x10
	AudioLanguage* m_PrimaryLanguage; // 0x18
	AudioLanguage* m_SecondaryLanguage; // 0x20
	VoiceOverPronunciationFallback m_SecondaryFallback; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_VoiceOverPronunciation_H
