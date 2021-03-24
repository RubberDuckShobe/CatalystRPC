//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverVariableNode.h
// Created: Wed Mar 10 18:58:56 2021
//

#ifndef FBGEN_VoiceOverVariableNode_H
#define FBGEN_VoiceOverVariableNode_H

#include "VoiceOverValue.h"
#include "VoiceOverNamedValue.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverVariableNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4310;
	}
	VoiceOverValue* m_Value; // 0x10
	VoiceOverNamedValue* m_Source; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverVariableNode_H
