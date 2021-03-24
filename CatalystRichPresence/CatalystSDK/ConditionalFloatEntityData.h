//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionalFloatEntityData.h
// Created: Wed Mar 10 19:07:35 2021
//

#ifndef FBGEN_ConditionalFloatEntityData_H
#define FBGEN_ConditionalFloatEntityData_H

#include "ConditionalStateEntityData.h"

class ConditionalFloatEntityData :
	public ConditionalStateEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289A0A0;
	}
	float m_ValueIfTrue; // 0x20
	float m_ValueIfFalse; // 0x24
}; // size = 0x28

#endif // FBGEN_ConditionalFloatEntityData_H
