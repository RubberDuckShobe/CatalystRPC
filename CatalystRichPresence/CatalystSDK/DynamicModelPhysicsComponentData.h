//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicModelPhysicsComponentData.h
// Created: Wed Mar 10 19:07:05 2021
//

#ifndef FBGEN_DynamicModelPhysicsComponentData_H
#define FBGEN_DynamicModelPhysicsComponentData_H

#include "Vec3.h"
#include "GamePhysicsComponentData.h"

class DynamicModelPhysicsComponentData :
	public GamePhysicsComponentData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428111C0;
	}
	Vec3 m_ImpulseInput; // 0xa0
}; // size = 0xb0

#endif // FBGEN_DynamicModelPhysicsComponentData_H
