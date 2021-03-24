//
// Generated with FrostbiteGen by Chod
// File: SDK\ScaleTransformBuilderEntityData.h
// Created: Wed Mar 10 19:02:31 2021
//

#ifndef FBGEN_ScaleTransformBuilderEntityData_H
#define FBGEN_ScaleTransformBuilderEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class ScaleTransformBuilderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6350;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Scale; // 0x20
}; // size = 0x30

#endif // FBGEN_ScaleTransformBuilderEntityData_H
