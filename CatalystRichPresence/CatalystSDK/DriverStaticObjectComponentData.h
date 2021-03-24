//
// Generated with FrostbiteGen by Chod
// File: SDK\DriverStaticObjectComponentData.h
// Created: Wed Mar 10 19:07:08 2021
//

#ifndef FBGEN_DriverStaticObjectComponentData_H
#define FBGEN_DriverStaticObjectComponentData_H

#include "DriverComponentData.h"

class DriverStaticObjectComponentData :
	public DriverComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428112E0;
	}
	float m_Acceleration; // 0x80
	float m_Deceleration; // 0x84
	float m_TurningRadius; // 0x88
	bool m_TurnWhileStill; // 0x8c
	bool m_AlignWithGroundNormal; // 0x8d
	unsigned char _0x8e[0x2];
}; // size = 0x90

#endif // FBGEN_DriverStaticObjectComponentData_H
