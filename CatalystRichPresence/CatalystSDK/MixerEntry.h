//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerEntry.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerEntry_H
#define FBGEN_MixerEntry_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodePortGroup.h"

class MixerEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C90C0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Amplitude; // 0x18
	SoundGraphPluginRef m_Plugin; // 0x20
	unsigned char _0x23[0x5];
}; // size = 0x28

#endif // FBGEN_MixerEntry_H
