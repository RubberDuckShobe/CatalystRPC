//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSafeSpawnTrackerEntityData.h
// Created: Wed Mar 10 19:04:03 2021
//

#ifndef FBGEN_PamSafeSpawnTrackerEntityData_H
#define FBGEN_PamSafeSpawnTrackerEntityData_H

#include "LinearTransform.h"
#include "Array.h"
#include "EntityData.h"

class PamSafeSpawnTrackerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428813D0;
	}
	int m_SafetyMargin; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_PlayerTransform; // 0x20
	LinearTransform m_OverrideTransform; // 0x60
	Array<AntEnumeration*> m_SafeMoves; // 0xa0
	float m_MaxSpeedForOnDistanceEvent; // 0xa8
	float m_TriggerEventOnDistance; // 0xac
}; // size = 0xb0

#endif // FBGEN_PamSafeSpawnTrackerEntityData_H
