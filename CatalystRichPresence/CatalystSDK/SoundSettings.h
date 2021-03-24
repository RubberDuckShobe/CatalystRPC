//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundSettings.h
// Created: Wed Mar 10 19:01:10 2021
//

#ifndef FBGEN_SoundSettings_H
#define FBGEN_SoundSettings_H

#include "SystemSettings.h"

class SoundSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816E00;
	}
	const char* m_AudioSystemUri; // 0x20
	const char* m_VOCommon; // 0x28
	const char* m_VOEnglish; // 0x30
	const char* m_VOSpanish; // 0x38
	const char* m_VOFrench; // 0x40
	const char* m_VOGerman; // 0x48
	const char* m_VOItalian; // 0x50
	bool m_Enable; // 0x58
	unsigned char _0x59[0x7];
}; // size = 0x60

#endif // FBGEN_SoundSettings_H
