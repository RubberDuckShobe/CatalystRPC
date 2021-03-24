//
// Generated with FrostbiteGen by Chod
// File: SDK\UniqueIdEntityData.h
// Created: Wed Mar 10 18:59:43 2021
//

#ifndef FBGEN_UniqueIdEntityData_H
#define FBGEN_UniqueIdEntityData_H

#include "Realm.h"
#include "EntityData.h"

class UniqueIdEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6FB0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_UniqueIdEntityData_H
