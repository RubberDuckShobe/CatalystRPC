//
// Generated with FrostbiteGen by Chod
// File: SDK\AIWaypointExtraPathLink.h
// Created: Wed Mar 10 19:08:52 2021
//

#ifndef FBGEN_AIWaypointExtraPathLink_H
#define FBGEN_AIWaypointExtraPathLink_H

#include "Vec3.h"
struct AIWaypointExtraPathLink
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C238;
	}
	Vec3 m_ConnectLineStart; // 0x0
	Vec3 m_ConnectLineEnd; // 0x10
	float m_HeightOffset; // 0x20
	float m_Depth; // 0x24
	int m_LinkType; // 0x28
	bool m_IsStartPoint; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_AIWaypointExtraPathLink_H
