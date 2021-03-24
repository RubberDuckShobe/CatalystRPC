//
// Generated with FrostbiteGen by Chod
// File: SDK\GainNodeData.h
// Created: Wed Mar 10 19:06:42 2021
//

#ifndef FBGEN_GainNodeData_H
#define FBGEN_GainNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class GainNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9600;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Amplitude; // 0x18
	AudioGraphNodePort m_Out; // 0x20
	SoundGraphPluginRef m_Plugin; // 0x28
	unsigned char _0x2b[0x5];
}; // size = 0x30

#endif // FBGEN_GainNodeData_H
