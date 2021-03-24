//
// Generated with FrostbiteGen by Chod
// File: SDK\AndEntityData.h
// Created: Wed Mar 10 19:08:46 2021
//

#ifndef FBGEN_AndEntityData_H
#define FBGEN_AndEntityData_H

#include "Realm.h"
#include "EntityData.h"

class AndEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7430;
	}
	Realm m_Realm; // 0x18
	unsigned int m_InputCount; // 0x1c
}; // size = 0x20

#endif // FBGEN_AndEntityData_H
