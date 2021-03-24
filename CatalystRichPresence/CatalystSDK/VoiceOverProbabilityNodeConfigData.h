//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverProbabilityNodeConfigData.h
// Created: Wed Mar 10 18:58:58 2021
//

#ifndef FBGEN_VoiceOverProbabilityNodeConfigData_H
#define FBGEN_VoiceOverProbabilityNodeConfigData_H

#include "VoiceOverNodeConfigData.h"

class VoiceOverProbabilityNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4370;
	}
	float m_Probability; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_VoiceOverProbabilityNodeConfigData_H
