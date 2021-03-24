//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFakeHeliPhysicsData.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamFakeHeliPhysicsData_H
#define FBGEN_PamFakeHeliPhysicsData_H

#include "PamVehicleSimulationData.h"

class PamFakeHeliPhysicsData :
	public PamVehicleSimulationData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CDE0;
	}
	float m_Force; // 0x10
	float m_MaxVelocity; // 0x14
	float m_MaxAcceleration; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_PamFakeHeliPhysicsData_H
