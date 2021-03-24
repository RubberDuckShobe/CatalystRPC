//
// Generated with FrostbiteGen by Chod
// File: SDK\FrequencyShiftSsbNodeData.h
// Created: Wed Mar 10 19:06:43 2021
//

#ifndef FBGEN_FrequencyShiftSsbNodeData_H
#define FBGEN_FrequencyShiftSsbNodeData_H

#include "AudioGraphNodePort.h"
#include "FrequencyShiftSsbFilter.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class FrequencyShiftSsbNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9660;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Frequency; // 0x18
	AudioGraphNodePort m_Out; // 0x20
	FrequencyShiftSsbFilter m_Filter; // 0x28
	SoundGraphPluginRef m_Plugin; // 0x2c
	unsigned char _0x2f[0x1];
}; // size = 0x30

#endif // FBGEN_FrequencyShiftSsbNodeData_H
