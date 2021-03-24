//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialBasedEffectComponentData.h
// Created: Wed Mar 10 19:06:01 2021
//

#ifndef FBGEN_MaterialBasedEffectComponentData_H
#define FBGEN_MaterialBasedEffectComponentData_H

#include "Vec3.h"
#include "MaterialDecl.h"
#include "SnapType.h"
#include "Array.h"
#include "GameComponentData.h"

class MaterialBasedEffectComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1BA0;
	}
	Vec3 m_RayDirection; // 0x70
	float m_OverrideHeight; // 0x80
	MaterialDecl m_Material; // 0x84
	SnapType m_Snapping; // 0x88
	float m_RayDistance; // 0x8c
	int m_MaxInstances; // 0x90
	unsigned char _0x94[0x4];
	Array<EffectParameter*> m_EffectParameters; // 0x98
	bool m_AutoStart; // 0xa0
	bool m_LocalPlayerOnly; // 0xa1
	bool m_TransformEffectWithComponent; // 0xa2
	bool m_UseRayCast; // 0xa3
	bool m_SpawnEffectOnLookupLocation; // 0xa4
	bool m_SeeThrough; // 0xa5
	bool m_Penetrable; // 0xa6
	bool m_IncludeTerrain; // 0xa7
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_MaterialBasedEffectComponentData_H
