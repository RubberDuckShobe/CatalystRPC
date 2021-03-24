//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverInfoNode.h
// Created: Wed Mar 10 18:59:01 2021
//

#ifndef FBGEN_VoiceOverInfoNode_H
#define FBGEN_VoiceOverInfoNode_H

#include "VoiceOverValueConnection.h"
#include "VoiceOverValue.h"
#include "VoiceOverNamedValue.h"
#include "VoiceOverObject.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverInfoNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4670;
	}
	VoiceOverValueConnection m_Object; // 0x10
	VoiceOverValue* m_Value; // 0x20
	VoiceOverNamedValue* m_Field; // 0x28
	VoiceOverObject* m_ExpectedType; // 0x30
}; // size = 0x38

#endif // FBGEN_VoiceOverInfoNode_H
