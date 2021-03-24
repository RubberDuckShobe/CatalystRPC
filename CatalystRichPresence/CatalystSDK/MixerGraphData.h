//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerGraphData.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerGraphData_H
#define FBGEN_MixerGraphData_H

#include "Array.h"
#include "AudioGraphData.h"

class MixerGraphData :
	public AudioGraphData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D14F0;
	}
	Array<AudioGraphParameter*> m_Inputs; // 0x38
	Array<MixerInputInfo> m_MixerInputInfos; // 0x40
	Array<AudioGraphParameter*> m_Outputs; // 0x48
}; // size = 0x50

#endif // FBGEN_MixerGraphData_H
