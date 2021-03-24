//
// Generated with FrostbiteGen by Chod
// File: SDK\FlangerNodeData.h
// Created: Wed Mar 10 19:06:47 2021
//

#ifndef FBGEN_FlangerNodeData_H
#define FBGEN_FlangerNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class FlangerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C96C0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	float m_MaxDelay; // 0x20
	float m_MaxModulationDepth; // 0x24
	AudioGraphNodePort m_DelayTime; // 0x28
	AudioGraphNodePort m_ModulationDepth; // 0x30
	AudioGraphNodePort m_ModulationFrequency; // 0x38
	SoundGraphPluginRef m_Plugin; // 0x40
	unsigned char _0x43[0x5];
}; // size = 0x48

#endif // FBGEN_FlangerNodeData_H
