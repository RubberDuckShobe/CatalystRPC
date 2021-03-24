//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionalVec4EntityData.h
// Created: Wed Mar 10 19:07:34 2021
//

#ifndef FBGEN_ConditionalVec4EntityData_H
#define FBGEN_ConditionalVec4EntityData_H

#include "Vec4.h"
#include "ConditionalStateEntityData.h"

class ConditionalVec4EntityData :
	public ConditionalStateEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899F80;
	}
	Vec4 m_ValueIfTrue; // 0x20
	Vec4 m_ValueIfFalse; // 0x30
}; // size = 0x40

#endif // FBGEN_ConditionalVec4EntityData_H
