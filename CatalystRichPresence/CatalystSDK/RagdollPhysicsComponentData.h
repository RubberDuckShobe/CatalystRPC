//
// Generated with FrostbiteGen by Chod
// File: SDK\RagdollPhysicsComponentData.h
// Created: Wed Mar 10 19:02:45 2021
//

#ifndef FBGEN_RagdollPhysicsComponentData_H
#define FBGEN_RagdollPhysicsComponentData_H

#include "Array.h"
#include "PhysicsComponentData.h"

class RagdollPhysicsComponentData :
	public PhysicsComponentData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F950;
	}
	Array<unsigned int> m_BodiesNamesHashes; // 0x90
	unsigned char _0x98[0x8];
}; // size = 0xa0

#endif // FBGEN_RagdollPhysicsComponentData_H
