//
// Generated with FrostbiteGen by Chod
// File: SDK\RandomEventEntityData.h
// Created: Wed Mar 10 19:02:44 2021
//

#ifndef FBGEN_RandomEventEntityData_H
#define FBGEN_RandomEventEntityData_H

#include "Realm.h"
#include "EntityData.h"

class RandomEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7190;
	}
	Realm m_Realm; // 0x18
	int m_Probability; // 0x1c
	bool m_RandomizeFirstOnly; // 0x20
	bool m_AutoStart; // 0x21
	unsigned char _0x22[0x6];
}; // size = 0x28

#endif // FBGEN_RandomEventEntityData_H
