//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponFiringEffectsModifier.h
// Created: Wed Mar 10 18:58:50 2021
//

#ifndef FBGEN_WeaponFiringEffectsModifier_H
#define FBGEN_WeaponFiringEffectsModifier_H

#include "Array.h"
#include "WeaponModifierDynamicBase.h"

class WeaponFiringEffectsModifier :
	public WeaponModifierDynamicBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289DAC0;
	}
	Array<FireEffectData> m_FireEffects1p; // 0x18
	Array<FireEffectData> m_FireEffects3p; // 0x20
}; // size = 0x28

#endif // FBGEN_WeaponFiringEffectsModifier_H
