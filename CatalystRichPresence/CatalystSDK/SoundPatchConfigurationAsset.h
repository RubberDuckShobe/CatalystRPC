//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundPatchConfigurationAsset.h
// Created: Wed Mar 10 19:01:11 2021
//

#ifndef FBGEN_SoundPatchConfigurationAsset_H
#define FBGEN_SoundPatchConfigurationAsset_H

#include "SoundPatchAsset.h"
#include "MixerAsset.h"
#include "Array.h"
#include "SoundPatchConfigurationDebugData.h"
#include "SoundAsset.h"

class SoundPatchConfigurationAsset :
	public SoundAsset // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0A70;
	}
	SoundPatchAsset* m_Sound; // 0x38
	float m_Loudness; // 0x40
	unsigned char _0x44[0x4];
	MixerAsset* m_Mixer; // 0x48
	Array<AudioGraphNodeConfigData*> m_NodeConfigs; // 0x50
	Array<AudioGraphParameterConfigData*> m_ParameterConfigs; // 0x58
	SoundPatchConfigurationDebugData* m_DebugData; // 0x60
}; // size = 0x68

#endif // FBGEN_SoundPatchConfigurationAsset_H
