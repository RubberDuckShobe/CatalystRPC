//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphShapeWeight.h
// Created: Wed Mar 10 19:05:47 2021
//

#ifndef FBGEN_MorphShapeWeight_H
#define FBGEN_MorphShapeWeight_H

#include "MorphShape.h"
struct MorphShapeWeight
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428257F0;
	}
	float m_Weight; // 0x0
	unsigned char _0x4[0x4];
	MorphShape* m_Shape; // 0x8
}; // size = 0x10

#endif // FBGEN_MorphShapeWeight_H
