//
// Generated with FrostbiteGen by Chod
// File: SDK\TacticalObjectiveEntityData.h
// Created: Wed Mar 10 19:00:35 2021
//

#ifndef FBGEN_TacticalObjectiveEntityData_H
#define FBGEN_TacticalObjectiveEntityData_H

#include "EntityData.h"

class TacticalObjectiveEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B450;
	}
	const char* m_MissionSid; // 0x18
	const char* m_BriefingSidTeam1; // 0x20
	const char* m_BriefingSidTeam2; // 0x28
	float m_Team1Timer; // 0x30
	float m_Team2Timer; // 0x34
}; // size = 0x38

#endif // FBGEN_TacticalObjectiveEntityData_H
