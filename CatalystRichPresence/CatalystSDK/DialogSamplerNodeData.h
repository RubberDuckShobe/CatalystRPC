//
// Generated with FrostbiteGen by Chod
// File: SDK\DialogSamplerNodeData.h
// Created: Wed Mar 10 19:07:13 2021
//

#ifndef FBGEN_DialogSamplerNodeData_H
#define FBGEN_DialogSamplerNodeData_H

#include "AudioGraphNodePort.h"
#include "OutputNodeData.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class DialogSamplerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9840;
	}
	AudioGraphNodePort m_Pitch; // 0x10
	AudioGraphNodePort m_Amplitude; // 0x18
	AudioGraphNodePort m_Continue; // 0x20
	AudioGraphNodePort m_Output; // 0x28
	AudioGraphNodePort m_Triggered; // 0x30
	AudioGraphNodePort m_Finished; // 0x38
	float m_TailLength; // 0x40
	unsigned char _0x44[0x4];
	OutputNodeData* m_PitchSource; // 0x48
	SoundGraphPluginRef m_SndPlayerPlugin; // 0x50
	SoundGraphPluginRef m_ResamplePlugin; // 0x53
	SoundGraphPluginRef m_PausePlugin; // 0x56
	SoundGraphPluginRef m_GainPlugin; // 0x59
	unsigned char _0x5c[0x4];
}; // size = 0x60

#endif // FBGEN_DialogSamplerNodeData_H
