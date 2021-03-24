//
// Generated with FrostbiteGen by Chod
// File: SDK\IntEntityData.h
// Created: Wed Mar 10 19:06:27 2021
//

#ifndef FBGEN_IntEntityData_H
#define FBGEN_IntEntityData_H

#include "Realm.h"
#include "EntityData.h"

class IntEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E54B0;
	}
	Realm m_Realm; // 0x18
	int m_DefaultValue; // 0x1c
	int m_IncDecValue; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_IntEntityData_H
