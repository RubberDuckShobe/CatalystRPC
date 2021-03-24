//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionalVec2EntityData.h
// Created: Wed Mar 10 19:07:35 2021
//

#ifndef FBGEN_ConditionalVec2EntityData_H
#define FBGEN_ConditionalVec2EntityData_H

#include "Vec2.h"
#include "ConditionalStateEntityData.h"

class ConditionalVec2EntityData :
	public ConditionalStateEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289A040;
	}
	Vec2 m_ValueIfTrue; // 0x20
	Vec2 m_ValueIfFalse; // 0x28
}; // size = 0x30

#endif // FBGEN_ConditionalVec2EntityData_H
