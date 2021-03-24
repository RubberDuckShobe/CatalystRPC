//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponData.h
// Created: Wed Mar 10 18:58:51 2021
//

#ifndef FBGEN_WeaponData_H
#define FBGEN_WeaponData_H

#include "ToolData.h"

class WeaponData :
	public ToolData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DE80;
	}
	bool m_ShowLaserPaintedVehicles; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_WeaponData_H
