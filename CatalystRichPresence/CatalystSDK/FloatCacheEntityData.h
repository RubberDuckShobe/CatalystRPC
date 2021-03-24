//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatCacheEntityData.h
// Created: Wed Mar 10 19:06:46 2021
//

#ifndef FBGEN_FloatCacheEntityData_H
#define FBGEN_FloatCacheEntityData_H

#include "Realm.h"
#include "EntityData.h"

class FloatCacheEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E52D0;
	}
	Realm m_Realm; // 0x18
	float m_InValue; // 0x1c
}; // size = 0x20

#endif // FBGEN_FloatCacheEntityData_H
