//
// Generated with FrostbiteGen by Chod
// File: SDK\StateNodeEntityBaseData.h
// Created: Wed Mar 10 19:00:56 2021
//

#ifndef FBGEN_StateNodeEntityBaseData_H
#define FBGEN_StateNodeEntityBaseData_H

#include "Realm.h"
#include "EntityData.h"

class StateNodeEntityBaseData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428996E0;
	}
	const char* m_StateName; // 0x18
	Realm m_Realm; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_StateNodeEntityBaseData_H
