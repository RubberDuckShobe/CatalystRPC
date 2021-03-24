//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialPropertyTerrainData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialPropertyTerrainData_H
#define FBGEN_MaterialPropertyTerrainData_H

#include "EffectBlueprint.h"
#include "Vec3.h"
#include "MaterialDecl.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialPropertyTerrainData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A790;
	}
	EffectBlueprint* m_DestructionEffect; // 0x10
	float m_DirtTriggerFactor; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_DirtTriggerColor; // 0x20
	MaterialDecl m_MaskMaterial; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_MaterialPropertyTerrainData_H
