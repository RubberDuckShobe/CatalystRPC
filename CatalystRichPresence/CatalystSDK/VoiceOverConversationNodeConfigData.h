//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConversationNodeConfigData.h
// Created: Wed Mar 10 18:59:06 2021
//

#ifndef FBGEN_VoiceOverConversationNodeConfigData_H
#define FBGEN_VoiceOverConversationNodeConfigData_H

#include "VoiceOverContainerConditionMode.h"
#include "VoiceOverConversationInfo.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverConversationNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3EF0;
	}
	VoiceOverContainerConditionMode m_ConditionMode; // 0x18
	float m_Probability; // 0x1c
	VoiceOverConversationInfo m_Conversation; // 0x20
}; // size = 0x50

#endif // FBGEN_VoiceOverConversationNodeConfigData_H
