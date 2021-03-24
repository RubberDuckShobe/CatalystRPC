//
// Generated with FrostbiteGen by Chod
// File: SDK\ImpactEffectData.h
// Created: Wed Mar 10 19:06:31 2021
//

#ifndef FBGEN_ImpactEffectData_H
#define FBGEN_ImpactEffectData_H

#include "MaterialDecl.h"
struct ImpactEffectData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884A58;
	}
	MaterialDecl m_Material; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ComputeVelocityForBone; // 0x8
	int m_ComputeVelocityForBoneId; // 0x10
	unsigned char _0x14[0x4];
	const char* m_ImpactName; // 0x18
	int m_ImpactId; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ImpactEffectData_H
