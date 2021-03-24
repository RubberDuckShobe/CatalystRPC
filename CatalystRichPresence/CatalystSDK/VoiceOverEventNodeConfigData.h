//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverEventNodeConfigData.h
// Created: Wed Mar 10 18:59:02 2021
//

#ifndef FBGEN_VoiceOverEventNodeConfigData_H
#define FBGEN_VoiceOverEventNodeConfigData_H

#include "Array.h"
#include "Vec3.h"
#include "VoiceOverEvent.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverEventNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3E30;
	}
	Array<VoiceOverValueRedirect*> m_Redirects; // 0x18
	Vec3 m_DebugColor; // 0x20
	VoiceOverEvent* m_Event; // 0x30
	float m_DebugIntervalTime; // 0x38
	bool m_DebugEnabled; // 0x3c
	unsigned char _0x3d[0x3];
}; // size = 0x40

#endif // FBGEN_VoiceOverEventNodeConfigData_H
