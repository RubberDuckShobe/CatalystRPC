//
// Generated with FrostbiteGen by Chod
// File: SDK\SubLevelStatusEntityData.h
// Created: Wed Mar 10 19:00:46 2021
//

#ifndef FBGEN_SubLevelStatusEntityData_H
#define FBGEN_SubLevelStatusEntityData_H

#include "Realm.h"
#include "EntityData.h"

class SubLevelStatusEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428207F0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_SubLevelName; // 0x20
}; // size = 0x28

#endif // FBGEN_SubLevelStatusEntityData_H
