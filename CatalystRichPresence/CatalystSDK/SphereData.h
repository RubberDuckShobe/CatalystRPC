//
// Generated with FrostbiteGen by Chod
// File: SDK\SphereData.h
// Created: Wed Mar 10 19:01:02 2021
//

#ifndef FBGEN_SphereData_H
#define FBGEN_SphereData_H

#include "Vec3.h"
#include "BaseShapeData.h"

class SphereData :
	public BaseShapeData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5930;
	}
	float m_Radius; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Position; // 0x20
}; // size = 0x30

#endif // FBGEN_SphereData_H
