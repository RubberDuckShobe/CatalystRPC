//
// Generated with FrostbiteGen by Chod
// File: SDK\VecBuilderEntityData.h
// Created: Wed Mar 10 18:59:26 2021
//

#ifndef FBGEN_VecBuilderEntityData_H
#define FBGEN_VecBuilderEntityData_H

#include "Realm.h"
#include "EntityData.h"

class VecBuilderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6410;
	}
	Realm m_Realm; // 0x18
	float m_X; // 0x1c
	float m_Y; // 0x20
	float m_Z; // 0x24
	float m_W; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_VecBuilderEntityData_H
