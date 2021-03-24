//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionalStringEntityData.h
// Created: Wed Mar 10 19:07:35 2021
//

#ifndef FBGEN_ConditionalStringEntityData_H
#define FBGEN_ConditionalStringEntityData_H

#include "ConditionalStateEntityData.h"

class ConditionalStringEntityData :
	public ConditionalStateEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899EC0;
	}
	const char* m_ValueIfTrue; // 0x20
	const char* m_ValueIfFalse; // 0x28
}; // size = 0x30

#endif // FBGEN_ConditionalStringEntityData_H
