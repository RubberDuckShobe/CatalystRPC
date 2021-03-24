//
// Generated with FrostbiteGen by Chod
// File: SDK\MathOpEntityData.h
// Created: Wed Mar 10 19:05:58 2021
//

#ifndef FBGEN_MathOpEntityData_H
#define FBGEN_MathOpEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class MathOpEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5F90;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<MathOp> m_Operators; // 0x20
}; // size = 0x28

#endif // FBGEN_MathOpEntityData_H
