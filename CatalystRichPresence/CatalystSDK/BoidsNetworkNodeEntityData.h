//
// Generated with FrostbiteGen by Chod
// File: SDK\BoidsNetworkNodeEntityData.h
// Created: Wed Mar 10 19:08:27 2021
//

#ifndef FBGEN_BoidsNetworkNodeEntityData_H
#define FBGEN_BoidsNetworkNodeEntityData_H

#include "Vec3.h"
#include "Array.h"
#include "EntityData.h"

class BoidsNetworkNodeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894990;
	}
	float m_Facing; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Position; // 0x20
	float m_Radius; // 0x30
	float m_OverrideTurningRate; // 0x34
	float m_TrafficSignalStopDistance; // 0x38
	float m_TrafficGreenDuration; // 0x3c
	float m_TrafficOrangeDuration; // 0x40
	unsigned char _0x44[0x4];
	Array<BoidsObstacleData> m_Obstacles; // 0x48
	Array<BoidsWeightedConnectionData> m_WeightedConnections; // 0x50
	float m_SpawnInterval; // 0x58
	float m_SpawnChance; // 0x5c
	float m_DespawnChance; // 0x60
	unsigned char _0x64[0x4];
	Array<BoidsNetworkNodeEntityData*> m_Connections; // 0x68
	bool m_EnableOverrideTurningRate; // 0x70
	bool m_IsTrafficSignal; // 0x71
	unsigned char _0x72[0xe];
}; // size = 0x80

#endif // FBGEN_BoidsNetworkNodeEntityData_H
