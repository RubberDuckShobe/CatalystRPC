//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsEntityData.h
// Created: Wed Mar 10 19:03:10 2021
//

#ifndef FBGEN_PhysicsEntityData_H
#define FBGEN_PhysicsEntityData_H

#include "HavokAsset.h"
#include "Vec3.h"
#include "FloatPhysicsData.h"
#include "ProximityData.h"
#include "Array.h"
#include "EntityData.h"

class PhysicsEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282FB90;
	}
	HavokAsset* m_Asset; // 0x18
	Vec3 m_InertiaModifier; // 0x20
	Array<RigidBodyData*> m_RigidBodies; // 0x30
	FloatPhysicsData* m_FloatPhysics; // 0x38
	float m_Mass; // 0x40
	float m_AngularVelocityDamping; // 0x44
	float m_LinearVelocityDamping; // 0x48
	unsigned char _0x4c[0x4];
	ProximityData* m_Proximity; // 0x50
	Array<PhysicsConstraintData*> m_Constraints; // 0x58
	bool m_MovableParts; // 0x60
	bool m_IsComposite; // 0x61
	unsigned char _0x62[0xe];
}; // size = 0x70

#endif // FBGEN_PhysicsEntityData_H
