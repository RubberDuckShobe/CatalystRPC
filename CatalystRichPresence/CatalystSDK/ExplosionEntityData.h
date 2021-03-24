//
// Generated with FrostbiteGen by Chod
// File: SDK\ExplosionEntityData.h
// Created: Wed Mar 10 19:06:51 2021
//

#ifndef FBGEN_ExplosionEntityData_H
#define FBGEN_ExplosionEntityData_H

#include "EffectBlueprint.h"
#include "MaskVolumeEntityData.h"
#include "DestructionMaskVolumeEntityData.h"
#include "MaterialDecl.h"
#include "ExplosionWindForceData.h"
#include "DamageIndicationType.h"
#include "SpatialEntityData.h"

class ExplosionEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810C80;
	}
	EffectBlueprint* m_DetonationEffect; // 0x60
	EffectBlueprint* m_DetonationEffectForFriendlies; // 0x68
	MaskVolumeEntityData* m_MaskVolume; // 0x70
	DestructionMaskVolumeEntityData* m_DestructionMaskVolume; // 0x78
	MaterialDecl m_MaterialPair; // 0x80
	MaterialDecl m_SecondaryMaterialPair; // 0x84
	ExplosionWindForceData* m_ShockwaveWindForce; // 0x88
	DamageIndicationType m_DamageIndicationType; // 0x90
	float m_EmpTime; // 0x94
	float m_MaxOcclusionRaycastRadius; // 0x98
	float m_InnerBlastRadius; // 0x9c
	float m_BlastDamage; // 0xa0
	float m_BlastRadius; // 0xa4
	float m_BlastImpulse; // 0xa8
	float m_ShockwaveDamage; // 0xac
	float m_ShockwaveRadius; // 0xb0
	float m_ShockwaveImpulse; // 0xb4
	float m_ShockwaveTime; // 0xb8
	float m_CameraShockwaveRadius; // 0xbc
	float m_SpawnDelay; // 0xc0
	bool m_NoFriendliesEffectOnEnabledFriendlyFire; // 0xc4
	bool m_UseEntityTransformForDetonationEffect; // 0xc5
	bool m_SecondaryMaterialsActive; // 0xc6
	bool m_HasStunEffect; // 0xc7
	bool m_ApplyBlastDamageToVehiclesAndCharactersInstantly; // 0xc8
	bool m_DisableOcclusion; // 0xc9
	bool m_DisableStaticEntityOcclusion; // 0xca
	bool m_DisableOcclusionOutsideBlastRadius; // 0xcb
	bool m_TriggerImpairedHearing; // 0xcc
	bool m_Enabled; // 0xcd
	unsigned char _0xce[0x2];
}; // size = 0xd0

#endif // FBGEN_ExplosionEntityData_H
