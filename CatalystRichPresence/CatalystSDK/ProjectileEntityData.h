//
// Generated with FrostbiteGen by Chod
// File: SDK\ProjectileEntityData.h
// Created: Wed Mar 10 19:02:51 2021
//

#ifndef FBGEN_ProjectileEntityData_H
#define FBGEN_ProjectileEntityData_H

#include "ExplosionEntityData.h"
#include "WeaponSuppressionData.h"
#include "MaterialDecl.h"
#include "AntHitReactionWeaponType.h"
#include "EntityVoiceOverInfo.h"
#include "GamePhysicsEntityData.h"

class ProjectileEntityData :
	public GamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E300;
	}
	float m_InitialSpeed; // 0x90
	float m_TimeToLive; // 0x94
	unsigned int m_MaxCount; // 0x98
	float m_InitMeshHideTime; // 0x9c
	float m_VisualConvergeDistance; // 0xa0
	float m_VisualConvergenceDelay; // 0xa4
	float m_VisualConvergenceDuration; // 0xa8
	float m_ProxyVisualConvergenceDelay; // 0xac
	float m_ProxyVisualConvergenceDuration; // 0xb0
	unsigned char _0xb4[0x4];
	ExplosionEntityData* m_Explosion; // 0xb8
	WeaponSuppressionData* m_SuppressionData; // 0xc0
	const char* m_AmmunitionType; // 0xc8
	MaterialDecl m_MaterialPair; // 0xd0
	AntHitReactionWeaponType m_HitReactionWeaponType; // 0xd4
	EntityVoiceOverInfo* m_VoiceOverInfo; // 0xd8
	bool m_DetonateOnTimeout; // 0xe0
	bool m_ServerProjectileDisabled; // 0xe1
	bool m_HideOnDetonation; // 0xe2
	unsigned char _0xe3[0xd];
}; // size = 0xf0

#endif // FBGEN_ProjectileEntityData_H
