//
// Generated with FrostbiteGen by Chod
// File: SDK\EventMemoryEntityData.h
// Created: Wed Mar 10 19:06:53 2021
//

#ifndef FBGEN_EventMemoryEntityData_H
#define FBGEN_EventMemoryEntityData_H

#include "Realm.h"
#include "EntityData.h"

class EventMemoryEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B090;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_EventMemoryEntityData_H
