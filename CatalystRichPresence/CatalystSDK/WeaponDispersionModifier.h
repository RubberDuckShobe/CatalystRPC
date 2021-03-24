//
// Generated with FrostbiteGen by Chod
// File: SDK\WeaponDispersionModifier.h
// Created: Wed Mar 10 18:58:50 2021
//

#ifndef FBGEN_WeaponDispersionModifier_H
#define FBGEN_WeaponDispersionModifier_H

#include "WeaponModifierDynamicBase.h"

class WeaponDispersionModifier :
	public WeaponModifierDynamicBase // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D820;
	}
	float m_HorizontalModifier; // 0x18
	float m_VerticalModifier; // 0x1c
}; // size = 0x20

#endif // FBGEN_WeaponDispersionModifier_H
