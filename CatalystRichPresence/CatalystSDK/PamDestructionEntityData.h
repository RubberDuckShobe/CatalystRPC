//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDestructionEntityData.h
// Created: Wed Mar 10 19:04:42 2021
//

#ifndef FBGEN_PamDestructionEntityData_H
#define FBGEN_PamDestructionEntityData_H

#include "AntRef.h"
#include "MaterialDecl.h"
#include "Array.h"
#include "EntityData.h"

class PamDestructionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B350;
	}
	AntRef m_CombatDestructionEnabled; // 0x18
	AntRef m_CombatDestructionApplied; // 0x2c
	float m_ImpactDamage; // 0x40
	float m_ImpactSpeedThreshold; // 0x44
	float m_ImpactCooldown; // 0x48
	MaterialDecl m_SelfMaterial; // 0x4c
	Array<DestructionSphere> m_DestructionSpheres; // 0x50
	float m_DebrisImpactRadius; // 0x58
	float m_DebrisImpactOuterRadius; // 0x5c
	float m_RadialFalloffExponent; // 0x60
	float m_OuterRadiusVelocityAndRotationMultiplier; // 0x64
	float m_BoneVelocityMultiplier; // 0x68
	bool m_EnableVolumes; // 0x6c
	unsigned char _0x6d[0x3];
}; // size = 0x70

#endif // FBGEN_PamDestructionEntityData_H
