//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalWindForceEntityBaseData.h
// Created: Wed Mar 10 19:06:10 2021
//

#ifndef FBGEN_LocalWindForceEntityBaseData_H
#define FBGEN_LocalWindForceEntityBaseData_H

#include "ForceGroupAsset.h"
#include "SpatialEntityData.h"

class LocalWindForceEntityBaseData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EADA0;
	}
	float m_Strength; // 0x60
	float m_Variation; // 0x64
	float m_VariationRate; // 0x68
	float m_MicroVariation; // 0x6c
	float m_Hardness; // 0x70
	float m_ForceAsInstantVelocity; // 0x74
	ForceGroupAsset* m_ForceGroup; // 0x78
}; // size = 0x80

#endif // FBGEN_LocalWindForceEntityBaseData_H
