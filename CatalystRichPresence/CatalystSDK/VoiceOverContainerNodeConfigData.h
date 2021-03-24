//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverContainerNodeConfigData.h
// Created: Wed Mar 10 18:59:07 2021
//

#ifndef FBGEN_VoiceOverContainerNodeConfigData_H
#define FBGEN_VoiceOverContainerNodeConfigData_H

#include "VoiceOverContainerConditionMode.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverContainerNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4190;
	}
	VoiceOverContainerConditionMode m_ConditionMode; // 0x18
	float m_Probability; // 0x1c
	bool m_AlwaysResetInterval; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_VoiceOverContainerNodeConfigData_H
