//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerOutputEntry.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerOutputEntry_H
#define FBGEN_MixerOutputEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphParameter.h"
#include "AudioGraphNodePortGroup.h"

class MixerOutputEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1A90;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphParameter* m_Target; // 0x18
}; // size = 0x20

#endif // FBGEN_MixerOutputEntry_H
