//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponShotModifier.h
// Created: Wed Mar 10 18:58:48 2021
//

#ifndef FBGEN_WeaponShotModifier_H
#define FBGEN_WeaponShotModifier_H

#include "Vec3.h"
#include "WeaponModifierDynamicBase.h"

class WeaponShotModifier :
	public WeaponModifierDynamicBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D9A0;
	}
	unsigned char _0x18[0x8];
	Vec3 m_InitialSpeed; // 0x20
	int m_NumberOfBulletsPerShell; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_WeaponShotModifier_H
