//
// Generated with FrostbiteGen by Chod
// File: SDK\BoatFloatPhysicsData.h
// Created: Wed Mar 10 19:08:27 2021
//

#ifndef FBGEN_BoatFloatPhysicsData_H
#define FBGEN_BoatFloatPhysicsData_H

#include "HullFloatPhysicsData.h"

class BoatFloatPhysicsData :
	public HullFloatPhysicsData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CE60;
	}
	float m_FrontRatio; // 0x90
	float m_DivingSpeed; // 0x94
	float m_MaxDivingBoyancyLoss; // 0x98
	unsigned char _0x9c[0x4];
}; // size = 0xa0

#endif // FBGEN_BoatFloatPhysicsData_H
