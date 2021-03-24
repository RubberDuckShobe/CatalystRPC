//
// Generated with FrostbiteGen by Chod
// File: SDK\RotationTransformBuilderEntityData.h
// Created: Wed Mar 10 19:02:34 2021
//

#ifndef FBGEN_RotationTransformBuilderEntityData_H
#define FBGEN_RotationTransformBuilderEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class RotationTransformBuilderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E62F0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Rotation; // 0x20
}; // size = 0x30

#endif // FBGEN_RotationTransformBuilderEntityData_H
