//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUIVectorPathCorner.h
// Created: Wed Mar 10 19:07:11 2021
//

#ifndef FBGEN_DiceUIVectorPathCorner_H
#define FBGEN_DiceUIVectorPathCorner_H

#include "Vec3.h"
#include "DiceUIVectorPathCornerType.h"
#include "Vec2.h"
struct DiceUIVectorPathCorner
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF4D0;
	}
	Vec3 m_Color; // 0x0
	DiceUIVectorPathCornerType m_CornerType; // 0x10
	float m_Radius; // 0x14
	Vec2 m_Position; // 0x18
	float m_Alpha; // 0x20
	unsigned char _0x24[0xc];
}; // size = 0x30

#endif // FBGEN_DiceUIVectorPathCorner_H
