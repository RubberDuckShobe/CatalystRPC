//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamMeleeManager.h
// Created: Wed Mar 10 19:08:55 2021
//

#ifndef FBGEN_AISettings_PamMeleeManager_H
#define FBGEN_AISettings_PamMeleeManager_H

#include "AISettingsBase.h"

class AISettings_PamMeleeManager :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286EC50;
	}
	float m_AttackPreparationTimeout; // 0x20
	float m_FineMovementMaxDistance; // 0x24
	float m_PredictionTimeLimit; // 0x28
	float m_FollowupAttackWindow; // 0x2c
	float m_MaximumXZNavmeshSnapDistance; // 0x30
	float m_MaximumYNavmeshSnapDistance; // 0x34
	float m_StrikePushDistance; // 0x38
	float m_ShieldEffectModifier; // 0x3c
	float m_CriticalCooldown; // 0x40
	float m_MaxTimeAttacking; // 0x44
	float m_DisengageLength; // 0x48
	float m_MaxTimeSinceLastAttackAttempt; // 0x4c
	float m_MaxTimeSinceLastAttackSuccess; // 0x50
	float m_AttackTicketGracePeriod; // 0x54
}; // size = 0x58

#endif // FBGEN_AISettings_PamMeleeManager_H
