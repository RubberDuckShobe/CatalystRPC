//
// Generated with FrostbiteGen by Chod
// File: SDK\GroundHeightData.h
// Created: Wed Mar 10 19:06:37 2021
//

#ifndef FBGEN_GroundHeightData_H
#define FBGEN_GroundHeightData_H

#include "Vec2.h"
#include "Array.h"
struct GroundHeightData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841AF0;
	}
	float m_WorldSize; // 0x0
	Vec2 m_HeightSpan; // 0x4
	unsigned char _0xc[0x4];
	Array<unsigned short> m_Data; // 0x10
}; // size = 0x18

#endif // FBGEN_GroundHeightData_H
