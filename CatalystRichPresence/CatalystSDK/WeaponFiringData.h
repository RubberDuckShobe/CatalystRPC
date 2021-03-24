//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponFiringData.h
// Created: Wed Mar 10 18:58:50 2021
//

#ifndef FBGEN_WeaponFiringData_H
#define FBGEN_WeaponFiringData_H

#include "FiringFunctionData.h"
#include "WeaponSwayData.h"
#include "RumbleFiringData.h"
#include "GameDataContainer.h"

class WeaponFiringData :
	public GameDataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DF40;
	}
	FiringFunctionData* m_PrimaryFire; // 0x10
	float m_DeployTime; // 0x18
	float m_ReactivateCooldownTime; // 0x1c
	float m_DisableZoomOnDeployTime; // 0x20
	float m_AltDeployTime; // 0x24
	int m_AltDeployId; // 0x28
	unsigned char _0x2c[0x4];
	WeaponSwayData* m_WeaponSway; // 0x30
	RumbleFiringData m_Rumble; // 0x38
	float m_SupportDelayStand; // 0x44
	float m_SupportDelayProne; // 0x48
	bool m_UseAutoAiming; // 0x4c
	bool m_InflictSelfDamage; // 0x4d
	bool m_ShowEnemyNametagOnAim; // 0x4e
	bool m_ReloadWholeMags; // 0x4f
	bool m_DisableReloadWhileSprinting; // 0x50
	bool m_AbortReloadOnSprint; // 0x51
	unsigned char _0x52[0x6];
}; // size = 0x58

#endif // FBGEN_WeaponFiringData_H
