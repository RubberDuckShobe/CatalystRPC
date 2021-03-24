//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsConstraintInitialStanceData.h
// Created: Wed Mar 10 19:03:10 2021
//

#ifndef FBGEN_PhysicsConstraintInitialStanceData_H
#define FBGEN_PhysicsConstraintInitialStanceData_H

#include "PhysicsConstraintData.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PhysicsConstraintInitialStanceData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282EFF0;
	}
	PhysicsConstraintData* m_ContainingConstraintData; // 0x18
	LinearTransform m_Transform; // 0x20
}; // size = 0x60

#endif // FBGEN_PhysicsConstraintInitialStanceData_H
