//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerReceiveEntry.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerReceiveEntry_H
#define FBGEN_MixerReceiveEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphParameter.h"
#include "MixerAsset.h"
#include "AudioGraphNodePortGroup.h"

class MixerReceiveEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D18B0;
	}
	AudioGraphNodePort m_Out; // 0x10
	AudioGraphParameter* m_Source; // 0x18
	MixerAsset* m_Mixer; // 0x20
}; // size = 0x28

#endif // FBGEN_MixerReceiveEntry_H
