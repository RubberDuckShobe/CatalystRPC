//
// Generated with FrostbiteGen by Chod
// File: SDK\ClosestPointEntityData.h
// Created: Wed Mar 10 19:07:42 2021
//

#ifndef FBGEN_ClosestPointEntityData_H
#define FBGEN_ClosestPointEntityData_H

#include "Realm.h"
#include "SpatialEntityData.h"

class ClosestPointEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FA70;
	}
	Realm m_Realm; // 0x60
	float m_MaxDistance; // 0x64
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_ClosestPointEntityData_H
