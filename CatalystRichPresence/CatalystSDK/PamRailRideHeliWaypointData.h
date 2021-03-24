//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRailRideHeliWaypointData.h
// Created: Wed Mar 10 19:04:07 2021
//

#ifndef FBGEN_PamRailRideHeliWaypointData_H
#define FBGEN_PamRailRideHeliWaypointData_H

#include "WaypointData.h"

class PamRailRideHeliWaypointData :
	public WaypointData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CF00;
	}
	float m_WindNoise; // 0x20
	float m_Speed; // 0x24
	float m_WorldAngle; // 0x28
	float m_PointToDistance; // 0x2c
	float m_Curvature; // 0x30
	float m_Constraint; // 0x34
	float m_ForcePitch; // 0x38
	float m_BankingScale; // 0x3c
	float m_MaxDistanceSqrToLastWaypointToFinish; // 0x40
	float m_AltitudeOffset; // 0x44
	float m_Delay; // 0x48
	bool m_IsRotatableY; // 0x4c
	bool m_UseVelocityDirection; // 0x4d
	bool m_WingMode; // 0x4e
	bool m_Teleport; // 0x4f
	bool m_LookAtPlayer; // 0x50
	unsigned char _0x51[0x7];
}; // size = 0x58

#endif // FBGEN_PamRailRideHeliWaypointData_H
