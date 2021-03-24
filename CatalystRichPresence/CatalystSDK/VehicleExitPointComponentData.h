//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleExitPointComponentData.h
// Created: Wed Mar 10 18:59:20 2021
//

#ifndef FBGEN_VehicleExitPointComponentData_H
#define FBGEN_VehicleExitPointComponentData_H

#include "Vec3.h"
#include "GameComponentData.h"

class VehicleExitPointComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E1B0;
	}
	Vec3 m_Impulse; // 0x70
	int m_Ordinal; // 0x80
	float m_TerrainHeight; // 0x84
	float m_Velocity; // 0x88
	int m_Animation; // 0x8c
	bool m_InheritCameraDirection; // 0x90
	bool m_CheckForVehicleOverrun; // 0x91
	unsigned char _0x92[0xe];
}; // size = 0xa0

#endif // FBGEN_VehicleExitPointComponentData_H
