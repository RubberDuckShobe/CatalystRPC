//
// Generated with FrostbiteGen by Chod
// File: SDK\BoneCollisionData.h
// Created: Wed Mar 10 19:08:26 2021
//

#ifndef FBGEN_BoneCollisionData_H
#define FBGEN_BoneCollisionData_H

#include "Vec4.h"
#include "Vec3.h"
#include "PitchModifier.h"
#include "HitReactionType.h"
#include "MaterialDecl.h"
#include "AimAssistCollisionBoneData.h"
struct BoneCollisionData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815FE0;
	}
	Vec4 m_DebugDrawColor; // 0x0
	Vec3 m_CapsuleOffset; // 0x10
	PitchModifier m_MaxPitch; // 0x20
	PitchModifier m_MinPitch; // 0x40
	const char* m_BoneName; // 0x60
	HitReactionType m_AnimationHitReactionType; // 0x68
	MaterialDecl m_MaterialPair; // 0x6c
	int m_BoneAxis; // 0x70
	float m_CapsuleLength; // 0x74
	float m_CapsuleRadius; // 0x78
	unsigned char _0x7c[0x4];
	AimAssistCollisionBoneData* m_AimAssistTarget; // 0x80
	bool m_ValidInHiLod; // 0x88
	bool m_ValidInLowLod; // 0x89
	bool m_DeactivateIfBehindWall; // 0x8a
	bool m_UsePhysicsRotation; // 0x8b
	unsigned char _0x8c[0x4];
}; // size = 0x90

#endif // FBGEN_BoneCollisionData_H
