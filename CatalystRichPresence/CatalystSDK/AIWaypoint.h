//
// Generated with FrostbiteGen by Chod
// File: SDK\AIWaypoint.h
// Created: Wed Mar 10 19:08:52 2021
//

#ifndef FBGEN_AIWaypoint_H
#define FBGEN_AIWaypoint_H

#include "Vec3.h"
#include "AIWaypointGUID.h"
struct AIWaypoint
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B0418;
	}
	Vec3 m_Position; // 0x0
	float m_DesiredSpeed; // 0x10
	float m_Radius; // 0x14
	AIWaypointGUID m_AIWaypointGUID; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_AIWaypoint_H
