//
// Generated with FrostbiteGen by Chod
// File: SDK\OBBData.h
// Created: Wed Mar 10 19:05:31 2021
//

#ifndef FBGEN_OBBData_H
#define FBGEN_OBBData_H

#include "LinearTransform.h"
#include "Vec3.h"
#include "BaseShapeData.h"

class OBBData :
	public BaseShapeData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5870;
	}
	unsigned char _0x18[0x8];
	LinearTransform m_Transform; // 0x20
	Vec3 m_HalfExtents; // 0x60
}; // size = 0x70

#endif // FBGEN_OBBData_H
