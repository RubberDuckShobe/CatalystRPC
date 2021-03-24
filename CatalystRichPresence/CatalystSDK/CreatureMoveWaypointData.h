//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureMoveWaypointData.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureMoveWaypointData_H
#define FBGEN_CreatureMoveWaypointData_H

#include "CreatureSpeedLevel.h"
#include "WaypointData.h"

class CreatureMoveWaypointData :
	public WaypointData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BBAC0;
	}
	float m_WorldAngle; // 0x20
	float m_Radius; // 0x24
	CreatureSpeedLevel m_SpeedLevel; // 0x28
	bool m_OverrideCreatureAngle; // 0x2c
	bool m_MoveBackward; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_CreatureMoveWaypointData_H
