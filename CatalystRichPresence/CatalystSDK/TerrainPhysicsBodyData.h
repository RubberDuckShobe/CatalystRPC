//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainPhysicsBodyData.h
// Created: Wed Mar 10 19:00:27 2021
//

#ifndef FBGEN_TerrainPhysicsBodyData_H
#define FBGEN_TerrainPhysicsBodyData_H

#include "PhysicsBodyData.h"

class TerrainPhysicsBodyData :
	public PhysicsBodyData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F3B0;
	}
	bool m_UseSDFCollision; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_TerrainPhysicsBodyData_H
