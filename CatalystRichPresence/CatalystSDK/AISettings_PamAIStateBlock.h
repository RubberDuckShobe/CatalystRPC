//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateBlock.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAIStateBlock_H
#define FBGEN_AISettings_PamAIStateBlock_H

#include "AISettingsBase.h"

class AISettings_PamAIStateBlock :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286DAB0;
	}
	float m_MinimumEngageDistance; // 0x20
	float m_MaximumEngageDistance; // 0x24
	float m_SuccessDistance; // 0x28
	float m_SpeedTimeFrame; // 0x2c
	float m_InterceptFactor; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_AISettings_PamAIStateBlock_H
