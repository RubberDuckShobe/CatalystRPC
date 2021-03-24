//
// Generated with FrostbiteGen by Chod
// File: SDK\MissileEntityData.h
// Created: Wed Mar 10 19:05:52 2021
//

#ifndef FBGEN_MissileEntityData_H
#define FBGEN_MissileEntityData_H

#include "EffectBlueprint.h"
#include "ExplosionEntityData.h"
#include "SoundAsset.h"
#include "TeamId.h"
#include "WarnTarget.h"
#include "LockingControllerData.h"
#include "MissileLockableInfoData.h"
#include "MissileUnguidedData.h"
#include "NearTargetDetonationData.h"
#include "GhostedProjectileEntityData.h"

class MissileEntityData :
	public GhostedProjectileEntityData // size = 0x140
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E060;
	}
	EffectBlueprint* m_EngineEffect; // 0x140
	ExplosionEntityData* m_DudExplosion; // 0x148
	SoundAsset* m_FlyBySound; // 0x150
	float m_EngineStrength; // 0x158
	float m_MaxSpeed; // 0x15c
	float m_EngineTimeToIgnition; // 0x160
	float m_EngineTimeToLive; // 0x164
	float m_TimeToActivateGuidingSystem; // 0x168
	float m_TimeToArm; // 0x16c
	float m_MaxTurnAngle; // 0x170
	float m_MinTurnAngle; // 0x174
	float m_TurnAngleMultiplier; // 0x178
	float m_Drag; // 0x17c
	float m_Gravity; // 0x180
	float m_FlyBySoundRadius; // 0x184
	float m_FlyBySoundSpeed; // 0x188
	float m_ImpactImpulse; // 0x18c
	float m_Damage; // 0x190
	TeamId m_DefaultTeam; // 0x194
	WarnTarget m_WarnTarget; // 0x198
	unsigned char _0x19c[0x4];
	LockingControllerData* m_LockingController; // 0x1a0
	MissileLockableInfoData m_LockableInfo; // 0x1a8
	MissileUnguidedData m_UnguidedData; // 0x1b0
	NearTargetDetonationData m_NearTargetDetonation; // 0x1c4
	float m_MaxBankAngle; // 0x1d4
	float m_BankingSpeed; // 0x1d8
	unsigned char _0x1dc[0x4];
	const char* m_Icon; // 0x1e0
	const char* m_TargetIcon; // 0x1e8
	const char* m_TargetIconEnemy; // 0x1f0
	float m_MinGhostFrequency; // 0x1f8
	bool m_ApplyGravityWhenGuided; // 0x1fc
	bool m_WarnOnPointingMissile; // 0x1fd
	bool m_EnableBanking; // 0x1fe
	bool m_StartEffectsOnSpawn; // 0x1ff
}; // size = 0x200

#endif // FBGEN_MissileEntityData_H
