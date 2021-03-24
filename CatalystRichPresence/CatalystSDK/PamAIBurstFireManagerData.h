//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIBurstFireManagerData.h
// Created: Wed Mar 10 19:05:21 2021
//

#ifndef FBGEN_PamAIBurstFireManagerData_H
#define FBGEN_PamAIBurstFireManagerData_H

#include "PamAIFireManagerBaseData.h"

class PamAIBurstFireManagerData :
	public PamAIFireManagerBaseData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E8F0;
	}
	float m_HitChanceModifierForSkillMoves; // 0x70
	float m_Damage; // 0x74
	int m_ProjectilesPerBurst; // 0x78
	float m_TimeBetweenProjectiles; // 0x7c
	float m_TimeBetweenBursts; // 0x80
	float m_MaxMissDistance; // 0x84
	float m_MissedProjectileHeightOffset; // 0x88
	int m_ProjectilesTillDamageCount; // 0x8c
	int m_ProjectilesTillDamageWhenStandingStillCount; // 0x90
	int m_RandomExtraBurstProjectilesCount; // 0x94
	float m_RandomExtraTimeBetweenBursts; // 0x98
	float m_EnemyStandingStillThreshold; // 0x9c
	float m_MaxDistanceToFire; // 0xa0
	float m_StartFireDelay; // 0xa4
	float m_TriggerWeaponTurnedThreshold; // 0xa8
	bool m_FiringEnabled; // 0xac
	unsigned char _0xad[0x3];
}; // size = 0xb0

#endif // FBGEN_PamAIBurstFireManagerData_H
