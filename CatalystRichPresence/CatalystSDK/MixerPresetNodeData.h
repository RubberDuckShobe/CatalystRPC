//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerPresetNodeData.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerPresetNodeData_H
#define FBGEN_MixerPresetNodeData_H

#include "AudioGraphNodeData.h"
struct MixerPresetNodeData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0628;
	}
	AudioGraphNodeData* m_Node; // 0x0
	float m_Value; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_MixerPresetNodeData_H
