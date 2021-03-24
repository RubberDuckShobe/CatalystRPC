//
// Generated with FrostbiteGen by Chod
// File: SDK\CombatCoordDebugInfo.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_CombatCoordDebugInfo_H
#define FBGEN_CombatCoordDebugInfo_H

#include "Vec3.h"
#include "Array.h"
struct CombatCoordDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AE88;
	}
	Vec3 m_AIPos; // 0x0
	Vec3 m_TargetPos; // 0x10
	Vec3 m_CircleInterceptPoint; // 0x20
	Vec3 m_CircleCenter; // 0x30
	Vec3 m_LinearIntercept; // 0x40
	Array<Vec3> m_CircleInterceptCandidatesPoints; // 0x50
	float m_Radius; // 0x58
	float m_Height; // 0x5c
	bool m_CircularSolution; // 0x60
	bool m_LinearSolution; // 0x61
	unsigned char _0x62[0xe];
}; // size = 0x70

#endif // FBGEN_CombatCoordDebugInfo_H
