//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationTriggarableEffectData.h
// Created: Wed Mar 10 19:05:59 2021
//

#ifndef FBGEN_MaterialRelationTriggarableEffectData_H
#define FBGEN_MaterialRelationTriggarableEffectData_H

#include "EffectBlueprint.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialRelationTriggarableEffectData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1B40;
	}
	EffectBlueprint* m_Effect; // 0x10
}; // size = 0x18

#endif // FBGEN_MaterialRelationTriggarableEffectData_H
