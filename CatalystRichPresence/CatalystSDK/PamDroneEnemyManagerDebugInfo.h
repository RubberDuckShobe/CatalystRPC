//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDroneEnemyManagerDebugInfo.h
// Created: Wed Mar 10 19:04:42 2021
//

#ifndef FBGEN_PamDroneEnemyManagerDebugInfo_H
#define FBGEN_PamDroneEnemyManagerDebugInfo_H

#include "Vec3.h"
struct PamDroneEnemyManagerDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AF48;
	}
	Vec3 m_TravelDirection; // 0x0
	float m_TimeUntilAcquired; // 0x10
	float m_AngleToEnemy; // 0x14
	float m_MaxAllowedFovAngle; // 0x18
	bool m_HasEnemyCandidate; // 0x1c
	bool m_CanFlyToEnemy; // 0x1d
	bool m_EnemyAcquired; // 0x1e
	bool m_LocalPlayerForceDetected; // 0x1f
}; // size = 0x20

#endif // FBGEN_PamDroneEnemyManagerDebugInfo_H
