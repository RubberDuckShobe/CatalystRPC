//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponCrosshairTypeModifier.h
// Created: Wed Mar 10 18:58:51 2021
//

#ifndef FBGEN_WeaponCrosshairTypeModifier_H
#define FBGEN_WeaponCrosshairTypeModifier_H

#include "CrosshairTypeAsset.h"
#include "WeaponModifierBase.h"

class WeaponCrosshairTypeModifier :
	public WeaponModifierBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D880;
	}
	CrosshairTypeAsset* m_CrosshairType; // 0x18
}; // size = 0x20

#endif // FBGEN_WeaponCrosshairTypeModifier_H
