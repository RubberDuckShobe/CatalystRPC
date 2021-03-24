//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayQueryEntityData.h
// Created: Wed Mar 10 19:00:17 2021
//

#ifndef FBGEN_TimeOfDayQueryEntityData_H
#define FBGEN_TimeOfDayQueryEntityData_H

#include "EntityData.h"

class TimeOfDayQueryEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142896950;
	}
	float m_MinDelta; // 0x18
	bool m_EnabledOnLoad; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_TimeOfDayQueryEntityData_H
