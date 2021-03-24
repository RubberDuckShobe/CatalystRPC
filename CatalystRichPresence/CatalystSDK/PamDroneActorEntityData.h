//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDroneActorEntityData.h
// Created: Wed Mar 10 19:04:42 2021
//

#ifndef FBGEN_PamDroneActorEntityData_H
#define FBGEN_PamDroneActorEntityData_H

#include "Vec2.h"
#include "ActorEntityData.h"

class PamDroneActorEntityData :
	public ActorEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D380;
	}
	Vec2 m_KillForcePositionOffset; // 0xa0
	float m_KillForceMagnitude; // 0xa8
	float m_ApplyForceOverTime; // 0xac
	float m_UnspawnWhenKilledTime; // 0xb0
	float m_MinPlayerDistance; // 0xb4
	float m_MinPlayerAngle; // 0xb8
	bool m_UseEnemyToDroneVecAsForceDirection; // 0xbc
	unsigned char _0xbd[0x3];
}; // size = 0xc0

#endif // FBGEN_PamDroneActorEntityData_H
