//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverCompareNode.h
// Created: Wed Mar 10 18:59:09 2021
//

#ifndef FBGEN_VoiceOverCompareNode_H
#define FBGEN_VoiceOverCompareNode_H

#include "VoiceOverValueConnection.h"
#include "VoiceOverValue.h"
#include "VoiceOverCompareExpressionType.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverCompareNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4CD0;
	}
	VoiceOverValueConnection m_A; // 0x10
	VoiceOverValueConnection m_B; // 0x20
	VoiceOverValue* m_False; // 0x30
	VoiceOverValue* m_True; // 0x38
	VoiceOverCompareExpressionType m_Operation; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_VoiceOverCompareNode_H
