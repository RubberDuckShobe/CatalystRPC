//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverValueConnection.h
// Created: Wed Mar 10 18:58:56 2021
//

#ifndef FBGEN_VoiceOverValueConnection_H
#define FBGEN_VoiceOverValueConnection_H

#include "VoiceOverExpressionNode.h"
#include "VoiceOverValue.h"
struct VoiceOverValueConnection
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D04E8;
	}
	VoiceOverExpressionNode* m_TargetNode; // 0x0
	VoiceOverValue* m_TargetValue; // 0x8
}; // size = 0x10

#endif // FBGEN_VoiceOverValueConnection_H
