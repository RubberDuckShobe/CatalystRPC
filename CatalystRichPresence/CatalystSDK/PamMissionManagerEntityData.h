//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionManagerEntityData.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionManagerEntityData_H
#define FBGEN_PamMissionManagerEntityData_H

#include "EntityData.h"

class PamMissionManagerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873300;
	}
	unsigned int m_MissionToReplay; // 0x18
	bool m_AllMissionsDisabled; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_PamMissionManagerEntityData_H
