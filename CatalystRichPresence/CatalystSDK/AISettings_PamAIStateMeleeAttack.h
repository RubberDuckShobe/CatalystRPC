//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateMeleeAttack.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAIStateMeleeAttack_H
#define FBGEN_AISettings_PamAIStateMeleeAttack_H

#include "AISettingsBase.h"

class AISettings_PamAIStateMeleeAttack :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286DE70;
	}
	float m_IsApplicableXZDistance; // 0x20
	float m_IsApplicableAbove; // 0x24
	float m_IsApplicableBelow; // 0x28
	float m_MinimumXZDistance; // 0x2c
	float m_FailXZDistance; // 0x30
	float m_AIFacingAwayFromEnemy_ApplicableDistFactor; // 0x34
	float m_RepathingCooldown; // 0x38
	float m_TimeBetweenMeleeTickets; // 0x3c
	float m_Damage; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_AISettings_PamAIStateMeleeAttack_H
