//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayTimeNormalizerEntityData.h
// Created: Wed Mar 10 19:00:16 2021
//

#ifndef FBGEN_TimeOfDayTimeNormalizerEntityData_H
#define FBGEN_TimeOfDayTimeNormalizerEntityData_H

#include "Realm.h"
#include "EntityData.h"

class TimeOfDayTimeNormalizerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428965F0;
	}
	Realm m_Realm; // 0x18
	float m_Time; // 0x1c
}; // size = 0x20

#endif // FBGEN_TimeOfDayTimeNormalizerEntityData_H
