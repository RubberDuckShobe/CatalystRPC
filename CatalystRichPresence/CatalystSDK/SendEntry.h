//
// Generated with FrostbiteGen by Chod
// File: SDK\SendEntry.h
// Created: Wed Mar 10 19:02:29 2021
//

#ifndef FBGEN_SendEntry_H
#define FBGEN_SendEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphParameter.h"
#include "AudioGraphNodePortGroup.h"

class SendEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2690;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphParameter* m_Target; // 0x18
}; // size = 0x20

#endif // FBGEN_SendEntry_H
