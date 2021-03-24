//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureFollowWaypointsEntityData.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureFollowWaypointsEntityData_H
#define FBGEN_CreatureFollowWaypointsEntityData_H

#include "RouteType.h"
#include "NavigationInterfaceData.h"

class CreatureFollowWaypointsEntityData :
	public NavigationInterfaceData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BBA00;
	}
	RouteType m_TypeOfRoute; // 0x18
	bool m_IsReversable; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_CreatureFollowWaypointsEntityData_H
