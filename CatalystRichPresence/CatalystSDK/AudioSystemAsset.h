//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioSystemAsset.h
// Created: Wed Mar 10 19:08:35 2021
//

#ifndef FBGEN_AudioSystemAsset_H
#define FBGEN_AudioSystemAsset_H

#include "SoundMasterPatchAsset.h"
#include "StreamPoolPreset.h"
#include "SoundTestAsset.h"
#include "MixerSystemAsset.h"
#include "AudioLanguage.h"
#include "Array.h"
#include "HdrSetting.h"
#include "Asset.h"

class AudioSystemAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0E30;
	}
	SoundMasterPatchAsset* m_MasterPatch; // 0x18
	Array<StreamPoolPreset*> m_StreamPoolPresets; // 0x20
	StreamPoolPreset* m_DefaultStreamPoolPreset; // 0x28
	Array<SoundDataPolicy*> m_DataPolicies; // 0x30
	unsigned int m_SampleRate; // 0x38
	unsigned char _0x3c[0x4];
	SoundTestAsset* m_Tests; // 0x40
	MixerSystemAsset* m_MixerSystem; // 0x48
	Array<AudioLanguage*> m_Languages; // 0x50
	Array<AudioLanguageSetting*> m_LanguageSettings; // 0x58
	AudioLanguage* m_DefaultLanguage; // 0x60
	Array<SoundScopeData*> m_Scopes; // 0x68
	Array<SoundScopeStrategyData*> m_ScopeStrategies; // 0x70
	Array<SoundScopeSetupData*> m_ScopeSetups; // 0x78
	Array<HdrSetting*> m_HdrSettings; // 0x80
	HdrSetting* m_DefaultHdrSetting; // 0x88
}; // size = 0x90

#endif // FBGEN_AudioSystemAsset_H
