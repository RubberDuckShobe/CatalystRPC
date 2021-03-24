//
// Generated with FrostbiteGen by Chod
// File: SDK\GroupTypeAutoSpawnRules.h
// Created: Wed Mar 10 19:06:36 2021
//

#ifndef FBGEN_GroupTypeAutoSpawnRules_H
#define FBGEN_GroupTypeAutoSpawnRules_H

#include "PamAIGroupType.h"
#include "DataContainer.h"

class GroupTypeAutoSpawnRules :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C730;
	}
	PamAIGroupType m_AIGroupType; // 0x10
	unsigned int m_MaxGroupTypeCount; // 0x14
	float m_MinPlayerDistance; // 0x18
	float m_MinPlayerAngle; // 0x1c
	float m_SpawnRequestTimeout; // 0x20
	bool m_ForceAllowSpawn; // 0x24
	bool m_QueueSpawnRequests; // 0x25
	unsigned char _0x26[0x2];
}; // size = 0x28

#endif // FBGEN_GroupTypeAutoSpawnRules_H
