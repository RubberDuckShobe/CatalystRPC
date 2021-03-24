//
// Generated with FrostbiteGen by Chod
// File: SDK\MathIntOpEntityData.h
// Created: Wed Mar 10 19:05:59 2021
//

#ifndef FBGEN_MathIntOpEntityData_H
#define FBGEN_MathIntOpEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class MathIntOpEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899A40;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<IntMathOp> m_Operators; // 0x20
}; // size = 0x28

#endif // FBGEN_MathIntOpEntityData_H
