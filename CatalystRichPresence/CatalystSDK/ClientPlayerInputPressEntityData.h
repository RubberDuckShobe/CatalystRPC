//
// Generated with FrostbiteGen by Chod
// File: SDK\ClientPlayerInputPressEntityData.h
// Created: Wed Mar 10 19:07:53 2021
//

#ifndef FBGEN_ClientPlayerInputPressEntityData_H
#define FBGEN_ClientPlayerInputPressEntityData_H

#include "Realm.h"
#include "EntityData.h"

class ClientPlayerInputPressEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FB30;
	}
	Realm m_Realm; // 0x18
	int m_EntryInputAction; // 0x1c
	float m_Level; // 0x20
	float m_PressFor; // 0x24
}; // size = 0x28

#endif // FBGEN_ClientPlayerInputPressEntityData_H
