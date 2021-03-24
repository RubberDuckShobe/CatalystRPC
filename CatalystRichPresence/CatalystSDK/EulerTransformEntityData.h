//
// Generated with FrostbiteGen by Chod
// File: SDK\EulerTransformEntityData.h
// Created: Wed Mar 10 19:06:55 2021
//

#ifndef FBGEN_EulerTransformEntityData_H
#define FBGEN_EulerTransformEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "ModifierEuler.h"
#include "EntityData.h"

class EulerTransformEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6710;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Trans; // 0x20
	float m_Rotation; // 0x30
	ModifierEuler m_Euler; // 0x34
	unsigned char _0x38[0x8];
}; // size = 0x40

#endif // FBGEN_EulerTransformEntityData_H
