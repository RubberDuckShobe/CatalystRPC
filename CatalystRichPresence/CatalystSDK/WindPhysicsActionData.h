//
// Generated with FrostbiteGen by Chod
// File: SDK\WindPhysicsActionData.h
// Created: Wed Mar 10 18:58:45 2021
//

#ifndef FBGEN_WindPhysicsActionData_H
#define FBGEN_WindPhysicsActionData_H

#include "PhysicsActionData.h"

class WindPhysicsActionData :
	public PhysicsActionData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F710;
	}
	float m_ResistanceFactor; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_WindPhysicsActionData_H
