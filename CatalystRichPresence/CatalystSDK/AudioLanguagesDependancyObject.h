//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioLanguagesDependancyObject.h
// Created: Wed Mar 10 19:08:35 2021
//

#ifndef FBGEN_AudioLanguagesDependancyObject_H
#define FBGEN_AudioLanguagesDependancyObject_H

#include "Array.h"
#include "DataContainer.h"

class AudioLanguagesDependancyObject :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0F50;
	}
	Array<AudioLanguage*> m_AudioLanguages; // 0x10
}; // size = 0x18

#endif // FBGEN_AudioLanguagesDependancyObject_H
