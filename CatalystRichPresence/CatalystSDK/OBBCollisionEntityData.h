//
// Generated with FrostbiteGen by Chod
// File: SDK\OBBCollisionEntityData.h
// Created: Wed Mar 10 19:05:31 2021
//

#ifndef FBGEN_OBBCollisionEntityData_H
#define FBGEN_OBBCollisionEntityData_H

#include "Vec3.h"
#include "Array.h"
#include "RigidBodyCollisionLayer.h"
#include "MaterialDecl.h"
#include "SpatialEntityData.h"

class OBBCollisionEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816D40;
	}
	Vec3 m_HalfExtents; // 0x60
	Array<EntityData*> m_PhysicsBodies; // 0x70
	RigidBodyCollisionLayer m_CollisionLayer; // 0x78
	MaterialDecl m_Material; // 0x7c
	bool m_Enabled; // 0x80
	unsigned char _0x81[0xf];
}; // size = 0x90

#endif // FBGEN_OBBCollisionEntityData_H
