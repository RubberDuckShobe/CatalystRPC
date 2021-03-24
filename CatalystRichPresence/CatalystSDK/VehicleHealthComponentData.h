//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleHealthComponentData.h
// Created: Wed Mar 10 18:59:20 2021
//

#ifndef FBGEN_VehicleHealthComponentData_H
#define FBGEN_VehicleHealthComponentData_H

#include "ControllableHealthComponentData.h"

class VehicleHealthComponentData :
	public ControllableHealthComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DEB0;
	}
	float m_ForceMinDamageAngleRadius; // 0x70
	unsigned char _0x74[0xc];
}; // size = 0x80

#endif // FBGEN_VehicleHealthComponentData_H
