//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioLanguage.h
// Created: Wed Mar 10 19:08:36 2021
//

#ifndef FBGEN_AudioLanguage_H
#define FBGEN_AudioLanguage_H

#include "LanguageFormat.h"
#include "DataContainer.h"

class AudioLanguage :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C86A0;
	}
	const char* m_Name; // 0x10
	LanguageFormat m_LanguageMapping; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_AudioLanguage_H
