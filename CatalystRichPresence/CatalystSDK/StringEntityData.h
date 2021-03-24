//
// Generated with FrostbiteGen by Chod
// File: SDK\StringEntityData.h
// Created: Wed Mar 10 19:00:50 2021
//

#ifndef FBGEN_StringEntityData_H
#define FBGEN_StringEntityData_H

#include "Realm.h"
#include "EntityData.h"

class StringEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5330;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_DefaultString; // 0x20
}; // size = 0x28

#endif // FBGEN_StringEntityData_H
