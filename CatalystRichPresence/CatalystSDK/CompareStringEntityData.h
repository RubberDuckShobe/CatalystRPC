//
// Generated with FrostbiteGen by Chod
// File: SDK\CompareStringEntityData.h
// Created: Wed Mar 10 19:07:37 2021
//

#ifndef FBGEN_CompareStringEntityData_H
#define FBGEN_CompareStringEntityData_H

#include "Realm.h"
#include "EntityData.h"

class CompareStringEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E8210;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_A; // 0x20
	const char* m_B; // 0x28
	bool m_TriggerOnPropertyChange; // 0x30
	bool m_TriggerOnStart; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_CompareStringEntityData_H
