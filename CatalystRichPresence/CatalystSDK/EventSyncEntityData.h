//
// Generated with FrostbiteGen by Chod
// File: SDK\EventSyncEntityData.h
// Created: Wed Mar 10 19:06:52 2021
//

#ifndef FBGEN_EventSyncEntityData_H
#define FBGEN_EventSyncEntityData_H

#include "LocalPlayerId.h"
#include "EntityData.h"

class EventSyncEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428110A0;
	}
	LocalPlayerId m_LocalPlayerId; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_EventSyncEntityData_H
