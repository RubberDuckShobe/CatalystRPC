//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFieldSpawnerComponentData.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamFieldSpawnerComponentData_H
#define FBGEN_PamFieldSpawnerComponentData_H

#include "Realm.h"
#include "EffectBlueprint.h"
#include "GameComponentData.h"

class PamFieldSpawnerComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B2F0;
	}
	Realm m_Realm; // 0x70
	unsigned char _0x74[0x4];
	EffectBlueprint* m_OnSpawn; // 0x78
	EffectBlueprint* m_OnUnspawn; // 0x80
	float m_MaxShieldExplosionDamage; // 0x88
	float m_MinShieldExplosionDamage; // 0x8c
	int m_MaxHeartExplosionDamage; // 0x90
	int m_MinHeartExplosionDamage; // 0x94
	float m_InnerExplosionDamageRadius; // 0x98
	float m_OuterExplosionDamageRadius; // 0x9c
	float m_ActivationRadius; // 0xa0
	float m_JumpTriggerRadius; // 0xa4
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_PamFieldSpawnerComponentData_H
