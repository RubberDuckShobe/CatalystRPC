//
// Generated with FrostbiteGen by Chod
// File: SDK\LensScopeComponentData.h
// Created: Wed Mar 10 19:06:19 2021
//

#ifndef FBGEN_LensScopeComponentData_H
#define FBGEN_LensScopeComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "Vec2.h"
#include "VisualEnvironmentComponentData.h"

class LensScopeComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428382A0;
	}
	Vec3 m_ChromaticAberrationColor1; // 0x80
	Vec3 m_ChromaticAberrationColor2; // 0x90
	Realm m_Realm; // 0xa0
	float m_BlurScale; // 0xa4
	Vec2 m_BlurCenter; // 0xa8
	Vec2 m_ChromaticAberrationStrengths; // 0xb0
	Vec2 m_ChromaticAberrationDisplacement1; // 0xb8
	Vec2 m_ChromaticAberrationDisplacement2; // 0xc0
	Vec2 m_RadialBlendDistanceCoefficients; // 0xc8
	bool m_Enable; // 0xd0
	unsigned char _0xd1[0xf];
}; // size = 0xe0

#endif // FBGEN_LensScopeComponentData_H
