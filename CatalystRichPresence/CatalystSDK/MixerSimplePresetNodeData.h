//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerSimplePresetNodeData.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerSimplePresetNodeData_H
#define FBGEN_MixerSimplePresetNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class MixerSimplePresetNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D19D0;
	}
	AudioGraphNodePort m_Index; // 0x10
	Array<MixerPreset*> m_Presets; // 0x18
}; // size = 0x20

#endif // FBGEN_MixerSimplePresetNodeData_H
