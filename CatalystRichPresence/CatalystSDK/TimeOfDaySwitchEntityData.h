//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDaySwitchEntityData.h
// Created: Wed Mar 10 19:00:17 2021
//

#ifndef FBGEN_TimeOfDaySwitchEntityData_H
#define FBGEN_TimeOfDaySwitchEntityData_H

#include "EntityData.h"

class TimeOfDaySwitchEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428968F0;
	}
	float m_Time; // 0x18
	float m_On; // 0x1c
	float m_Off; // 0x20
	float m_FadeInDuration; // 0x24
	float m_FadeOutDuration; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_TimeOfDaySwitchEntityData_H
