//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponOwnerModifier.h
// Created: Wed Mar 10 18:58:49 2021
//

#ifndef FBGEN_WeaponOwnerModifier_H
#define FBGEN_WeaponOwnerModifier_H

#include "WeaponUnlockAsset.h"
#include "WeaponModifierDynamicBase.h"

class WeaponOwnerModifier :
	public WeaponModifierDynamicBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D7C0;
	}
	WeaponUnlockAsset* m_Unlock; // 0x18
}; // size = 0x20

#endif // FBGEN_WeaponOwnerModifier_H
