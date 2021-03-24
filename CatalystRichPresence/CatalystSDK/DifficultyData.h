//
// Generated with FrostbiteGen by Chod
// File: SDK\DifficultyData.h
// Created: Wed Mar 10 19:07:10 2021
//

#ifndef FBGEN_DifficultyData_H
#define FBGEN_DifficultyData_H

#include "Difficulty.h"
#include "PersistenceGameType.h"
#include "Vec3.h"
#include "Vec2.h"
#include "GameAIDifficultyData.h"
#include "DataContainer.h"

class DifficultyData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811520;
	}
	Difficulty m_Difficulty; // 0x10
	PersistenceGameType m_GameType; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_StickyBoxModifier; // 0x20
	Vec3 m_SnapBoxModifier; // 0x30
	const char* m_ReadableName; // 0x40
	float m_HumanHealthModifier; // 0x48
	float m_FriendsHealthModifier; // 0x4c
	float m_EnemiesHealthModifier; // 0x50
	float m_FriendlyDamageModifier; // 0x54
	float m_VehicleDamageModifier; // 0x58
	float m_HumanInCriticalHealth; // 0x5c
	float m_HumanInCriticalHealthDamageModifier; // 0x60
	float m_HumanRegenerationRateModifier; // 0x64
	float m_CriticalFakeImmortalModifier; // 0x68
	float m_InteractiveManDownDamageModifier; // 0x6c
	float m_InteractiveManDownTimeMultiplier; // 0x70
	float m_InteractiveManDownReviveTime; // 0x74
	int m_AdrenalineKillLimit; // 0x78
	Vec2 m_AttractDistanceFallOffModifier; // 0x7c
	float m_AttractSoftZoneModifier; // 0x84
	float m_AttractUserInputMultiplierModifier; // 0x88
	float m_SnapZoomPostTimeNoInputModifier; // 0x8c
	float m_SnapZoomPostTimeModifier; // 0x90
	float m_SuckZoomModifier; // 0x94
	float m_AiBulletDamageHumanCooldown; // 0x98
	unsigned char _0x9c[0x4];
	GameAIDifficultyData* m_AIData; // 0xa0
	bool m_UsePitchZoomSnap; // 0xa8
	unsigned char _0xa9[0x7];
}; // size = 0xb0

#endif // FBGEN_DifficultyData_H
