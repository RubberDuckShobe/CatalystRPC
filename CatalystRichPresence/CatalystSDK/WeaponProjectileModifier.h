//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponProjectileModifier.h
// Created: Wed Mar 10 18:58:49 2021
//

#ifndef FBGEN_WeaponProjectileModifier_H
#define FBGEN_WeaponProjectileModifier_H

#include "ProjectileEntityData.h"
#include "WeaponModifierDynamicBase.h"

class WeaponProjectileModifier :
	public WeaponModifierDynamicBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DA00;
	}
	ProjectileEntityData* m_ProjectileData; // 0x18
	int m_MaxCount; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_WeaponProjectileModifier_H
