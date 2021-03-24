//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugEventInput.h
// Created: Wed Mar 10 19:07:17 2021
//

#ifndef FBGEN_DebugEventInput_H
#define FBGEN_DebugEventInput_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class DebugEventInput :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3650;
	}
	AudioGraphNodePort m_E; // 0x10
	const char* m_Name; // 0x18
	bool m_RequireTriggeredAndSet; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_DebugEventInput_H
