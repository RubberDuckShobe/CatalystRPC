//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIMeleeManagerAntBinding.h
// Created: Wed Mar 10 19:05:18 2021
//

#ifndef FBGEN_PamAIMeleeManagerAntBinding_H
#define FBGEN_PamAIMeleeManagerAntBinding_H

#include "AntRef.h"
struct PamAIMeleeManagerAntBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AB68;
	}
	AntRef m_EnemyAnimatableID; // 0x0
	AntRef m_MeleeEnabled; // 0x14
	AntRef m_MeleeInterestDirectionEnabled; // 0x28
	AntRef m_MeleeInterestDirection; // 0x3c
	AntRef m_MeleeFineMovementEnabled; // 0x50
	AntRef m_MeleeLocomotionOverridden; // 0x64
	AntRef m_MeleeReady; // 0x78
	AntRef m_MeleeFollowup; // 0x8c
	AntRef m_MeleeAttackOngoing; // 0xa0
	AntRef m_MeleeShotOngoing; // 0xb4
	AntRef m_MeleeAttackSuccessful; // 0xc8
	AntRef m_EngagedInMeleeInteraction; // 0xdc
	AntRef m_StrikePush; // 0xf0
	AntRef m_RequestReactionAttack; // 0x104
	AntRef m_AttackInProgress; // 0x118
	AntRef m_AllowMeleeFromIdle; // 0x12c
}; // size = 0x140

#endif // FBGEN_PamAIMeleeManagerAntBinding_H
