//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayBlendEntityData.h
// Created: Wed Mar 10 19:00:18 2021
//

#ifndef FBGEN_TimeOfDayBlendEntityData_H
#define FBGEN_TimeOfDayBlendEntityData_H

#include "Array.h"
#include "EntityData.h"

class TimeOfDayBlendEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428967D0;
	}
	float m_Time; // 0x18
	unsigned char _0x1c[0x4];
	Array<TimeOfDayInterval*> m_TimeOfDayIntervals; // 0x20
}; // size = 0x28

#endif // FBGEN_TimeOfDayBlendEntityData_H
