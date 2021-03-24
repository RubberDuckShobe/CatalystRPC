//
// Generated with FrostbiteGen by Chod
// File: SDK\SinePlayerNodeData.h
// Created: Wed Mar 10 19:01:24 2021
//

#ifndef FBGEN_SinePlayerNodeData_H
#define FBGEN_SinePlayerNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class SinePlayerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9540;
	}
	unsigned int m_ChannelCount; // 0x10
	AudioGraphNodePort m_Start; // 0x14
	AudioGraphNodePort m_Stop; // 0x1c
	AudioGraphNodePort m_Frequency; // 0x24
	AudioGraphNodePort m_Out; // 0x2c
	SoundGraphPluginRef m_Plugin; // 0x34
	unsigned char _0x37[0x1];
}; // size = 0x38

#endif // FBGEN_SinePlayerNodeData_H
