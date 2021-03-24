//
// Generated with FrostbiteGen by Chod
// File: SDK\LaserPainterData.h
// Created: Wed Mar 10 19:06:20 2021
//

#ifndef FBGEN_LaserPainterData_H
#define FBGEN_LaserPainterData_H

#include "LockingWeaponData.h"

class LaserPainterData :
	public LockingWeaponData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DCA0;
	}
	float m_TimeObjectIsPainted; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_LaserPainterData_H
