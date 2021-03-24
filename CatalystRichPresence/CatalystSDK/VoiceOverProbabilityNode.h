//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverProbabilityNode.h
// Created: Wed Mar 10 18:58:58 2021
//

#ifndef FBGEN_VoiceOverProbabilityNode_H
#define FBGEN_VoiceOverProbabilityNode_H

#include "VoiceOverValue.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverProbabilityNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D43D0;
	}
	VoiceOverValue* m_False; // 0x10
	VoiceOverValue* m_True; // 0x18
	float m_Probability; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_VoiceOverProbabilityNode_H
