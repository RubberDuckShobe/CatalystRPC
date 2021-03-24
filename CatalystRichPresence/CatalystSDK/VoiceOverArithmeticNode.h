//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverArithmeticNode.h
// Created: Wed Mar 10 18:59:10 2021
//

#ifndef FBGEN_VoiceOverArithmeticNode_H
#define FBGEN_VoiceOverArithmeticNode_H

#include "VoiceOverValueConnection.h"
#include "VoiceOverValue.h"
#include "VoiceOverArithmeticExpressionType.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverArithmeticNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4D90;
	}
	VoiceOverValueConnection m_A; // 0x10
	VoiceOverValueConnection m_B; // 0x20
	VoiceOverValue* m_Result; // 0x30
	VoiceOverArithmeticExpressionType m_Operation; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_VoiceOverArithmeticNode_H
