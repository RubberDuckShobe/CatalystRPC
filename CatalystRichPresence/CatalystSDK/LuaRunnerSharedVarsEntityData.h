//
// Generated with FrostbiteGen by Chod
// File: SDK\LuaRunnerSharedVarsEntityData.h
// Created: Wed Mar 10 19:06:05 2021
//

#ifndef FBGEN_LuaRunnerSharedVarsEntityData_H
#define FBGEN_LuaRunnerSharedVarsEntityData_H

#include "Realm.h"
#include "EntityData.h"

class LuaRunnerSharedVarsEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142849AD0;
	}
	Realm m_Realm; // 0x18
	bool m_AddToDebugDisplay; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_LuaRunnerSharedVarsEntityData_H
