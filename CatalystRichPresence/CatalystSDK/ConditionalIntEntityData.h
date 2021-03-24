//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionalIntEntityData.h
// Created: Wed Mar 10 19:07:35 2021
//

#ifndef FBGEN_ConditionalIntEntityData_H
#define FBGEN_ConditionalIntEntityData_H

#include "ConditionalStateEntityData.h"

class ConditionalIntEntityData :
	public ConditionalStateEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289A100;
	}
	int m_ValueIfTrue; // 0x20
	int m_ValueIfFalse; // 0x24
}; // size = 0x28

#endif // FBGEN_ConditionalIntEntityData_H
