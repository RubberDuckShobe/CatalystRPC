//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsBodyData.h
// Created: Wed Mar 10 19:03:11 2021
//

#ifndef FBGEN_PhysicsBodyData_H
#define FBGEN_PhysicsBodyData_H

#include "Realm.h"
#include "RigidBodyCollisionLayer.h"
#include "Asset.h"
#include "EntityData.h"

class PhysicsBodyData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F5F0;
	}
	Realm m_Realm; // 0x18
	RigidBodyCollisionLayer m_CollisionLayer; // 0x1c
	Asset* m_Asset; // 0x20
	unsigned char m_AssetIndex; // 0x28
	unsigned char m_TransformIndex; // 0x29
	unsigned char m_WorldIndex; // 0x2a
	unsigned char m_CollisionRootShapeIndex; // 0x2b
	unsigned char m_RaycastRootShapeIndex; // 0x2c
	bool m_AddToSpatialQueryManager; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_PhysicsBodyData_H
