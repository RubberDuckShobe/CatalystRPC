//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionDescriptionEntityData.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionDescriptionEntityData_H
#define FBGEN_PamMissionDescriptionEntityData_H

#include "PamProgressionMission.h"
#include "EntityData.h"

class PamMissionDescriptionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872E80;
	}
	PamProgressionMission* m_Mission; // 0x18
}; // size = 0x20

#endif // FBGEN_PamMissionDescriptionEntityData_H
