//
// Generated with FrostbiteGen by Chod
// File: SDK\BreakableModelPhysicsComponentData.h
// Created: Wed Mar 10 19:08:23 2021
//

#ifndef FBGEN_BreakableModelPhysicsComponentData_H
#define FBGEN_BreakableModelPhysicsComponentData_H

#include "Array.h"
#include "GamePhysicsComponentData.h"

class BreakableModelPhysicsComponentData :
	public GamePhysicsComponentData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D72C0;
	}
	Array<PhysicsBodyData*> m_BreakableBodies; // 0xa0
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_BreakableModelPhysicsComponentData_H
