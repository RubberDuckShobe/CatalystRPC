//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamFireManager.h
// Created: Wed Mar 10 19:08:55 2021
//

#ifndef FBGEN_AISettings_PamFireManager_H
#define FBGEN_AISettings_PamFireManager_H

#include "AISettingsBase.h"

class AISettings_PamFireManager :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286EB30;
	}
	float m_CriticalCooldown; // 0x20
	float m_NearFriendCooldown; // 0x24
	float m_OutOfCoverCooldown; // 0x28
	float m_FatalAttackCooldown; // 0x2c
	float m_CoverThreshold; // 0x30
	float m_AcquiredCooldown; // 0x34
	int m_AutoFire_BulletsCount; // 0x38
	float m_AutoFire_PauseTime; // 0x3c
	int m_BurstFire_BulletsCount; // 0x40
	float m_BurstFire_PauseTime; // 0x44
	float m_SingleShoot_Pause; // 0x48
	float m_MaxMissDistance; // 0x4c
	float m_MaxDistance; // 0x50
	float m_MidDistance; // 0x54
	float m_NearDistance; // 0x58
	int m_SingleFire_BulletsTillDamageCount; // 0x5c
	int m_BurstFire_BulletsTillDamageCount; // 0x60
	int m_AutoFire_BulletsTillDamageCount; // 0x64
	int m_PointBlank_BulletsTillDamageCount; // 0x68
	float m_Damage; // 0x6c
	int m_AutoFire_RandomExtraBurstCount; // 0x70
	float m_AutoFire_RandomExtraPauseTime; // 0x74
	int m_BurstFire_RandomExtraBurstCount; // 0x78
	float m_BurstFire_RandomExtraPauseTime; // 0x7c
	float m_HoldFire_AngleToFriend; // 0x80
	unsigned char _0x84[0x4];
}; // size = 0x88

#endif // FBGEN_AISettings_PamFireManager_H
