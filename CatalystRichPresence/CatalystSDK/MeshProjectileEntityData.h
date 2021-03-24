//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshProjectileEntityData.h
// Created: Wed Mar 10 19:05:55 2021
//

#ifndef FBGEN_MeshProjectileEntityData_H
#define FBGEN_MeshProjectileEntityData_H

#include "Vec3.h"
#include "MeshAsset.h"
#include "EffectBlueprint.h"
#include "ProjectileEntityData.h"

class MeshProjectileEntityData :
	public ProjectileEntityData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E1E0;
	}
	Vec3 m_InitialAngularVelocity; // 0xf0
	MeshAsset* m_Mesh; // 0x100
	EffectBlueprint* m_TrailEffect; // 0x108
	EffectBlueprint* m_TrailEffect1p; // 0x110
	float m_InstantAttachableTestDistance; // 0x118
	float m_InstantAttachableVisualConvergenceDelay; // 0x11c
	float m_InstantAttachableVisualConvergenceDuration; // 0x120
	float m_MaxAttachableInclination; // 0x124
	float m_UnspawnAfterDetonationDelay; // 0x128
	bool m_IsAttachable; // 0x12c
	bool m_InstantAttachableTestUnderReticule; // 0x12d
	bool m_ExtraDamping; // 0x12e
	unsigned char _0x12f[0x1];
}; // size = 0x130

#endif // FBGEN_MeshProjectileEntityData_H
