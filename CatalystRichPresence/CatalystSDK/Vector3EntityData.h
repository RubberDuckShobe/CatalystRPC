//
// Generated with FrostbiteGen by Chod
// File: SDK\Vector3EntityData.h
// Created: Wed Mar 10 18:59:25 2021
//

#ifndef FBGEN_Vector3EntityData_H
#define FBGEN_Vector3EntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class Vector3EntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E53F0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_DefaultVec3; // 0x20
}; // size = 0x30

#endif // FBGEN_Vector3EntityData_H
