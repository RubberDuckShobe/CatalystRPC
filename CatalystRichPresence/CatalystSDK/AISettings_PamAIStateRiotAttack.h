//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateRiotAttack.h
// Created: Wed Mar 10 19:08:55 2021
//

#ifndef FBGEN_AISettings_PamAIStateRiotAttack_H
#define FBGEN_AISettings_PamAIStateRiotAttack_H

#include "AISettingsBase.h"

class AISettings_PamAIStateRiotAttack :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286CEB0;
	}
	float m_MinTimeBetweenSuccessfulAttackAttempts; // 0x20
	float m_MinAllowedDistance; // 0x24
	float m_MaxAllowedDistance; // 0x28
	float m_RiotFieldMinimumDistance; // 0x2c
	float m_RiotLookAheadTime; // 0x30
	float m_RiotTargetTestRadius; // 0x34
}; // size = 0x38

#endif // FBGEN_AISettings_PamAIStateRiotAttack_H
