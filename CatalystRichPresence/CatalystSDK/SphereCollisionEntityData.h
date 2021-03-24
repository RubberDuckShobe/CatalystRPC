//
// Generated with FrostbiteGen by Chod
// File: SDK\SphereCollisionEntityData.h
// Created: Wed Mar 10 19:01:02 2021
//

#ifndef FBGEN_SphereCollisionEntityData_H
#define FBGEN_SphereCollisionEntityData_H

#include "Vec3.h"
#include "Array.h"
#include "RigidBodyCollisionLayer.h"
#include "MaterialDecl.h"
#include "SpatialEntityData.h"

class SphereCollisionEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816DA0;
	}
	Vec3 m_Position; // 0x60
	float m_Radius; // 0x70
	unsigned char _0x74[0x4];
	Array<EntityData*> m_PhysicsBodies; // 0x78
	RigidBodyCollisionLayer m_CollisionLayer; // 0x80
	MaterialDecl m_Material; // 0x84
	bool m_Enabled; // 0x88
	unsigned char _0x89[0x7];
}; // size = 0x90

#endif // FBGEN_SphereCollisionEntityData_H
