//
// Generated with FrostbiteGen by Chod
// File: SDK\IntegratorOrDifferentiatorEntityData.h
// Created: Wed Mar 10 19:06:26 2021
//

#ifndef FBGEN_IntegratorOrDifferentiatorEntityData_H
#define FBGEN_IntegratorOrDifferentiatorEntityData_H

#include "Realm.h"
#include "EntityData.h"

class IntegratorOrDifferentiatorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5D50;
	}
	Realm m_Realm; // 0x18
	float m_StartValue; // 0x1c
	float m_Input; // 0x20
	float m_MaxValue; // 0x24
	float m_MinValue; // 0x28
	bool m_Bounded; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_IntegratorOrDifferentiatorEntityData_H
