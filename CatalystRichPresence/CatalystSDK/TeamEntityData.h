//
// Generated with FrostbiteGen by Chod
// File: SDK\TeamEntityData.h
// Created: Wed Mar 10 19:00:34 2021
//

#ifndef FBGEN_TeamEntityData_H
#define FBGEN_TeamEntityData_H

#include "TeamData.h"
#include "TeamId.h"
#include "EntityData.h"

class TeamEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BB10;
	}
	TeamData* m_Team; // 0x18
	TeamId m_Id; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_TeamEntityData_H
