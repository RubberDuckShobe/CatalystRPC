//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectSourceMaterialEntry.h
// Created: Wed Mar 10 19:07:02 2021
//

#ifndef FBGEN_EffectSourceMaterialEntry_H
#define FBGEN_EffectSourceMaterialEntry_H

#include "MaterialDecl.h"
struct EffectSourceMaterialEntry
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AC48;
	}
	int m_ImpactZone; // 0x0
	int m_AttackType; // 0x4
	int m_DamageType; // 0x8
	MaterialDecl m_EffectMaterial; // 0xc
}; // size = 0x10

#endif // FBGEN_EffectSourceMaterialEntry_H
