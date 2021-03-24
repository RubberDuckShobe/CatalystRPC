//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConversationNode.h
// Created: Wed Mar 10 18:59:06 2021
//

#ifndef FBGEN_VoiceOverConversationNode_H
#define FBGEN_VoiceOverConversationNode_H

#include "VoiceOverValueConnection.h"
#include "VoiceOverIntervalNode.h"
#include "Array.h"
#include "VoiceOverContainerConditionMode.h"
#include "VoiceOverConversationInfo.h"
#include "VoiceOverStructureNode.h"

class VoiceOverConversationNode :
	public VoiceOverStructureNode // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3F50;
	}
	Array<VoiceOverValueConnection> m_Condition; // 0x18
	VoiceOverValueConnection m_PronunciationIndex; // 0x20
	VoiceOverIntervalNode* m_Interval; // 0x30
	Array<VoiceOverStructureNode*> m_FinishedRelationship; // 0x38
	Array<VoiceOverStructureNode*> m_BlockedRelationship; // 0x40
	VoiceOverContainerConditionMode m_ConditionMode; // 0x48
	float m_Probability; // 0x4c
	VoiceOverConversationInfo m_Conversation; // 0x50
}; // size = 0x80

#endif // FBGEN_VoiceOverConversationNode_H
