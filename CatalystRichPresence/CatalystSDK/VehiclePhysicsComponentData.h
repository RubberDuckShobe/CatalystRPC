//
// Generated with FrostbiteGen by Chod
// File: SDK\VehiclePhysicsComponentData.h
// Created: Wed Mar 10 18:59:18 2021
//

#ifndef FBGEN_VehiclePhysicsComponentData_H
#define FBGEN_VehiclePhysicsComponentData_H

#include "VehiclePhysicsActionData.h"
#include "ProximityTrackerData.h"
#include "ControllablePhysicsComponentData.h"

class VehiclePhysicsComponentData :
	public ControllablePhysicsComponentData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DF10;
	}
	VehiclePhysicsActionData* m_VehiclePhysicsAction; // 0xa0
	ProximityTrackerData* m_ProximityTrackerData; // 0xa8
}; // size = 0xb0

#endif // FBGEN_VehiclePhysicsComponentData_H
