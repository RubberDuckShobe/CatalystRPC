//
// Generated with FrostbiteGen by Chod
// File: SDK\CompareEntityData.h
// Created: Wed Mar 10 19:07:38 2021
//

#ifndef FBGEN_CompareEntityData_H
#define FBGEN_CompareEntityData_H

#include "Realm.h"
#include "CompareOp.h"
#include "EntityData.h"

class CompareEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5E10;
	}
	Realm m_Realm; // 0x18
	CompareOp m_Operator; // 0x1c
	float m_FloatIn0; // 0x20
	float m_FloatIn1; // 0x24
	int m_IntIn0; // 0x28
	int m_IntIn1; // 0x2c
}; // size = 0x30

#endif // FBGEN_CompareEntityData_H
