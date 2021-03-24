//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerSendEntry.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerSendEntry_H
#define FBGEN_MixerSendEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphParameter.h"
#include "MixerAsset.h"
#include "AudioGraphNodePortGroup.h"

class MixerSendEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D17F0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphParameter* m_Target; // 0x18
	MixerAsset* m_Mixer; // 0x20
}; // size = 0x28

#endif // FBGEN_MixerSendEntry_H
