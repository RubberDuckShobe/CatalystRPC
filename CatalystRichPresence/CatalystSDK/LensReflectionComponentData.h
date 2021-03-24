//
// Generated with FrostbiteGen by Chod
// File: SDK\LensReflectionComponentData.h
// Created: Wed Mar 10 19:06:19 2021
//

#ifndef FBGEN_LensReflectionComponentData_H
#define FBGEN_LensReflectionComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class LensReflectionComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838180;
	}
	Vec3 m_InnerColor; // 0x80
	Vec3 m_OuterColor; // 0x90
	Realm m_Realm; // 0xa0
	float m_MixStart; // 0xa4
	float m_MixStop; // 0xa8
	float m_InputExponent; // 0xac
	float m_InputScale; // 0xb0
	float m_MaxOpacity; // 0xb4
	float m_Scale; // 0xb8
	float m_DistortionFactor; // 0xbc
	bool m_Enable; // 0xc0
	bool m_TransposeReflection; // 0xc1
	unsigned char _0xc2[0xe];
}; // size = 0xd0

#endif // FBGEN_LensReflectionComponentData_H
