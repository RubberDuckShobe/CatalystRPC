//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerInputEntry.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerInputEntry_H
#define FBGEN_MixerInputEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphParameter.h"
#include "MixerValueAccumulateMode.h"
#include "AudioGraphNodePortGroup.h"

class MixerInputEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1B50;
	}
	AudioGraphNodePort m_Out; // 0x10
	AudioGraphParameter* m_Source; // 0x18
	MixerValueAccumulateMode m_AccumulateMode; // 0x20
	bool m_KeepValue; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_MixerInputEntry_H
