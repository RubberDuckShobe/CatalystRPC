//
// Generated with FrostbiteGen by Chod
// File: SDK\PamHeliWeapon.h
// Created: Wed Mar 10 19:04:27 2021
//

#ifndef FBGEN_PamHeliWeapon_H
#define FBGEN_PamHeliWeapon_H

#include "PamHeliWeaponType.h"
#include "DataContainer.h"

class PamHeliWeapon :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E830;
	}
	PamHeliWeaponType m_WeaponType; // 0x10
	float m_Damage; // 0x14
	int m_ProjectilesPerBurst; // 0x18
	float m_TimeBetweenProjectiles; // 0x1c
	float m_TimeBetweenBursts; // 0x20
	float m_MaxDistanceToFire; // 0x24
	float m_MinPitchAngleToFire; // 0x28
	float m_MaxPitchAngleToFire; // 0x2c
	float m_StartFireDelay; // 0x30
	float m_HitChanceModifierForSkillMoves; // 0x34
}; // size = 0x38

#endif // FBGEN_PamHeliWeapon_H
