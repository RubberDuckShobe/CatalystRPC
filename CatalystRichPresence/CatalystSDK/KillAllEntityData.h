//
// Generated with FrostbiteGen by Chod
// File: SDK\KillAllEntityData.h
// Created: Wed Mar 10 19:06:23 2021
//

#ifndef FBGEN_KillAllEntityData_H
#define FBGEN_KillAllEntityData_H

#include "TeamId.h"
#include "KillAllPlayerEnum.h"
#include "EntityData.h"

class KillAllEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B750;
	}
	TeamId m_Team; // 0x18
	KillAllPlayerEnum m_KillPlayers; // 0x1c
}; // size = 0x20

#endif // FBGEN_KillAllEntityData_H
