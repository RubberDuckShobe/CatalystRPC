//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponFiringDataModifier.h
// Created: Wed Mar 10 18:58:50 2021
//

#ifndef FBGEN_WeaponFiringDataModifier_H
#define FBGEN_WeaponFiringDataModifier_H

#include "WeaponFiringData.h"
#include "WeaponModifierBase.h"

class WeaponFiringDataModifier :
	public WeaponModifierBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DB20;
	}
	WeaponFiringData* m_WeaponFiring; // 0x18
}; // size = 0x20

#endif // FBGEN_WeaponFiringDataModifier_H
