//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverTriggerNodeConfigData.h
// Created: Wed Mar 10 18:58:56 2021
//

#ifndef FBGEN_VoiceOverTriggerNodeConfigData_H
#define FBGEN_VoiceOverTriggerNodeConfigData_H

#include "Array.h"
#include "VoiceOverEvent.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverTriggerNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3D10;
	}
	float m_Delay; // 0x18
	unsigned char _0x1c[0x4];
	Array<VoiceOverTriggerParameter*> m_Parameters; // 0x20
	VoiceOverEvent* m_Event; // 0x28
}; // size = 0x30

#endif // FBGEN_VoiceOverTriggerNodeConfigData_H
