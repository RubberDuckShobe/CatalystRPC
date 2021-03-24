//
// Generated with FrostbiteGen by Chod
// File: SDK\NavigationDebugInfo.h
// Created: Wed Mar 10 19:05:39 2021
//

#ifndef FBGEN_NavigationDebugInfo_H
#define FBGEN_NavigationDebugInfo_H

#include "Vec3.h"
#include "Array.h"
struct NavigationDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7658;
	}
	Vec3 m_PlanningPos; // 0x0
	Array<WaypointDebugInfo> m_Waypoints; // 0x10
	unsigned char _0x18[0x8];
}; // size = 0x20

#endif // FBGEN_NavigationDebugInfo_H
