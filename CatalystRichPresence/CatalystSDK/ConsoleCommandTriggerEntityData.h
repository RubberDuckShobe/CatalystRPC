//
// Generated with FrostbiteGen by Chod
// File: SDK\ConsoleCommandTriggerEntityData.h
// Created: Wed Mar 10 19:07:33 2021
//

#ifndef FBGEN_ConsoleCommandTriggerEntityData_H
#define FBGEN_ConsoleCommandTriggerEntityData_H

#include "Realm.h"
#include "EntityData.h"

class ConsoleCommandTriggerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820490;
	}
	const char* m_CommandName; // 0x18
	const char* m_GroupName; // 0x20
	Realm m_Realm; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ConsoleCommandTriggerEntityData_H
