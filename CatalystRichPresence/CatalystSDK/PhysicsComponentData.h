//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsComponentData.h
// Created: Wed Mar 10 19:03:11 2021
//

#ifndef FBGEN_PhysicsComponentData_H
#define FBGEN_PhysicsComponentData_H

#include "Array.h"
#include "InternalCollisionDisablingBehavior.h"
#include "ComponentData.h"

class PhysicsComponentData :
	public ComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282FA70;
	}
	Array<PhysicsBodyData*> m_PhysicsBodies; // 0x70
	Array<PhysicsConstraintData*> m_PhysicsConstraints; // 0x78
	Array<PhysicsPartData> m_Parts; // 0x80
	InternalCollisionDisablingBehavior m_InternalCollisionDisabling; // 0x88
	bool m_MovableParts; // 0x8c
	unsigned char _0x8d[0x3];
}; // size = 0x90

#endif // FBGEN_PhysicsComponentData_H
