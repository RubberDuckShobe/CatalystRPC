//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverContainerNode.h
// Created: Wed Mar 10 18:59:07 2021
//

#ifndef FBGEN_VoiceOverContainerNode_H
#define FBGEN_VoiceOverContainerNode_H

#include "VoiceOverIntervalNode.h"
#include "Array.h"
#include "VoiceOverContainerConditionMode.h"
#include "VoiceOverStructureNode.h"

class VoiceOverContainerNode :
	public VoiceOverStructureNode // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D41F0;
	}
	Array<VoiceOverValueConnection> m_Condition; // 0x18
	VoiceOverIntervalNode* m_Interval; // 0x20
	Array<VoiceOverStructureNode*> m_TrueRelationship; // 0x28
	Array<VoiceOverStructureNode*> m_FalseRelationship; // 0x30
	VoiceOverContainerConditionMode m_ConditionMode; // 0x38
	float m_Probability; // 0x3c
	bool m_AlwaysResetInterval; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_VoiceOverContainerNode_H
