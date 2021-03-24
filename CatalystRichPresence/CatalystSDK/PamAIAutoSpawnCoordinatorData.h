//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIAutoSpawnCoordinatorData.h
// Created: Wed Mar 10 19:05:21 2021
//

#ifndef FBGEN_PamAIAutoSpawnCoordinatorData_H
#define FBGEN_PamAIAutoSpawnCoordinatorData_H

#include "Array.h"
#include "EntityData.h"

class PamAIAutoSpawnCoordinatorData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C6D0;
	}
	Array<GroupTypeAutoSpawnRules*> m_GroupRules; // 0x18
}; // size = 0x20

#endif // FBGEN_PamAIAutoSpawnCoordinatorData_H
