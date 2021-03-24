//
// Generated with FrostbiteGen by Chod
// File: SDK\OrEntityData.h
// Created: Wed Mar 10 19:05:26 2021
//

#ifndef FBGEN_OrEntityData_H
#define FBGEN_OrEntityData_H

#include "Realm.h"
#include "EntityData.h"

class OrEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E73D0;
	}
	Realm m_Realm; // 0x18
	unsigned int m_InputCount; // 0x1c
}; // size = 0x20

#endif // FBGEN_OrEntityData_H
