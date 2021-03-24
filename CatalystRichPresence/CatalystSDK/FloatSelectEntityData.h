//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatSelectEntityData.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FloatSelectEntityData_H
#define FBGEN_FloatSelectEntityData_H

#include "Realm.h"
#include "EntityData.h"

class FloatSelectEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5B70;
	}
	Realm m_Realm; // 0x18
	float m_InPosOrZero; // 0x1c
	float m_InNeg; // 0x20
	float m_Select; // 0x24
}; // size = 0x28

#endif // FBGEN_FloatSelectEntityData_H
