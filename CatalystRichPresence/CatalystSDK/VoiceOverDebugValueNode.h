//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDebugValueNode.h
// Created: Wed Mar 10 18:59:05 2021
//

#ifndef FBGEN_VoiceOverDebugValueNode_H
#define FBGEN_VoiceOverDebugValueNode_H

#include "VoiceOverValueConnection.h"
#include "Vec3.h"
#include "VoiceOverValue.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverDebugValueNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D48B0;
	}
	VoiceOverValueConnection m_In; // 0x10
	Vec3 m_Color; // 0x20
	VoiceOverValue* m_Out; // 0x30
	const char* m_ValueName; // 0x38
	float m_Min; // 0x40
	float m_Max; // 0x44
	float m_DisplayTime; // 0x48
	bool m_Plot; // 0x4c
	bool m_Enabled; // 0x4d
	unsigned char _0x4e[0x2];
}; // size = 0x50

#endif // FBGEN_VoiceOverDebugValueNode_H
