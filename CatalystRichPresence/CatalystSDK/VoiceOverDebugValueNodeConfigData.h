//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDebugValueNodeConfigData.h
// Created: Wed Mar 10 18:59:05 2021
//

#ifndef FBGEN_VoiceOverDebugValueNodeConfigData_H
#define FBGEN_VoiceOverDebugValueNodeConfigData_H

#include "Vec3.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverDebugValueNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4850;
	}
	const char* m_Name; // 0x18
	Vec3 m_Color; // 0x20
	float m_DisplayTime; // 0x30
	bool m_Enabled; // 0x34
	unsigned char _0x35[0xb];
}; // size = 0x40

#endif // FBGEN_VoiceOverDebugValueNodeConfigData_H
