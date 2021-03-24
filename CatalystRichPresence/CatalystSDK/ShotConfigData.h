//
// Generated with FrostbiteGen by Chod
// File: SDK\ShotConfigData.h
// Created: Wed Mar 10 19:01:26 2021
//

#ifndef FBGEN_ShotConfigData_H
#define FBGEN_ShotConfigData_H

#include "Vec3.h"
#include "Array.h"
#include "ExplosionEntityData.h"
#include "ProjectileEntityData.h"
#include "ProjectileBlueprint.h"
struct ShotConfigData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D460;
	}
	Vec3 m_InitialPosition; // 0x0
	Vec3 m_InitialDirection; // 0x10
	Vec3 m_InitialSpeed; // 0x20
	Array<InitialDirectionScaleByPitchData> m_InitialDirectionScaleByPitch; // 0x30
	Array<InitialSpeedScaleByPitchData> m_InitialSpeedScaleByPitch; // 0x38
	float m_InheritWeaponSpeedAmount; // 0x40
	unsigned char _0x44[0x4];
	ExplosionEntityData* m_MuzzleExplosion; // 0x48
	ProjectileEntityData* m_ProjectileData; // 0x50
	ProjectileEntityData* m_SecondaryProjectileData; // 0x58
	ProjectileBlueprint* m_Projectile; // 0x60
	ProjectileBlueprint* m_SecondaryProjectile; // 0x68
	float m_SpawnDelay; // 0x70
	unsigned int m_NumberOfBulletsPerShell; // 0x74
	unsigned int m_NumberOfBulletsPerShot; // 0x78
	unsigned int m_NumberOfBulletsPerBurst; // 0x7c
	bool m_RelativeTargetAiming; // 0x80
	bool m_ForceSpawnToCamera; // 0x81
	bool m_SpawnVisualAtWeaponBone; // 0x82
	bool m_ActiveForceSpawnToCamera; // 0x83
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_ShotConfigData_H
