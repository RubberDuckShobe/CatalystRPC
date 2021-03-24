//
// Generated with FrostbiteGen by Chod
// File: SDK\BulletEntityData.h
// Created: Wed Mar 10 19:08:23 2021
//

#ifndef FBGEN_BulletEntityData_H
#define FBGEN_BulletEntityData_H

#include "SoundAsset.h"
#include "ExplosionEntityData.h"
#include "MeshProjectileEntityData.h"

class BulletEntityData :
	public MeshProjectileEntityData // size = 0x130
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E120;
	}
	SoundAsset* m_FlyBySound; // 0x130
	ExplosionEntityData* m_DudExplosion; // 0x138
	float m_Gravity; // 0x140
	float m_ImpactImpulse; // 0x144
	float m_DetonationTimeVariation; // 0x148
	float m_VehicleDetonationRadius; // 0x14c
	float m_VehicleDetonationActivationDelay; // 0x150
	float m_FlyBySoundRadius; // 0x154
	float m_FlyBySoundSpeed; // 0x158
	float m_Stamina; // 0x15c
	float m_DistributeDamageOverTime; // 0x160
	float m_StartDamage; // 0x164
	float m_EndDamage; // 0x168
	float m_DamageFalloffStartDistance; // 0x16c
	float m_DamageFalloffEndDistance; // 0x170
	float m_TimeToArmExplosion; // 0x174
	float m_FirstFrameTravelDistance; // 0x178
	bool m_VehicleDetonationUsesFriendlyFireRules; // 0x17c
	bool m_HasVehicleDetonation; // 0x17d
	bool m_InstantHit; // 0x17e
	bool m_StopTrailEffectOnUnspawn; // 0x17f
}; // size = 0x180

#endif // FBGEN_BulletEntityData_H
