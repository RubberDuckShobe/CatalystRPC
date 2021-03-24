//
// Generated with FrostbiteGen by Chod
// File: SDK\WaypointDebugInfo.h
// Created: Wed Mar 10 18:58:52 2021
//

#ifndef FBGEN_WaypointDebugInfo_H
#define FBGEN_WaypointDebugInfo_H

#include "Vec3.h"
struct WaypointDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7678;
	}
	Vec3 m_Pos; // 0x0
	float m_Radius; // 0x10
	int m_AIWaypointGUID; // 0x14
	bool m_Valid; // 0x18
	bool m_Upcoming; // 0x19
	bool m_Active; // 0x1a
	unsigned char _0x1b[0x5];
}; // size = 0x20

#endif // FBGEN_WaypointDebugInfo_H
