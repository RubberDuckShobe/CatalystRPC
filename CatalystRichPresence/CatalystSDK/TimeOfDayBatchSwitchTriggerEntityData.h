//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayBatchSwitchTriggerEntityData.h
// Created: Wed Mar 10 19:00:19 2021
//

#ifndef FBGEN_TimeOfDayBatchSwitchTriggerEntityData_H
#define FBGEN_TimeOfDayBatchSwitchTriggerEntityData_H

#include "EntityData.h"

class TimeOfDayBatchSwitchTriggerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142896830;
	}
	unsigned int m_Channel; // 0x18
	bool m_EnabledOnLoad; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_TimeOfDayBatchSwitchTriggerEntityData_H
