//
// Generated with FrostbiteGen by Chod
// File: SDK\ValueSelectorEntry.h
// Created: Wed Mar 10 18:59:32 2021
//

#ifndef FBGEN_ValueSelectorEntry_H
#define FBGEN_ValueSelectorEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class ValueSelectorEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D22D0;
	}
	AudioGraphNodePort m_Input; // 0x10
	float m_CaseValue; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_ValueSelectorEntry_H
