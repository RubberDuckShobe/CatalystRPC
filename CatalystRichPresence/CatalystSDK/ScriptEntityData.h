//
// Generated with FrostbiteGen by Chod
// File: SDK\ScriptEntityData.h
// Created: Wed Mar 10 19:02:30 2021
//

#ifndef FBGEN_ScriptEntityData_H
#define FBGEN_ScriptEntityData_H

#include "Realm.h"
#include "EntityData.h"

class ScriptEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7850;
	}
	const char* m_Code; // 0x18
	Realm m_Realm; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ScriptEntityData_H
