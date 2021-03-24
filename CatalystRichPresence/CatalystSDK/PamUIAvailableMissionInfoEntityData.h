//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIAvailableMissionInfoEntityData.h
// Created: Wed Mar 10 19:03:40 2021
//

#ifndef FBGEN_PamUIAvailableMissionInfoEntityData_H
#define FBGEN_PamUIAvailableMissionInfoEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class PamUIAvailableMissionInfoEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A4C0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<PamProgressionMissionType> m_AvailableMissionTypes; // 0x20
}; // size = 0x28

#endif // FBGEN_PamUIAvailableMissionInfoEntityData_H
