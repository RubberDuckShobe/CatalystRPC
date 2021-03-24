//
// Generated with FrostbiteGen by Chod
// File: SDK\AISpecializationEntityData.h
// Created: Wed Mar 10 19:08:55 2021
//

#ifndef FBGEN_AISpecializationEntityData_H
#define FBGEN_AISpecializationEntityData_H

#include "AISpecialization.h"
#include "EntityData.h"

class AISpecializationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7810;
	}
	AISpecialization* m_AIType; // 0x18
	bool m_IsEnabled; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_AISpecializationEntityData_H
