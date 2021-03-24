//
// Generated with FrostbiteGen by Chod
// File: SDK\EventSwitcherEntry.h
// Created: Wed Mar 10 19:06:52 2021
//

#ifndef FBGEN_EventSwitcherEntry_H
#define FBGEN_EventSwitcherEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class EventSwitcherEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D33B0;
	}
	AudioGraphNodePort m_CaseTrigger; // 0x10
	float m_Value; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_EventSwitcherEntry_H
