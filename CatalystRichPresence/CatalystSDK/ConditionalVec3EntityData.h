//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionalVec3EntityData.h
// Created: Wed Mar 10 19:07:34 2021
//

#ifndef FBGEN_ConditionalVec3EntityData_H
#define FBGEN_ConditionalVec3EntityData_H

#include "Vec3.h"
#include "ConditionalStateEntityData.h"

class ConditionalVec3EntityData :
	public ConditionalStateEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899FE0;
	}
	Vec3 m_ValueIfTrue; // 0x20
	Vec3 m_ValueIfFalse; // 0x30
}; // size = 0x40

#endif // FBGEN_ConditionalVec3EntityData_H
