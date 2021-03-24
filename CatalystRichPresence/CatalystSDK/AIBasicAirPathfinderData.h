//
// Generated with FrostbiteGen by Chod
// File: SDK\AIBasicAirPathfinderData.h
// Created: Wed Mar 10 19:09:01 2021
//

#ifndef FBGEN_AIBasicAirPathfinderData_H
#define FBGEN_AIBasicAirPathfinderData_H

#include "WaypointData.h"
#include "AIPathfinderData.h"

class AIBasicAirPathfinderData :
	public AIPathfinderData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B8530;
	}
	WaypointData* m_DefaultWaypointData; // 0x18
}; // size = 0x20

#endif // FBGEN_AIBasicAirPathfinderData_H
