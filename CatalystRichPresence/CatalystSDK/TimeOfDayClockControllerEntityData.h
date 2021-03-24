//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayClockControllerEntityData.h
// Created: Wed Mar 10 19:00:18 2021
//

#ifndef FBGEN_TimeOfDayClockControllerEntityData_H
#define FBGEN_TimeOfDayClockControllerEntityData_H

#include "EntityData.h"

class TimeOfDayClockControllerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142896590;
	}
	float m_TimeToSet; // 0x18
	float m_TimeScaleMultiplier; // 0x1c
	const char* m_ControllerId; // 0x20
}; // size = 0x28

#endif // FBGEN_TimeOfDayClockControllerEntityData_H
