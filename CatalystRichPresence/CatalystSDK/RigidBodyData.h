//
// Generated with FrostbiteGen by Chod
// File: SDK\RigidBodyData.h
// Created: Wed Mar 10 19:02:35 2021
//

#ifndef FBGEN_RigidBodyData_H
#define FBGEN_RigidBodyData_H

#include "Vec3.h"
#include "LinearTransform.h"
#include "RigidBodyType.h"
#include "MaterialDecl.h"
#include "RigidBodyMotionType.h"
#include "RigidBodyQualityType.h"
#include "Array.h"
#include "FloatPhysicsData.h"
#include "PhysicsBodyData.h"

class RigidBodyData :
	public PhysicsBodyData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F590;
	}
	Vec3 m_CenterOfMass; // 0x30
	Vec3 m_InertiaModifier; // 0x40
	LinearTransform m_Transform; // 0x50
	LinearTransform m_KeyframeTransform; // 0x90
	RigidBodyType m_RigidBodyType; // 0xd0
	float m_Mass; // 0xd4
	MaterialDecl m_Material; // 0xd8
	float m_DynamicFriction; // 0xdc
	float m_StaticFriction; // 0xe0
	float m_Restitution; // 0xe4
	float m_AngularVelocityDamping; // 0xe8
	float m_LinearVelocityDamping; // 0xec
	RigidBodyMotionType m_MotionType; // 0xf0
	RigidBodyQualityType m_QualityType; // 0xf4
	unsigned int m_SystemGroup; // 0xf8
	unsigned int m_SubSystemId; // 0xfc
	unsigned int m_SubSystemIdNoCollide; // 0x100
	unsigned char _0x104[0x4];
	Array<unsigned int> m_PartIndices; // 0x108
	FloatPhysicsData* m_FloatPhysics; // 0x110
	bool m_ComputeCenterOfMass; // 0x118
	bool m_IsRootController; // 0x119
	unsigned char _0x11a[0x6];
}; // size = 0x120

#endif // FBGEN_RigidBodyData_H
