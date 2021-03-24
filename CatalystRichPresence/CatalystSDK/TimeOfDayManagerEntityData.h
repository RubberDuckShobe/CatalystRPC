//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayManagerEntityData.h
// Created: Wed Mar 10 19:00:17 2021
//

#ifndef FBGEN_TimeOfDayManagerEntityData_H
#define FBGEN_TimeOfDayManagerEntityData_H

#include "EntityData.h"

class TimeOfDayManagerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C720;
	}
	int m_SolveIterations; // 0x18
	float m_UpdateInterval; // 0x1c
}; // size = 0x20

#endif // FBGEN_TimeOfDayManagerEntityData_H
