//
// Generated with FrostbiteGen by Chod
// File: SDK\ExplosionWindForceData.h
// Created: Wed Mar 10 19:06:51 2021
//

#ifndef FBGEN_ExplosionWindForceData_H
#define FBGEN_ExplosionWindForceData_H

#include "DataContainer.h"

class ExplosionWindForceData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810CE0;
	}
	float m_Strength; // 0x10
	float m_Variation; // 0x14
	float m_VariationRate; // 0x18
	float m_MicroVariation; // 0x1c
	float m_Hardness; // 0x20
	float m_ForceAsInstantVelocity; // 0x24
	bool m_ShouldAffectVegetation; // 0x28
	bool m_ShouldAffectMeshScattering; // 0x29
	bool m_ShouldAffectEffects; // 0x2a
	bool m_ShouldAffectCloth; // 0x2b
	bool m_ShouldAffectPhysics; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_ExplosionWindForceData_H
