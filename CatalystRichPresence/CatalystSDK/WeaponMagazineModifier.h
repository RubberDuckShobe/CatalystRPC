//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponMagazineModifier.h
// Created: Wed Mar 10 18:58:49 2021
//

#ifndef FBGEN_WeaponMagazineModifier_H
#define FBGEN_WeaponMagazineModifier_H

#include "WeaponModifierBase.h"

class WeaponMagazineModifier :
	public WeaponModifierBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D8E0;
	}
	int m_MagazineCapacity; // 0x18
	int m_NumberOfMagazines; // 0x1c
}; // size = 0x20

#endif // FBGEN_WeaponMagazineModifier_H
