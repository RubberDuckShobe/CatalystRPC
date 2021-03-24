//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatInterpolatorEntityData.h
// Created: Wed Mar 10 19:06:45 2021
//

#ifndef FBGEN_FloatInterpolatorEntityData_H
#define FBGEN_FloatInterpolatorEntityData_H

#include "PropertyInterpolatorEntityData.h"

class FloatInterpolatorEntityData :
	public PropertyInterpolatorEntityData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899980;
	}
	float m_Velocity; // 0x28
	float m_In; // 0x2c
	float m_DefaultValue; // 0x30
	bool m_UseVelocity; // 0x34
	bool m_UseRealTimeClock; // 0x35
	unsigned char _0x36[0x2];
}; // size = 0x38

#endif // FBGEN_FloatInterpolatorEntityData_H
