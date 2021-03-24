//
// Generated with FrostbiteGen by Chod
// File: SDK\BandPassFir64NodeData.h
// Created: Wed Mar 10 19:08:33 2021
//

#ifndef FBGEN_BandPassFir64NodeData_H
#define FBGEN_BandPassFir64NodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class BandPassFir64NodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9B40;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Frequency; // 0x18
	AudioGraphNodePort m_Bandwidth; // 0x20
	AudioGraphNodePort m_Out; // 0x28
	SoundGraphPluginRef m_Plugin; // 0x30
	unsigned char _0x33[0x5];
}; // size = 0x38

#endif // FBGEN_BandPassFir64NodeData_H
