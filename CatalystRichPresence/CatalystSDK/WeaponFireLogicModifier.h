//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponFireLogicModifier.h
// Created: Wed Mar 10 18:58:50 2021
//

#ifndef FBGEN_WeaponFireLogicModifier_H
#define FBGEN_WeaponFireLogicModifier_H

#include "WeaponModifierDynamicBase.h"

class WeaponFireLogicModifier :
	public WeaponModifierDynamicBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D940;
	}
	float m_RateOfFire; // 0x18
	float m_RateOfFireForBurst; // 0x1c
}; // size = 0x20

#endif // FBGEN_WeaponFireLogicModifier_H
