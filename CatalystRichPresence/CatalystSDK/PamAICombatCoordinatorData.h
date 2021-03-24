//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAICombatCoordinatorData.h
// Created: Wed Mar 10 19:05:21 2021
//

#ifndef FBGEN_PamAICombatCoordinatorData_H
#define FBGEN_PamAICombatCoordinatorData_H

#include "AntRef.h"
#include "AISpecialization.h"
#include "EntityData.h"

class PamAICombatCoordinatorData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C850;
	}
	float m_InterceptSpeed; // 0x18
	float m_SpeedTimeFrame; // 0x1c
	float m_CQRange; // 0x20
	float m_CQRangeY; // 0x24
	float m_NearRange; // 0x28
	float m_NearRangeY; // 0x2c
	AntRef m_EnemyEngagedInMeleeInteraction; // 0x30
	float m_IdealRepositionRadius; // 0x44
	float m_MaximumDistanceToAttemptToReposition; // 0x48
	float m_MinimumRepositionEntitySeparation; // 0x4c
	AISpecialization* m_TypeToCount; // 0x50
}; // size = 0x58

#endif // FBGEN_PamAICombatCoordinatorData_H
