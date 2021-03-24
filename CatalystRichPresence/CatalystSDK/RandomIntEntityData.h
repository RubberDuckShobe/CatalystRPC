//
// Generated with FrostbiteGen by Chod
// File: SDK\RandomIntEntityData.h
// Created: Wed Mar 10 19:02:44 2021
//

#ifndef FBGEN_RandomIntEntityData_H
#define FBGEN_RandomIntEntityData_H

#include "Realm.h"
#include "EntityData.h"

class RandomIntEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7070;
	}
	Realm m_Realm; // 0x18
	int m_Start; // 0x1c
	int m_Count; // 0x20
	bool m_TrueRandom; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_RandomIntEntityData_H
