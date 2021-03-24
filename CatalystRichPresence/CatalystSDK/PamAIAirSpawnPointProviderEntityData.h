//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIAirSpawnPointProviderEntityData.h
// Created: Wed Mar 10 19:05:22 2021
//

#ifndef FBGEN_PamAIAirSpawnPointProviderEntityData_H
#define FBGEN_PamAIAirSpawnPointProviderEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class PamAIAirSpawnPointProviderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E350;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_MinSplitSpawnVolumeSize; // 0x20
	float m_MaxPlayerDistance; // 0x30
	float m_MinPlayerDistance; // 0x34
	float m_MinPlayerAngle; // 0x38
	float m_RequestTimeout; // 0x3c
}; // size = 0x40

#endif // FBGEN_PamAIAirSpawnPointProviderEntityData_H
