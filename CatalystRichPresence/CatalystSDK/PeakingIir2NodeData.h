//
// Generated with FrostbiteGen by Chod
// File: SDK\PeakingIir2NodeData.h
// Created: Wed Mar 10 19:03:14 2021
//

#ifndef FBGEN_PeakingIir2NodeData_H
#define FBGEN_PeakingIir2NodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class PeakingIir2NodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8CA0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Frequency; // 0x18
	AudioGraphNodePort m_Amplitude; // 0x20
	AudioGraphNodePort m_Q; // 0x28
	AudioGraphNodePort m_Out; // 0x30
	SoundGraphPluginRef m_Plugin; // 0x38
	unsigned char _0x3b[0x5];
}; // size = 0x40

#endif // FBGEN_PeakingIir2NodeData_H
