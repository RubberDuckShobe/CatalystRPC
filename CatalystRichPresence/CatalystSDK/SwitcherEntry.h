//
// Generated with FrostbiteGen by Chod
// File: SDK\SwitcherEntry.h
// Created: Wed Mar 10 19:00:37 2021
//

#ifndef FBGEN_SwitcherEntry_H
#define FBGEN_SwitcherEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class SwitcherEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D23F0;
	}
	AudioGraphNodePort m_CaseTrigger; // 0x10
	float m_CaseValue; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_SwitcherEntry_H
