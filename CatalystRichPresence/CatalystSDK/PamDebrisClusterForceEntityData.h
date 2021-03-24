//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDebrisClusterForceEntityData.h
// Created: Wed Mar 10 19:04:42 2021
//

#ifndef FBGEN_PamDebrisClusterForceEntityData_H
#define FBGEN_PamDebrisClusterForceEntityData_H

#include "Vec3.h"
#include "Realm.h"
#include "SpatialEntityData.h"

class PamDebrisClusterForceEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428850A0;
	}
	Vec3 m_AdditionalForce; // 0x60
	Vec3 m_AdditionalRandomForce; // 0x70
	Realm m_Realm; // 0x80
	float m_LinearVelocityMultiplier; // 0x84
	float m_AngularVelocityMultiplier; // 0x88
	float m_ImpactRadius; // 0x8c
	float m_ImpactOuterRadius; // 0x90
	float m_RadialFalloffExponent; // 0x94
	float m_OuterRadiusVelocityAndRotationMultiplier; // 0x98
	unsigned char _0x9c[0x4];
}; // size = 0xa0

#endif // FBGEN_PamDebrisClusterForceEntityData_H
