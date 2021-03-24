//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterPhysicsComponentData.h
// Created: Wed Mar 10 19:08:16 2021
//

#ifndef FBGEN_CharacterPhysicsComponentData_H
#define FBGEN_CharacterPhysicsComponentData_H

#include "CharacterPhysicsData.h"
#include "GameComponentData.h"

class CharacterPhysicsComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817160;
	}
	CharacterPhysicsData* m_CharacterPhysics; // 0x70
	bool m_EnableCollisionOnSpawn; // 0x78
	unsigned char _0x79[0x7];
}; // size = 0x80

#endif // FBGEN_CharacterPhysicsComponentData_H
