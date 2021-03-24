//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateChase.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAIStateChase_H
#define FBGEN_AISettings_PamAIStateChase_H

#include "AISettingsBase.h"

class AISettings_PamAIStateChase :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286DB70;
	}
	float m_MinimumEngageDistance_XZ; // 0x20
	float m_MinimumEngageDistance_Y; // 0x24
	float m_MaximumEngageDistance; // 0x28
	float m_SuccessDistance; // 0x2c
}; // size = 0x30

#endif // FBGEN_AISettings_PamAIStateChase_H
