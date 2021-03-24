//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionStatusEntityData.h
// Created: Wed Mar 10 19:04:22 2021
//

#ifndef FBGEN_PamMissionStatusEntityData_H
#define FBGEN_PamMissionStatusEntityData_H

#include "PamProgressionMission.h"
#include "EntityData.h"

class PamMissionStatusEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873360;
	}
	PamProgressionMission* m_Mission; // 0x18
}; // size = 0x20

#endif // FBGEN_PamMissionStatusEntityData_H
