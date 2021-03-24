//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverGlobalNode.h
// Created: Wed Mar 10 18:59:01 2021
//

#ifndef FBGEN_VoiceOverGlobalNode_H
#define FBGEN_VoiceOverGlobalNode_H

#include "VoiceOverValue.h"
#include "VoiceOverNamedValue.h"
#include "VoiceOverObject.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverGlobalNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4730;
	}
	VoiceOverValue* m_Value; // 0x10
	VoiceOverNamedValue* m_Field; // 0x18
	VoiceOverObject* m_Object; // 0x20
}; // size = 0x28

#endif // FBGEN_VoiceOverGlobalNode_H
