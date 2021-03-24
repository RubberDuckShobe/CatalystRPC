//
// Generated with FrostbiteGen by Chod
// File: SDK\AITypeEventGateEntityData.h
// Created: Wed Mar 10 19:08:53 2021
//

#ifndef FBGEN_AITypeEventGateEntityData_H
#define FBGEN_AITypeEventGateEntityData_H

#include "AISpecialization.h"
#include "Realm.h"
#include "EntityData.h"

class AITypeEventGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B8650;
	}
	AISpecialization* m_AIType; // 0x18
	Realm m_Realm; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_AITypeEventGateEntityData_H
