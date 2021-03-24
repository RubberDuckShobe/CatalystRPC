//
// Generated with FrostbiteGen by Chod
// File: SDK\DebrisClusterData.h
// Created: Wed Mar 10 19:07:18 2021
//

#ifndef FBGEN_DebrisClusterData_H
#define FBGEN_DebrisClusterData_H

#include "Vec3.h"
#include "MeshAsset.h"
#include "Array.h"
#include "PhysicsEntityData.h"
#include "EffectBlueprint.h"
#include "SpatialEntityData.h"
#include "GameComponentEntityData.h"

class DebrisClusterData :
	public GameComponentEntityData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D67A0;
	}
	Vec3 m_PushVelocityMul; // 0x80
	Vec3 m_PushVelocityRndMul; // 0x90
	Vec3 m_InitRotationRndMul; // 0xa0
	unsigned int m_MaxActivePartsCount; // 0xb0
	float m_CullDistanceScale; // 0xb4
	float m_RuntimeClusterLifetime; // 0xb8
	unsigned char _0xbc[0x4];
	MeshAsset* m_Mesh; // 0xc0
	unsigned int m_CompositePartCount; // 0xc8
	unsigned char _0xcc[0x4];
	Array<DebrisClusterPartInfoData> m_PartHierarchy; // 0xd0
	PhysicsEntityData* m_PhysicsData; // 0xd8
	float m_ActivationPushForceMul; // 0xe0
	float m_ProjectileForceTransferMul; // 0xe4
	EffectBlueprint* m_ActivationEffect; // 0xe8
	float m_OnPartCollisionSpeedThreshold; // 0xf0
	unsigned char _0xf4[0x4];
	EffectBlueprint* m_Effect; // 0xf8
	SpatialEntityData* m_Explosion; // 0x100
	bool m_PartialDestruction; // 0x108
	bool m_ClientSideOnly; // 0x109
	bool m_ActivateOnSpawn; // 0x10a
	bool m_InEffectWorldOnly; // 0x10b
	bool m_NoCollision; // 0x10c
	bool m_IsActivationEffectDynamic; // 0x10d
	bool m_OnPartCollisionEnable; // 0x10e
	bool m_KillPartsOnCollision; // 0x10f
	bool m_DeactivatePartsOnSleep; // 0x110
	bool m_SpawnExplosionOnFirstImpactOnly; // 0x111
	unsigned char _0x112[0xe];
}; // size = 0x120

#endif // FBGEN_DebrisClusterData_H
