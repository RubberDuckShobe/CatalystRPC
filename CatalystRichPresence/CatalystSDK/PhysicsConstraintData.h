//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsConstraintData.h
// Created: Wed Mar 10 19:03:10 2021
//

#ifndef FBGEN_PhysicsConstraintData_H
#define FBGEN_PhysicsConstraintData_H

#include "LinearTransform.h"
#include "Realm.h"
#include "PhysicsConstraintInitialStanceData.h"
#include "EntityData.h"

class PhysicsConstraintData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F290;
	}
	float m_BreakThreshold; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_Transform; // 0x20
	Realm m_Realm; // 0x60
	unsigned char _0x64[0x4];
	PhysicsConstraintInitialStanceData* m_InitialStanceData; // 0x68
	bool m_IsBreakable; // 0x70
	bool m_Stabilized; // 0x71
	bool m_EnableContinuousSimulation; // 0x72
	unsigned char m_WorldIndex; // 0x73
	bool m_Motorized; // 0x74
	unsigned char _0x75[0xb];
}; // size = 0x80

#endif // FBGEN_PhysicsConstraintData_H
