//
// Generated with FrostbiteGen by Chod
// File: SDK\VegetationTreeEntityData.h
// Created: Wed Mar 10 18:59:23 2021
//

#ifndef FBGEN_VegetationTreeEntityData_H
#define FBGEN_VegetationTreeEntityData_H

#include "Vec3.h"
#include "VegetationEffectSlot.h"
#include "EffectBlueprint.h"
#include "VegetationBaseEntityData.h"

class VegetationTreeEntityData :
	public VegetationBaseEntityData // size = 0xd0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283FC60;
	}
	Vec3 m_InertiaModifier; // 0xd0
	Vec3 m_TranslucencyVolumeCenter; // 0xe0
	float m_Stiffness; // 0xf0
	float m_Damping; // 0xf4
	float m_StemMass; // 0xf8
	float m_StiffnessSpread; // 0xfc
	float m_DampingSpread; // 0x100
	float m_MassSpread; // 0x104
	float m_StemLockedUpTo; // 0x108
	int m_StemBoneCount; // 0x10c
	float m_BreakableJointThreshold; // 0x110
	float m_BoundingBoxScaleFactor; // 0x114
	float m_PartsTimeToLive; // 0x118
	float m_LinearVelocityDamping; // 0x11c
	float m_AngularVelocityDamping; // 0x120
	float m_Friction; // 0x124
	float m_Restitution; // 0x128
	float m_StemPhysicsWidth; // 0x12c
	float m_StemPhysicsHeightScale; // 0x130
	float m_BranchPhysicsWidth; // 0x134
	float m_BranchPhysicsHeightScale; // 0x138
	float m_DestructionMassScale; // 0x13c
	float m_CenterOfMassVerticalScale; // 0x140
	unsigned char _0x144[0x4];
	VegetationEffectSlot m_StemBreakEffect; // 0x148
	VegetationEffectSlot m_BranchBreakEffect; // 0x160
	VegetationEffectSlot m_ImpactEffect; // 0x178
	EffectBlueprint* m_WindEffect; // 0x190
	float m_MinRespawnTime; // 0x198
	unsigned int m_StemEffectNodeThreshold; // 0x19c
	unsigned int m_ShadowLODOffset; // 0x1a0
	bool m_ConstantFalloff; // 0x1a4
	bool m_Indestructable; // 0x1a5
	bool m_TranslucencyEnabled; // 0x1a6
	unsigned char _0x1a7[0x9];
}; // size = 0x1b0

#endif // FBGEN_VegetationTreeEntityData_H
