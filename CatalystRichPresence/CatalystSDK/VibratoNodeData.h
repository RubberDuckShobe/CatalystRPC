//
// Generated with FrostbiteGen by Chod
// File: SDK\VibratoNodeData.h
// Created: Wed Mar 10 18:59:15 2021
//

#ifndef FBGEN_VibratoNodeData_H
#define FBGEN_VibratoNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class VibratoNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8760;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	float m_MaxModulationDepth; // 0x20
	AudioGraphNodePort m_ModulationDepth; // 0x24
	AudioGraphNodePort m_ModulationFrequency; // 0x2c
	SoundGraphPluginRef m_Plugin; // 0x34
	unsigned char _0x37[0x1];
}; // size = 0x38

#endif // FBGEN_VibratoNodeData_H
