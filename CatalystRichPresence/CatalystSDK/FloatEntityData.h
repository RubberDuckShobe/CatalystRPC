//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatEntityData.h
// Created: Wed Mar 10 19:06:45 2021
//

#ifndef FBGEN_FloatEntityData_H
#define FBGEN_FloatEntityData_H

#include "Realm.h"
#include "EntityData.h"

class FloatEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5450;
	}
	Realm m_Realm; // 0x18
	float m_DefaultValue; // 0x1c
	float m_IncDecValue; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_FloatEntityData_H
