//
// Generated with FrostbiteGen by Chod
// File: SDK\SphereOverlapInstanceDebugInfo.h
// Created: Wed Mar 10 19:01:01 2021
//

#ifndef FBGEN_SphereOverlapInstanceDebugInfo_H
#define FBGEN_SphereOverlapInstanceDebugInfo_H

#include "Vec3.h"
struct SphereOverlapInstanceDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B76B8;
	}
	Vec3 m_Pos; // 0x0
	int m_HitCount; // 0x10
	float m_Radius; // 0x14
	unsigned char _0x18[0x8];
}; // size = 0x20

#endif // FBGEN_SphereOverlapInstanceDebugInfo_H
