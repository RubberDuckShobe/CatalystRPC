//
// Generated with FrostbiteGen by Chod
// File: SDK\CollisionComponentData.h
// Created: Wed Mar 10 19:07:40 2021
//

#ifndef FBGEN_CollisionComponentData_H
#define FBGEN_CollisionComponentData_H

#include "Array.h"
#include "RigidBodyCollisionLayer.h"
#include "MaterialDecl.h"
#include "GameComponentData.h"

class CollisionComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1CC0;
	}
	Array<EntityData*> m_PhysicsBodies; // 0x70
	RigidBodyCollisionLayer m_CollisionLayer; // 0x78
	MaterialDecl m_Material; // 0x7c
	bool m_Enabled; // 0x80
	unsigned char _0x81[0xf];
}; // size = 0x90

#endif // FBGEN_CollisionComponentData_H
