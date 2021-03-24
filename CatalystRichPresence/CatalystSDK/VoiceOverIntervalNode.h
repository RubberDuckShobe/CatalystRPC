//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverIntervalNode.h
// Created: Wed Mar 10 18:59:01 2021
//

#ifndef FBGEN_VoiceOverIntervalNode_H
#define FBGEN_VoiceOverIntervalNode_H

#include "VoiceOverValueConnection.h"
#include "VoiceOverValue.h"
#include "VoiceOverInterval.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverIntervalNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D45B0;
	}
	VoiceOverValueConnection m_Threshold; // 0x10
	VoiceOverValue* m_Time; // 0x20
	VoiceOverValue* m_False; // 0x28
	VoiceOverValue* m_True; // 0x30
	VoiceOverInterval* m_Interval; // 0x38
}; // size = 0x40

#endif // FBGEN_VoiceOverIntervalNode_H
