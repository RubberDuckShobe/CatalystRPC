//
// Generated with FrostbiteGen by Chod
// File: SDK\BaseDebugInfo.h
// Created: Wed Mar 10 19:08:32 2021
//

#ifndef FBGEN_BaseDebugInfo_H
#define FBGEN_BaseDebugInfo_H

#include "Vec3.h"
struct BaseDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7738;
	}
	Vec3 m_Position; // 0x0
	const char* m_AIName; // 0x10
	int m_AIId; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_BaseDebugInfo_H
