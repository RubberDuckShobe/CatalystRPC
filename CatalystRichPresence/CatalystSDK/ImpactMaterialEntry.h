//
// Generated with FrostbiteGen by Chod
// File: SDK\ImpactMaterialEntry.h
// Created: Wed Mar 10 19:06:31 2021
//

#ifndef FBGEN_ImpactMaterialEntry_H
#define FBGEN_ImpactMaterialEntry_H

#include "MaterialDecl.h"
struct ImpactMaterialEntry
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428849D8;
	}
	int m_ImpactZone; // 0x0
	int m_SoundMaterial; // 0x4
	MaterialDecl m_EffectMaterial; // 0x8
}; // size = 0xc

#endif // FBGEN_ImpactMaterialEntry_H
