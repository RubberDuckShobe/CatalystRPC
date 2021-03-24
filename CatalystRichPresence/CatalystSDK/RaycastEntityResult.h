//
// Generated with FrostbiteGen by Chod
// File: SDK\RaycastEntityResult.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_RaycastEntityResult_H
#define FBGEN_RaycastEntityResult_H

#include "Vec3.h"
struct RaycastEntityResult
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877900;
	}
	Vec3 m_HitPos; // 0x0
	Vec3 m_Normal; // 0x10
	unsigned int m_Material; // 0x20
	float m_Lambda; // 0x24
	float m_Distance; // 0x28
	bool m_HasHit; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_RaycastEntityResult_H
