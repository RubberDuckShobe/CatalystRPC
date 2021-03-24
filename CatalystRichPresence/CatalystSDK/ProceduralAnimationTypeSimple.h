//
// Generated with FrostbiteGen by Chod
// File: SDK\ProceduralAnimationTypeSimple.h
// Created: Wed Mar 10 19:02:53 2021
//

#ifndef FBGEN_ProceduralAnimationTypeSimple_H
#define FBGEN_ProceduralAnimationTypeSimple_H

#include "DataContainer.h"

class ProceduralAnimationTypeSimple :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428345B0;
	}
	float m_BendMultiplier; // 0x10
	float m_WiggleSpeedMultiplier; // 0x14
	float m_WindInfluenceMultiplier; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_ProceduralAnimationTypeSimple_H
