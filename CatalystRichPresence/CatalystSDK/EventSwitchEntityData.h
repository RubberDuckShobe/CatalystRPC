//
// Generated with FrostbiteGen by Chod
// File: SDK\EventSwitchEntityData.h
// Created: Wed Mar 10 19:06:52 2021
//

#ifndef FBGEN_EventSwitchEntityData_H
#define FBGEN_EventSwitchEntityData_H

#include "Realm.h"
#include "EntityData.h"

class EventSwitchEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6F50;
	}
	Realm m_Realm; // 0x18
	unsigned int m_OutEvents; // 0x1c
	bool m_AutoIncrement; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_EventSwitchEntityData_H
