//
// Generated with FrostbiteGen by Chod
// File: SDK\CapsuleCollisionComponentData.h
// Created: Wed Mar 10 19:08:18 2021
//

#ifndef FBGEN_CapsuleCollisionComponentData_H
#define FBGEN_CapsuleCollisionComponentData_H

#include "CollisionComponentData.h"

class CapsuleCollisionComponentData :
	public CollisionComponentData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1C60;
	}
	float m_Height; // 0x90
	float m_Radius; // 0x94
	unsigned char _0x98[0x8];
}; // size = 0xa0

#endif // FBGEN_CapsuleCollisionComponentData_H
