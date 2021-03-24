//
// Generated with FrostbiteGen by Chod
// File: SDK\MasterUnitNodeData.h
// Created: Wed Mar 10 19:06:03 2021
//

#ifndef FBGEN_MasterUnitNodeData_H
#define FBGEN_MasterUnitNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class MasterUnitNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9180;
	}
	AudioGraphNodePort m_SettingsIndex; // 0x10
	AudioGraphNodePort m_Amplitude; // 0x18
	AudioGraphNodePort m_MasterGain; // 0x20
	AudioGraphNodePort m_MasterLfeGain; // 0x28
	AudioGraphNodePort m_MasterDialogGain; // 0x30
	AudioGraphNodePort m_MainMixGain; // 0x38
	AudioGraphNodePort m_PostEffectsGain; // 0x40
	AudioGraphNodePort m_ReverbGain; // 0x48
	AudioGraphNodePort m_FadeTime; // 0x50
	AudioGraphNodePort m_HighPassFreq; // 0x58
	AudioGraphNodePort m_LowShelfFreq; // 0x60
	AudioGraphNodePort m_LowShelfGain; // 0x68
	AudioGraphNodePort m_HighShelfFreq; // 0x70
	AudioGraphNodePort m_HighShelfGain; // 0x78
	AudioGraphNodePort m_CompThreshold; // 0x80
	AudioGraphNodePort m_CompRatio; // 0x88
	AudioGraphNodePort m_CompAttack; // 0x90
	AudioGraphNodePort m_CompRelease; // 0x98
	AudioGraphNodePort m_DistClipLevel; // 0xa0
	AudioGraphNodePort m_ParallelDistortionGain; // 0xa8
	Array<MasterUnitSettings*> m_Settings; // 0xb0
}; // size = 0xb8

#endif // FBGEN_MasterUnitNodeData_H
