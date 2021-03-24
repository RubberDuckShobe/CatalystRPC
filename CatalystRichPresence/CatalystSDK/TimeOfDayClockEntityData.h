//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayClockEntityData.h
// Created: Wed Mar 10 19:00:18 2021
//

#ifndef FBGEN_TimeOfDayClockEntityData_H
#define FBGEN_TimeOfDayClockEntityData_H

#include "AudioCurve.h"
#include "EntityData.h"

class TimeOfDayClockEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428969B0;
	}
	float m_FullDayDuration; // 0x18
	float m_DefaultTime; // 0x1c
	AudioCurve m_TimeProgressionRate; // 0x20
	bool m_PausedOnLoad; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_TimeOfDayClockEntityData_H
