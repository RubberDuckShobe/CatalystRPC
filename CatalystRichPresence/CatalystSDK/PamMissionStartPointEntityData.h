//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionStartPointEntityData.h
// Created: Wed Mar 10 19:04:22 2021
//

#ifndef FBGEN_PamMissionStartPointEntityData_H
#define FBGEN_PamMissionStartPointEntityData_H

#include "PamProgressionMission.h"
#include "PamStartPointEntityData.h"

class PamMissionStartPointEntityData :
	public PamStartPointEntityData // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873120;
	}
	PamProgressionMission* m_Mission; // 0x48
}; // size = 0x50

#endif // FBGEN_PamMissionStartPointEntityData_H
