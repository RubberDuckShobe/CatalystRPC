//
// Generated with FrostbiteGen by Chod
// File: SDK\ChorusNodeData.h
// Created: Wed Mar 10 19:08:13 2021
//

#ifndef FBGEN_ChorusNodeData_H
#define FBGEN_ChorusNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class ChorusNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9A20;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	float m_MaxDelay; // 0x20
	float m_MaxModulationDepth; // 0x24
	AudioGraphNodePort m_TapCount; // 0x28
	AudioGraphNodePort m_DelayTime; // 0x30
	AudioGraphNodePort m_ModulationDepth; // 0x38
	AudioGraphNodePort m_ModulationFrequency; // 0x40
	SoundGraphPluginRef m_Plugin; // 0x48
	unsigned char _0x4b[0x5];
}; // size = 0x50

#endif // FBGEN_ChorusNodeData_H
