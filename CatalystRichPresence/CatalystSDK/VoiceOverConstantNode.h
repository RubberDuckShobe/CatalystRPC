//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConstantNode.h
// Created: Wed Mar 10 18:59:08 2021
//

#ifndef FBGEN_VoiceOverConstantNode_H
#define FBGEN_VoiceOverConstantNode_H

#include "VoiceOverValue.h"
#include "VoiceOverConstantValue.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverConstantNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4970;
	}
	VoiceOverValue* m_Value; // 0x10
	VoiceOverConstantValue* m_Source; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverConstantNode_H
