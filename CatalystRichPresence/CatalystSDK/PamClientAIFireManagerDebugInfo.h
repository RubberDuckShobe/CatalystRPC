//
// Generated with FrostbiteGen by Chod
// File: SDK\PamClientAIFireManagerDebugInfo.h
// Created: Wed Mar 10 19:05:02 2021
//

#ifndef FBGEN_PamClientAIFireManagerDebugInfo_H
#define FBGEN_PamClientAIFireManagerDebugInfo_H

#include "Vec3.h"
#include "PamFirePattern.h"
struct PamClientAIFireManagerDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AFA8;
	}
	Vec3 m_AimPos; // 0x0
	Vec3 m_WeaponPos; // 0x10
	const char* m_FireType; // 0x20
	PamFirePattern m_FirePattern; // 0x28
	float m_DistToEnemy; // 0x2c
	int m_ShotsFiredSinceLastDealtDamage; // 0x30
	float m_OutOfCoverCooldown; // 0x34
	float m_FatalAttackCooldown; // 0x38
	bool m_DealtDamageLastFrame; // 0x3c
	bool m_WantToDoDamage; // 0x3d
	unsigned char _0x3e[0x2];
}; // size = 0x40

#endif // FBGEN_PamClientAIFireManagerDebugInfo_H
