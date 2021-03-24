//
// Generated with FrostbiteGen by Chod
// File: SDK\PamWeaponAimingEntityData.h
// Created: Wed Mar 10 19:03:20 2021
//

#ifndef FBGEN_PamWeaponAimingEntityData_H
#define FBGEN_PamWeaponAimingEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PamWeaponAimingEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142851F20;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_AimOffset; // 0x20
	LinearTransform m_WeaponTransform; // 0x30
}; // size = 0x70

#endif // FBGEN_PamWeaponAimingEntityData_H
