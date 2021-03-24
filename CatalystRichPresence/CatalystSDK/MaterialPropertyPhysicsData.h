//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialPropertyPhysicsData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialPropertyPhysicsData_H
#define FBGEN_MaterialPropertyPhysicsData_H

#include "FrictionCombinationType.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialPropertyPhysicsData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282FB30;
	}
	float m_DynamicFriction; // 0x10
	float m_StaticFriction; // 0x14
	float m_Restitution; // 0x18
	FrictionCombinationType m_FrictionCombinationMethod; // 0x1c
	float m_DynamicFrictionModifier; // 0x20
	float m_StaticFrictionModifier; // 0x24
	float m_RestitutionModifier; // 0x28
	float m_Resistance; // 0x2c
}; // size = 0x30

#endif // FBGEN_MaterialPropertyPhysicsData_H
