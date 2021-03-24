//
// Generated with FrostbiteGen by Chod
// File: SDK\BoxOverlapInstanceDebugInfo.h
// Created: Wed Mar 10 19:08:24 2021
//

#ifndef FBGEN_BoxOverlapInstanceDebugInfo_H
#define FBGEN_BoxOverlapInstanceDebugInfo_H

#include "Quat.h"
#include "Vec3.h"
struct BoxOverlapInstanceDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B76D8;
	}
	Vec3 m_Pos; // 0x0
	Quat m_Rot; // 0x10
	Vec3 m_Extent; // 0x20
	int m_HitCount; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_BoxOverlapInstanceDebugInfo_H
