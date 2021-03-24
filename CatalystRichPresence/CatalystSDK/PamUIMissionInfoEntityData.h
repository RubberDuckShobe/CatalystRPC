//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMissionInfoEntityData.h
// Created: Wed Mar 10 19:03:26 2021
//

#ifndef FBGEN_PamUIMissionInfoEntityData_H
#define FBGEN_PamUIMissionInfoEntityData_H

#include "Realm.h"
#include "PamMissionDescriptionData.h"
#include "EntityData.h"

class PamUIMissionInfoEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A580;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	PamMissionDescriptionData* m_MissionDescriptionData; // 0x20
}; // size = 0x28

#endif // FBGEN_PamUIMissionInfoEntityData_H
