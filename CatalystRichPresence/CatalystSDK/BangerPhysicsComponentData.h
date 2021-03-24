//
// Generated with FrostbiteGen by Chod
// File: SDK\BangerPhysicsComponentData.h
// Created: Wed Mar 10 19:08:33 2021
//

#ifndef FBGEN_BangerPhysicsComponentData_H
#define FBGEN_BangerPhysicsComponentData_H

#include "Vec3.h"
#include "GamePhysicsComponentData.h"

class BangerPhysicsComponentData :
	public GamePhysicsComponentData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817C40;
	}
	Vec3 m_ImpulseInput; // 0xa0
}; // size = 0xb0

#endif // FBGEN_BangerPhysicsComponentData_H
