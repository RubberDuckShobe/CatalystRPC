//
// Generated with FrostbiteGen by Chod
// File: SDK\SubLevelPreloadEntityData.h
// Created: Wed Mar 10 19:00:46 2021
//

#ifndef FBGEN_SubLevelPreloadEntityData_H
#define FBGEN_SubLevelPreloadEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class SubLevelPreloadEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820850;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<const char*> m_SubLevelsToPreload; // 0x20
}; // size = 0x28

#endif // FBGEN_SubLevelPreloadEntityData_H
