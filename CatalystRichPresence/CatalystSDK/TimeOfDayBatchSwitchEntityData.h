//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayBatchSwitchEntityData.h
// Created: Wed Mar 10 19:00:19 2021
//

#ifndef FBGEN_TimeOfDayBatchSwitchEntityData_H
#define FBGEN_TimeOfDayBatchSwitchEntityData_H

#include "EntityData.h"

class TimeOfDayBatchSwitchEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142896890;
	}
	float m_Time; // 0x18
	float m_On; // 0x1c
	float m_Off; // 0x20
	unsigned int m_Channel; // 0x24
}; // size = 0x28

#endif // FBGEN_TimeOfDayBatchSwitchEntityData_H
