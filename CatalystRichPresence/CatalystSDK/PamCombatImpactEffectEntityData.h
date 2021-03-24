//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCombatImpactEffectEntityData.h
// Created: Wed Mar 10 19:04:45 2021
//

#ifndef FBGEN_PamCombatImpactEffectEntityData_H
#define FBGEN_PamCombatImpactEffectEntityData_H

#include "AntRef.h"
#include "Array.h"
#include "MaterialDecl.h"
#include "EntityData.h"

class PamCombatImpactEffectEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B410;
	}
	AntRef m_SavedDamageGS; // 0x18
	unsigned char _0x2c[0x4];
	Array<EffectSourceMaterialEntry> m_SelfMaterials; // 0x30
	MaterialDecl m_DefaultSelfMaterial; // 0x38
	unsigned char _0x3c[0x4];
	Array<BoneNameID> m_ImpactZoneToBoneMapping; // 0x40
	MaterialDecl m_TakedownMaterial; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_PamCombatImpactEffectEntityData_H
