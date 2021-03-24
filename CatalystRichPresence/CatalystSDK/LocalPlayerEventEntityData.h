//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalPlayerEventEntityData.h
// Created: Wed Mar 10 19:06:11 2021
//

#ifndef FBGEN_LocalPlayerEventEntityData_H
#define FBGEN_LocalPlayerEventEntityData_H

#include "Realm.h"
#include "LocalPlayerId.h"
#include "EntityData.h"

class LocalPlayerEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A9D0;
	}
	Realm m_Realm; // 0x18
	LocalPlayerId m_LocalPlayerId; // 0x1c
	bool m_AllLocalPlayers; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_LocalPlayerEventEntityData_H
