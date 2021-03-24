//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIAirLocoData.h
// Created: Wed Mar 10 19:05:22 2021
//

#ifndef FBGEN_PamAIAirLocoData_H
#define FBGEN_PamAIAirLocoData_H

#include "PamVehicleSimulationData.h"
#include "PamRailRideHeliWaypointData.h"
#include "AIBasicAirLocoData.h"

class PamAIAirLocoData :
	public AIBasicAirLocoData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CD20;
	}
	float m_SpeedModifier; // 0x70
	float m_SoundAccelToThrottleMult; // 0x74
	float m_SoundSpeedToThrottleMult; // 0x78
	unsigned char _0x7c[0x4];
	PamVehicleSimulationData* m_PamVehicleSimulation; // 0x80
	PamRailRideHeliWaypointData* m_DefaultPamRailRideHeliWaypointData; // 0x88
	bool m_Enabled; // 0x90
	bool m_Airborne; // 0x91
	bool m_FacePlayer; // 0x92
	bool m_TryKeepWithinAirVolumes; // 0x93
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_PamAIAirLocoData_H
