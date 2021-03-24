//
// Generated with FrostbiteGen by Chod
// File: SDK\RandomFloatEntityData.h
// Created: Wed Mar 10 19:02:44 2021
//

#ifndef FBGEN_RandomFloatEntityData_H
#define FBGEN_RandomFloatEntityData_H

#include "Realm.h"
#include "EntityData.h"

class RandomFloatEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E70D0;
	}
	Realm m_Realm; // 0x18
	float m_Min; // 0x1c
	float m_Max; // 0x20
	bool m_TrueRandom; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_RandomFloatEntityData_H
