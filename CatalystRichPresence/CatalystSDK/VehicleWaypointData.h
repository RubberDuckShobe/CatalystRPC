//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleWaypointData.h
// Created: Wed Mar 10 18:59:17 2021
//

#ifndef FBGEN_VehicleWaypointData_H
#define FBGEN_VehicleWaypointData_H

#include "WaypointData.h"

class VehicleWaypointData :
	public WaypointData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821AE0;
	}
	float m_Speed; // 0x20
	float m_SpeedOverrideMovingTowards; // 0x24
	float m_SpeedLimitOnReached; // 0x28
	float m_SpeedLimitMovingTowards; // 0x2c
	float m_Angleoffset; // 0x30
	float m_WaitHere; // 0x34
	float m_StoppingDeceleration; // 0x38
	float m_MinSlowdownSpeed; // 0x3c
	float m_StopHereRadius; // 0x40
	bool m_StopHere; // 0x44
	unsigned char _0x45[0x3];
}; // size = 0x48

#endif // FBGEN_VehicleWaypointData_H
