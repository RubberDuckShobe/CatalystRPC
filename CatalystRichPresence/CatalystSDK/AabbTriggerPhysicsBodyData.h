//
// Generated with FrostbiteGen by Chod
// File: SDK\AabbTriggerPhysicsBodyData.h
// Created: Wed Mar 10 19:08:49 2021
//

#ifndef FBGEN_AabbTriggerPhysicsBodyData_H
#define FBGEN_AabbTriggerPhysicsBodyData_H

#include "Vec3.h"
#include "RigidBodyMotionType.h"
#include "PhysicsBodyData.h"

class AabbTriggerPhysicsBodyData :
	public PhysicsBodyData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F350;
	}
	Vec3 m_HalfExtents; // 0x30
	RigidBodyMotionType m_MotionType; // 0x40
	unsigned char _0x44[0xc];
}; // size = 0x50

#endif // FBGEN_AabbTriggerPhysicsBodyData_H
