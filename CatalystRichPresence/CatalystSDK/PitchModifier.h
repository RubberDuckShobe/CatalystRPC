//
// Generated with FrostbiteGen by Chod
// File: SDK\PitchModifier.h
// Created: Wed Mar 10 19:03:07 2021
//

#ifndef FBGEN_PitchModifier_H
#define FBGEN_PitchModifier_H

#include "Vec3.h"
struct PitchModifier
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815D80;
	}
	Vec3 m_Offset; // 0x0
	float m_PitchVal; // 0x10
	float m_PitchAngle; // 0x14
	unsigned char _0x18[0x8];
}; // size = 0x20

#endif // FBGEN_PitchModifier_H
