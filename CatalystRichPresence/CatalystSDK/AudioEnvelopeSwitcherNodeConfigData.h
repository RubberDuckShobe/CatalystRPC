//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioEnvelopeSwitcherNodeConfigData.h
// Created: Wed Mar 10 19:08:37 2021
//

#ifndef FBGEN_AudioEnvelopeSwitcherNodeConfigData_H
#define FBGEN_AudioEnvelopeSwitcherNodeConfigData_H

#include "Array.h"
#include "AudioGraphNodeConfigData.h"

class AudioEnvelopeSwitcherNodeConfigData :
	public AudioGraphNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C0810;
	}
	Array<AudioEnvelopeAsset*> m_AudioEnvelopes; // 0x18
}; // size = 0x20

#endif // FBGEN_AudioEnvelopeSwitcherNodeConfigData_H
