//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPresenceInfoManagerEntityData.h
// Created: Wed Mar 10 19:04:13 2021
//

#ifndef FBGEN_PamPresenceInfoManagerEntityData_H
#define FBGEN_PamPresenceInfoManagerEntityData_H

#include "SpatialPrefabBlueprint.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PamPresenceInfoManagerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428528E0;
	}
	SpatialPrefabBlueprint* m_Blueprint; // 0x18
	LinearTransform m_LocalPlayerPosition; // 0x20
}; // size = 0x60

#endif // FBGEN_PamPresenceInfoManagerEntityData_H
