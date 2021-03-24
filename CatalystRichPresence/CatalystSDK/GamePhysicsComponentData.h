//
// Generated with FrostbiteGen by Chod
// File: SDK\GamePhysicsComponentData.h
// Created: Wed Mar 10 19:06:40 2021
//

#ifndef FBGEN_GamePhysicsComponentData_H
#define FBGEN_GamePhysicsComponentData_H

#include "Realm.h"
#include "Array.h"
#include "PhysicsComponentData.h"

class GamePhysicsComponentData :
	public PhysicsComponentData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816380;
	}
	Realm m_Realm; // 0x90
	unsigned char _0x94[0x4];
	Array<EffectParameter*> m_EffectParameters; // 0x98
}; // size = 0xa0

#endif // FBGEN_GamePhysicsComponentData_H
