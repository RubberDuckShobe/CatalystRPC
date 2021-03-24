//
// Generated with FrostbiteGen by Chod
// File: SDK\EventGateEntityData.h
// Created: Wed Mar 10 19:06:53 2021
//

#ifndef FBGEN_EventGateEntityData_H
#define FBGEN_EventGateEntityData_H

#include "Realm.h"
#include "EntityData.h"

class EventGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6170;
	}
	Realm m_Realm; // 0x18
	bool m_Default; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_EventGateEntityData_H
