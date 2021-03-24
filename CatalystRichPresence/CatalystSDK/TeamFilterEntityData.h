//
// Generated with FrostbiteGen by Chod
// File: SDK\TeamFilterEntityData.h
// Created: Wed Mar 10 19:00:34 2021
//

#ifndef FBGEN_TeamFilterEntityData_H
#define FBGEN_TeamFilterEntityData_H

#include "Realm.h"
#include "TeamId.h"
#include "EntityData.h"

class TeamFilterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AF70;
	}
	Realm m_Realm; // 0x18
	TeamId m_Team; // 0x1c
	bool m_InvertFilter; // 0x20
	bool m_GenerateEventForEveryMatchingTeamMember; // 0x21
	bool m_GetTeamFromPlayerEvent; // 0x22
	unsigned char _0x23[0x5];
}; // size = 0x28

#endif // FBGEN_TeamFilterEntityData_H
