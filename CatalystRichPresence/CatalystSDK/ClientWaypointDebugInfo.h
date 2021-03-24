//
// Generated with FrostbiteGen by Chod
// File: SDK\ClientWaypointDebugInfo.h
// Created: Wed Mar 10 19:07:43 2021
//

#ifndef FBGEN_ClientWaypointDebugInfo_H
#define FBGEN_ClientWaypointDebugInfo_H

#include "Vec3.h"
struct ClientWaypointDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AEE8;
	}
	Vec3 m_Position; // 0x0
	int m_DestinationGUID; // 0x10
	int m_MappedGUID; // 0x14
	int m_ClientGUID; // 0x18
	bool m_Truncated; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_ClientWaypointDebugInfo_H
