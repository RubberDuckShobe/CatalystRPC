//
// Generated with FrostbiteGen by Chod
// File: SDK\DelayNodeData.h
// Created: Wed Mar 10 19:07:15 2021
//

#ifndef FBGEN_DelayNodeData_H
#define FBGEN_DelayNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class DelayNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C98A0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_DelayTime; // 0x18
	AudioGraphNodePort m_Feedback; // 0x20
	AudioGraphNodePort m_Out; // 0x28
	float m_MaxDelayTime; // 0x30
	SoundGraphPluginRef m_Plugin; // 0x34
	unsigned char _0x37[0x1];
}; // size = 0x38

#endif // FBGEN_DelayNodeData_H
