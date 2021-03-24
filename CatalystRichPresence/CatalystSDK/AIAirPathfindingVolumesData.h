//
// Generated with FrostbiteGen by Chod
// File: SDK\AIAirPathfindingVolumesData.h
// Created: Wed Mar 10 19:09:01 2021
//

#ifndef FBGEN_AIAirPathfindingVolumesData_H
#define FBGEN_AIAirPathfindingVolumesData_H

#include "Array.h"
#include "EntityData.h"

class AIAirPathfindingVolumesData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B84D0;
	}
	Array<GatewayNode> m_Gateways; // 0x18
}; // size = 0x20

#endif // FBGEN_AIAirPathfindingVolumesData_H
