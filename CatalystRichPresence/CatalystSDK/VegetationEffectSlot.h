//
// Generated with FrostbiteGen by Chod
// File: SDK\VegetationEffectSlot.h
// Created: Wed Mar 10 18:59:23 2021
//

#ifndef FBGEN_VegetationEffectSlot_H
#define FBGEN_VegetationEffectSlot_H

#include "EffectBlueprint.h"
struct VegetationEffectSlot
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283FBE0;
	}
	EffectBlueprint* m_Effect; // 0x0
	float m_StrengthMin; // 0x8
	float m_StrengthMax; // 0xc
	float m_SizeMin; // 0x10
	float m_SizeMax; // 0x14
}; // size = 0x18

#endif // FBGEN_VegetationEffectSlot_H
