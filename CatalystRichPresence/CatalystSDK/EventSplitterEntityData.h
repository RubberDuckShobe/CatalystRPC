//
// Generated with FrostbiteGen by Chod
// File: SDK\EventSplitterEntityData.h
// Created: Wed Mar 10 19:06:52 2021
//

#ifndef FBGEN_EventSplitterEntityData_H
#define FBGEN_EventSplitterEntityData_H

#include "Realm.h"
#include "EntityData.h"

class EventSplitterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B030;
	}
	Realm m_Realm; // 0x18
	bool m_RunOnce; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_EventSplitterEntityData_H
