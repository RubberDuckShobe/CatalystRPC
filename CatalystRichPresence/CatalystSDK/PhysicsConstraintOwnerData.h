//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsConstraintOwnerData.h
// Created: Wed Mar 10 19:03:10 2021
//

#ifndef FBGEN_PhysicsConstraintOwnerData_H
#define FBGEN_PhysicsConstraintOwnerData_H

#include "PhysicsConstraintData.h"
#include "EntityData.h"

class PhysicsConstraintOwnerData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F230;
	}
	PhysicsConstraintData* m_ConstraintData; // 0x18
}; // size = 0x20

#endif // FBGEN_PhysicsConstraintOwnerData_H
