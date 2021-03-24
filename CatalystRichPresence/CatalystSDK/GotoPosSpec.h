//
// Generated with FrostbiteGen by Chod
// File: SDK\GotoPosSpec.h
// Created: Wed Mar 10 19:06:37 2021
//

#ifndef FBGEN_GotoPosSpec_H
#define FBGEN_GotoPosSpec_H

#include "Vec3.h"
struct GotoPosSpec
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142828D90;
	}
	Vec3 m_orientAtGoalDir; // 0x0
	float m_allowedToStopDist; // 0x10
	float m_desiredStopDist; // 0x14
	bool m_stopAtGoal; // 0x18
	bool m_pushThroughCrowdAtGoal; // 0x19
	bool m_orientAtGoalEnable; // 0x1a
	bool m_tryFlank; // 0x1b
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_GotoPosSpec_H
