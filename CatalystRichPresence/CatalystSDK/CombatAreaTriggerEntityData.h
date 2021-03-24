//
// Generated with FrostbiteGen by Chod
// File: SDK\CombatAreaTriggerEntityData.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_CombatAreaTriggerEntityData_H
#define FBGEN_CombatAreaTriggerEntityData_H

#include "TeamId.h"
#include "SpatialEntityData.h"

class CombatAreaTriggerEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B810;
	}
	unsigned int m_TimeToReturn; // 0x60
	TeamId m_Team; // 0x64
	bool m_IsAiAllowedOutside; // 0x68
	bool m_IsTeamSpecific; // 0x69
	bool m_Enabled; // 0x6a
	unsigned char _0x6b[0x5];
}; // size = 0x70

#endif // FBGEN_CombatAreaTriggerEntityData_H
