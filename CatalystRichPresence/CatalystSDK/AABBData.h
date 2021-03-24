//
// Generated with FrostbiteGen by Chod
// File: SDK\AABBData.h
// Created: Wed Mar 10 19:09:02 2021
//

#ifndef FBGEN_AABBData_H
#define FBGEN_AABBData_H

#include "Vec3.h"
#include "BaseShapeData.h"

class AABBData :
	public BaseShapeData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E58D0;
	}
	unsigned char _0x18[0x8];
	Vec3 m_Position; // 0x20
	Vec3 m_HalfExtents; // 0x30
}; // size = 0x40

#endif // FBGEN_AABBData_H
