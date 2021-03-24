//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIActiveMissionInfoEntityData.h
// Created: Wed Mar 10 19:03:40 2021
//

#ifndef FBGEN_PamUIActiveMissionInfoEntityData_H
#define FBGEN_PamUIActiveMissionInfoEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class PamUIActiveMissionInfoEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A520;
	}
	Realm m_Realm; // 0x18
	int m_ActiveObjectiveIndex; // 0x1c
	Array<PamProgressionMissionType> m_ActiveMissionTypes; // 0x20
}; // size = 0x28

#endif // FBGEN_PamUIActiveMissionInfoEntityData_H
