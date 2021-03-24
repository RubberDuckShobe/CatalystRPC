//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRayCastEntityData.h
// Created: Wed Mar 10 19:04:07 2021
//

#ifndef FBGEN_PamRayCastEntityData_H
#define FBGEN_PamRayCastEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "UpdatePass.h"
#include "Array.h"
#include "EntityData.h"

class PamRayCastEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DB60;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_FromPosition; // 0x20
	Vec3 m_LookAtPosition; // 0x30
	Vec3 m_LocalTransformFromPositionOffset; // 0x40
	Vec3 m_LocalTranformDirection; // 0x50
	UpdatePass m_UpdatePass; // 0x60
	int m_RayCastResultCount; // 0x64
	float m_TimeBetweenRaycasts; // 0x68
	float m_RayLength; // 0x6c
	float m_RandomizePositionAmount; // 0x70
	unsigned char _0x74[0x4];
	Array<int> m_OutPositionPropertyHashes; // 0x78
	Array<int> m_OutTransformPropertyHashes; // 0x80
	Array<int> m_OutNormalPropertyHashes; // 0x88
	Array<int> m_OutLengthPropertyHashes; // 0x90
	Array<int> m_OutHitFaithPropertyHashes; // 0x98
	Array<int> m_OutHitSomethingPropertyHashes; // 0xa0
	Array<int> m_OutOnGotResultEventHashes; // 0xa8
	bool m_ContinuousRaycastEnabled; // 0xb0
	bool m_UseLocalTransform; // 0xb1
	bool m_IgnoreSeeThroughMaterials; // 0xb2
	bool m_CheckAgainstCollisionMeshes; // 0xb3
	bool m_CheckAgainstPhantoms; // 0xb4
	unsigned char _0xb5[0xb];
}; // size = 0xc0

#endif // FBGEN_PamRayCastEntityData_H
