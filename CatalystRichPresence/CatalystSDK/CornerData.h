//
// Generated with FrostbiteGen by Chod
// File: SDK\CornerData.h
// Created: Wed Mar 10 19:07:30 2021
//

#ifndef FBGEN_CornerData_H
#define FBGEN_CornerData_H

#include "Vec3.h"
#include "CornerType.h"
struct CornerData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142828DB0;
	}
	Vec3 m_Pos; // 0x0
	CornerType m_CornerType; // 0x10
	bool m_Goal; // 0x14
	unsigned char _0x15[0xb];
}; // size = 0x20

#endif // FBGEN_CornerData_H
