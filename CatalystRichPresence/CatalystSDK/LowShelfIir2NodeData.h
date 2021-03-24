//
// Generated with FrostbiteGen by Chod
// File: SDK\LowShelfIir2NodeData.h
// Created: Wed Mar 10 19:06:05 2021
//

#ifndef FBGEN_LowShelfIir2NodeData_H
#define FBGEN_LowShelfIir2NodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class LowShelfIir2NodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C91E0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Frequency; // 0x18
	AudioGraphNodePort m_Amplitude; // 0x20
	AudioGraphNodePort m_Out; // 0x28
	SoundGraphPluginRef m_Plugin; // 0x30
	unsigned char _0x33[0x5];
}; // size = 0x38

#endif // FBGEN_LowShelfIir2NodeData_H
