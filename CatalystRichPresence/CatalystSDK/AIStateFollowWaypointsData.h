//
// Generated with FrostbiteGen by Chod
// File: SDK\AIStateFollowWaypointsData.h
// Created: Wed Mar 10 19:08:54 2021
//

#ifndef FBGEN_AIStateFollowWaypointsData_H
#define FBGEN_AIStateFollowWaypointsData_H

#include "RouteType.h"
#include "Array.h"
#include "AIStateData.h"

class AIStateFollowWaypointsData :
	public AIStateData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B80B0;
	}
	RouteType m_RouteType; // 0x28
	unsigned char _0x2c[0x4];
	Array<WaypointEventTrigger> m_WaypointTriggers; // 0x30
	bool m_UsePathfinding; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_AIStateFollowWaypointsData_H
