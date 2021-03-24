//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialPropertyPhysicsDestructionData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialPropertyPhysicsDestructionData_H
#define FBGEN_MaterialPropertyPhysicsDestructionData_H

#include "PhysicsMaterialRelationPropertyData.h"

class MaterialPropertyPhysicsDestructionData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282FAD0;
	}
	float m_Density; // 0x10
	float m_DestructionRadius; // 0x14
	float m_Elasticity; // 0x18
	float m_YieldStrength; // 0x1c
	float m_BreakingStrength; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_MaterialPropertyPhysicsDestructionData_H
