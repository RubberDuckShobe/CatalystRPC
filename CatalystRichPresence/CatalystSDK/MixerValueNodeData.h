//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerValueNodeData.h
// Created: Wed Mar 10 19:05:49 2021
//

#ifndef FBGEN_MixerValueNodeData_H
#define FBGEN_MixerValueNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class MixerValueNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1610;
	}
	AudioGraphNodePort m_Out; // 0x10
	float m_DefaultValue; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_MixerValueNodeData_H
