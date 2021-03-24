//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDaySunPositionEntityData.h
// Created: Wed Mar 10 19:00:17 2021
//

#ifndef FBGEN_TimeOfDaySunPositionEntityData_H
#define FBGEN_TimeOfDaySunPositionEntityData_H

#include "Vec3.h"
#include "EntityData.h"

class TimeOfDaySunPositionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142896770;
	}
	float m_Time; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_SunPlaneNormal; // 0x20
	float m_AngularThreshold; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_TimeOfDaySunPositionEntityData_H
