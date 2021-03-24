//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDayInterval.h
// Created: Wed Mar 10 19:00:18 2021
//

#ifndef FBGEN_TimeOfDayInterval_H
#define FBGEN_TimeOfDayInterval_H

#include "TimeOfDayIntervalBlendType.h"
#include "DataContainer.h"

class TimeOfDayInterval :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142896A10;
	}
	float m_ActivateTime; // 0x10
	float m_BlendTime; // 0x14
	TimeOfDayIntervalBlendType m_FadeOutMode; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_Name; // 0x20
}; // size = 0x28

#endif // FBGEN_TimeOfDayInterval_H
