//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDistanceNode.h
// Created: Wed Mar 10 18:59:03 2021
//

#ifndef FBGEN_VoiceOverDistanceNode_H
#define FBGEN_VoiceOverDistanceNode_H

#include "VoiceOverValueConnection.h"
#include "VoiceOverValue.h"
#include "VoiceOverCompareExpressionType.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverDistanceNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D47F0;
	}
	VoiceOverValueConnection m_A; // 0x10
	VoiceOverValueConnection m_B; // 0x20
	VoiceOverValueConnection m_Threshold; // 0x30
	VoiceOverValue* m_Distance; // 0x40
	VoiceOverValue* m_False; // 0x48
	VoiceOverValue* m_True; // 0x50
	VoiceOverCompareExpressionType m_Operation; // 0x58
	unsigned char _0x5c[0x4];
}; // size = 0x60

#endif // FBGEN_VoiceOverDistanceNode_H
