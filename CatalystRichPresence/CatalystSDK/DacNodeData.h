//
// Generated with FrostbiteGen by Chod
// File: SDK\DacNodeData.h
// Created: Wed Mar 10 19:07:20 2021
//

#ifndef FBGEN_DacNodeData_H
#define FBGEN_DacNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class DacNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9900;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_SpeakerCount; // 0x18
	AudioGraphNodePort m_Hrtf; // 0x20
	SoundGraphPluginRef m_DelayPlugin; // 0x28
	SoundGraphPluginRef m_VuPlugin; // 0x2b
	SoundGraphPluginRef m_GainPlugin; // 0x2e
	SoundGraphPluginRef m_DacPlugin; // 0x31
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_DacNodeData_H
