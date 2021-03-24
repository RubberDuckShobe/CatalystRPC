//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioLanguageSetting.h
// Created: Wed Mar 10 19:08:35 2021
//

#ifndef FBGEN_AudioLanguageSetting_H
#define FBGEN_AudioLanguageSetting_H

#include "Array.h"
#include "DataContainer.h"

class AudioLanguageSetting :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0FB0;
	}
	const char* m_Name; // 0x10
	unsigned int m_NameHash; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_DisplayName; // 0x20
	Array<AudioLanguageMapping> m_Mappings; // 0x28
	bool m_IsDefault; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_AudioLanguageSetting_H
