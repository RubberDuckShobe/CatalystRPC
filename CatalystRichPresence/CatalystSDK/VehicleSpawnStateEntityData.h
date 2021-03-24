//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleSpawnStateEntityData.h
// Created: Wed Mar 10 18:59:18 2021
//

#ifndef FBGEN_VehicleSpawnStateEntityData_H
#define FBGEN_VehicleSpawnStateEntityData_H

#include "Vec3.h"
#include "EntityData.h"

class VehicleSpawnStateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C620;
	}
	float m_StartupDelayModifier; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_InitialVelocity; // 0x20
	float m_InitialThrottle; // 0x30
	unsigned int m_EngineIndex; // 0x34
	float m_InitialRpmModifier; // 0x38
	float m_HeightOffset; // 0x3c
	float m_Radius; // 0x40
	unsigned char _0x44[0xc];
}; // size = 0x50

#endif // FBGEN_VehicleSpawnStateEntityData_H
