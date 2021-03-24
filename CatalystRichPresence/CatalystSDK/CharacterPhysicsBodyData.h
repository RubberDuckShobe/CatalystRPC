//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterPhysicsBodyData.h
// Created: Wed Mar 10 19:08:16 2021
//

#ifndef FBGEN_CharacterPhysicsBodyData_H
#define FBGEN_CharacterPhysicsBodyData_H

#include "CharacterPhysicsData.h"
#include "PhysicsBodyData.h"

class CharacterPhysicsBodyData :
	public PhysicsBodyData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C0E0;
	}
	CharacterPhysicsData* m_CharacterPhysics; // 0x30
}; // size = 0x38

#endif // FBGEN_CharacterPhysicsBodyData_H
