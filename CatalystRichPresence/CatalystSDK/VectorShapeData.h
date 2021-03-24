//
// Generated with FrostbiteGen by Chod
// File: SDK\VectorShapeData.h
// Created: Wed Mar 10 18:59:24 2021
//

#ifndef FBGEN_VectorShapeData_H
#define FBGEN_VectorShapeData_H

#include "Array.h"
#include "BaseShapeData.h"

class VectorShapeData :
	public BaseShapeData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5810;
	}
	Array<Vec3> m_Points; // 0x18
	float m_Tension; // 0x20
	bool m_IsClosed; // 0x24
	bool m_AllowRoll; // 0x25
	unsigned char _0x26[0x2];
}; // size = 0x28

#endif // FBGEN_VectorShapeData_H
