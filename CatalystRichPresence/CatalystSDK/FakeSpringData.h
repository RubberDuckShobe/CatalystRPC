//
// Generated with FrostbiteGen by Chod
// File: SDK\FakeSpringData.h
// Created: Wed Mar 10 19:06:49 2021
//

#ifndef FBGEN_FakeSpringData_H
#define FBGEN_FakeSpringData_H

#include "Vec3.h"
#include "FakePhysicsData.h"

class FakeSpringData :
	public FakePhysicsData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282D220;
	}
	float m_Length; // 0x38
	float m_Acceleration; // 0x3c
	Vec3 m_Direction; // 0x40
	float m_ProgressiveExponent; // 0x50
	float m_Damping; // 0x54
	unsigned char _0x58[0x8];
}; // size = 0x60

#endif // FBGEN_FakeSpringData_H
