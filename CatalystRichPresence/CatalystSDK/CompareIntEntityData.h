//
// Generated with FrostbiteGen by Chod
// File: SDK\CompareIntEntityData.h
// Created: Wed Mar 10 19:07:38 2021
//

#ifndef FBGEN_CompareIntEntityData_H
#define FBGEN_CompareIntEntityData_H

#include "Realm.h"
#include "EntityData.h"

class CompareIntEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E82D0;
	}
	Realm m_Realm; // 0x18
	int m_A; // 0x1c
	int m_B; // 0x20
	bool m_TriggerOnPropertyChange; // 0x24
	bool m_TriggerOnStart; // 0x25
	unsigned char _0x26[0x2];
}; // size = 0x28

#endif // FBGEN_CompareIntEntityData_H
