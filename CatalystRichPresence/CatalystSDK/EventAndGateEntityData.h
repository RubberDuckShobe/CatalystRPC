//
// Generated with FrostbiteGen by Chod
// File: SDK\EventAndGateEntityData.h
// Created: Wed Mar 10 19:06:54 2021
//

#ifndef FBGEN_EventAndGateEntityData_H
#define FBGEN_EventAndGateEntityData_H

#include "Realm.h"
#include "EntityData.h"

class EventAndGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6E90;
	}
	Realm m_Realm; // 0x18
	unsigned int m_EventCount; // 0x1c
}; // size = 0x20

#endif // FBGEN_EventAndGateEntityData_H
