//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverLanguageRoot.h
// Created: Wed Mar 10 18:58:59 2021
//

#ifndef FBGEN_VoiceOverLanguageRoot_H
#define FBGEN_VoiceOverLanguageRoot_H

#include "AudioLanguage.h"
#include "DataContainer.h"

class VoiceOverLanguageRoot :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3B30;
	}
	AudioLanguage* m_Language; // 0x10
	const char* m_Path; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverLanguageRoot_H
