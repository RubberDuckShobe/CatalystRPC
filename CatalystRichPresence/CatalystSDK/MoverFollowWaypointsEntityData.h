//
// Generated with FrostbiteGen by Chod
// File: SDK\MoverFollowWaypointsEntityData.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MoverFollowWaypointsEntityData_H
#define FBGEN_MoverFollowWaypointsEntityData_H

#include "RouteType.h"
#include "EntityData.h"

class MoverFollowWaypointsEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829130;
	}
	RouteType m_TypeOfRoute; // 0x18
	bool m_StopAtWaypoints; // 0x1c
	bool m_StartAtGeometricallyClosestWaypoint; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_MoverFollowWaypointsEntityData_H
