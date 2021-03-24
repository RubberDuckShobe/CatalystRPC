//
// Generated with FrostbiteGen by Chod
// File: SDK\RaycastInstanceDebugInfo.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_RaycastInstanceDebugInfo_H
#define FBGEN_RaycastInstanceDebugInfo_H

#include "Vec3.h"
struct RaycastInstanceDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B76F8;
	}
	Vec3 m_Start; // 0x0
	Vec3 m_End; // 0x10
	Vec3 m_Hit; // 0x20
	bool m_HasHit; // 0x30
	unsigned char _0x31[0xf];
}; // size = 0x40

#endif // FBGEN_RaycastInstanceDebugInfo_H
