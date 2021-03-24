//
// Generated with FrostbiteGen by Chod
// File: SDK\BoolToEventEntityData.h
// Created: Wed Mar 10 19:08:25 2021
//

#ifndef FBGEN_BoolToEventEntityData_H
#define FBGEN_BoolToEventEntityData_H

#include "Realm.h"
#include "EntityData.h"

class BoolToEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6050;
	}
	Realm m_Realm; // 0x18
	bool m_Value; // 0x1c
	bool m_InitalEvent; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_BoolToEventEntityData_H
