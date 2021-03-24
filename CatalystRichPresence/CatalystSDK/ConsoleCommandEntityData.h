//
// Generated with FrostbiteGen by Chod
// File: SDK\ConsoleCommandEntityData.h
// Created: Wed Mar 10 19:07:33 2021
//

#ifndef FBGEN_ConsoleCommandEntityData_H
#define FBGEN_ConsoleCommandEntityData_H

#include "Array.h"
#include "Realm.h"
#include "EntityData.h"

class ConsoleCommandEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428204F0;
	}
	Array<const char*> m_Commands; // 0x18
	const char* m_DynamicCommand; // 0x20
	Realm m_Realm; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ConsoleCommandEntityData_H
