//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayTimeOffsetEntityData.h
// Created: Wed Mar 10 19:00:16 2021
//

#ifndef FBGEN_TimeOfDayTimeOffsetEntityData_H
#define FBGEN_TimeOfDayTimeOffsetEntityData_H

#include "Realm.h"
#include "EntityData.h"

class TimeOfDayTimeOffsetEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142896650;
	}
	Realm m_Realm; // 0x18
	float m_Time; // 0x1c
	float m_Offset; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_TimeOfDayTimeOffsetEntityData_H
