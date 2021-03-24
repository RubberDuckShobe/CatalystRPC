//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerEntryConfig.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerEntryConfig_H
#define FBGEN_MixerEntryConfig_H

#include "AudioGraphParameter.h"
#include "MixerAsset.h"
#include "DataContainer.h"

class MixerEntryConfig :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1730;
	}
	AudioGraphParameter* m_GraphParameter; // 0x10
	MixerAsset* m_Mixer; // 0x18
}; // size = 0x20

#endif // FBGEN_MixerEntryConfig_H
