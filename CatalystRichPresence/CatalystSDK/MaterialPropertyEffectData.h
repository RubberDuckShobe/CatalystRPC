//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialPropertyEffectData.h
// Created: Wed Mar 10 19:06:01 2021
//

#ifndef FBGEN_MaterialPropertyEffectData_H
#define FBGEN_MaterialPropertyEffectData_H

#include "Array.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialPropertyEffectData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A850;
	}
	Array<EffectWithSpeedRange> m_ImpactEffects; // 0x10
}; // size = 0x18

#endif // FBGEN_MaterialPropertyEffectData_H
