//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponComponentData.h
// Created: Wed Mar 10 18:58:51 2021
//

#ifndef FBGEN_WeaponComponentData_H
#define FBGEN_WeaponComponentData_H

#include "Vec3.h"
#include "WeaponFiringData.h"
#include "GameAIWeaponData.h"
#include "WeaponData.h"
#include "WeaponClassification.h"
#include "BoneComponentData.h"

class WeaponComponentData :
	public BoneComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D760;
	}
	Vec3 m_ProjectileSpawnOffset; // 0x70
	Vec3 m_TargetPositionOverride; // 0x80
	WeaponFiringData* m_WeaponFiring; // 0x90
	const char* m_DamageGiverName; // 0x98
	GameAIWeaponData* m_AIData; // 0xa0
	WeaponData* m_CustomWeaponType; // 0xa8
	float m_ImpulseStrength; // 0xb0
	WeaponClassification m_Classification; // 0xb4
	float m_ReloadTimeMultiplier; // 0xb8
	float m_DamageMultiplier; // 0xbc
	float m_ExplosionDamageMultiplier; // 0xc0
	float m_OverheatDropPerSecondMultiplier; // 0xc4
	float m_LockTimeMultiplier; // 0xc8
	float m_LockingAcceptanceAngleMultiplier; // 0xcc
	unsigned int m_WeaponItemHash; // 0xd0
	bool m_SequentialFiring; // 0xd4
	unsigned char _0xd5[0xb];
}; // size = 0xe0

#endif // FBGEN_WeaponComponentData_H
