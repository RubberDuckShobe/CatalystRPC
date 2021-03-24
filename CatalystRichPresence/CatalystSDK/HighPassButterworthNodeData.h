//
// Generated with FrostbiteGen by Chod
// File: SDK\HighPassButterworthNodeData.h
// Created: Wed Mar 10 19:06:34 2021
//

#ifndef FBGEN_HighPassButterworthNodeData_H
#define FBGEN_HighPassButterworthNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class HighPassButterworthNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C94E0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Frequency; // 0x18
	AudioGraphNodePort m_Order; // 0x20
	AudioGraphNodePort m_Out; // 0x28
	SoundGraphPluginRef m_Plugin; // 0x30
	unsigned char _0x33[0x5];
}; // size = 0x38

#endif // FBGEN_HighPassButterworthNodeData_H
