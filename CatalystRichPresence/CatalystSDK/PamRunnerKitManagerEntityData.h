//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitManagerEntityData.h
// Created: Wed Mar 10 19:04:03 2021
//

#ifndef FBGEN_PamRunnerKitManagerEntityData_H
#define FBGEN_PamRunnerKitManagerEntityData_H

#include "SpatialPrefabBlueprint.h"
#include "Array.h"
#include "EntityData.h"

class PamRunnerKitManagerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878060;
	}
	SpatialPrefabBlueprint* m_Blueprint; // 0x18
	Array<PamRunnerKitSpawnMeta> m_KitSpawns; // 0x20
}; // size = 0x28

#endif // FBGEN_PamRunnerKitManagerEntityData_H
