//
// Generated with FrostbiteGen by Chod
// File: SDK\MissileUnguidedData.h
// Created: Wed Mar 10 19:05:52 2021
//

#ifndef FBGEN_MissileUnguidedData_H
#define FBGEN_MissileUnguidedData_H

#include "Vec2.h"
struct MissileUnguidedData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D4A0;
	}
	Vec2 m_StaticPosition; // 0x0
	Vec2 m_TargetPositionOffset; // 0x8
	bool m_UseStaticPosition; // 0x10
	bool m_UseTargetPosition; // 0x11
	unsigned char _0x12[0x2];
}; // size = 0x14

#endif // FBGEN_MissileUnguidedData_H
