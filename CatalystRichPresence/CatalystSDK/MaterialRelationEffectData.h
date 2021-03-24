//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationEffectData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialRelationEffectData_H
#define FBGEN_MaterialRelationEffectData_H

#include "Array.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialRelationEffectData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A670;
	}
	Array<EffectWithSpeedRange> m_ImpactEffects; // 0x10
	Array<ObjectBlueprint*> m_ImpactDebris; // 0x18
	float m_ImpactEffectMaxSpreadAngle; // 0x20
	bool m_MirrorImpactDirection; // 0x24
	bool m_EnableInheritedVelocity; // 0x25
	unsigned char _0x26[0x2];
}; // size = 0x28

#endif // FBGEN_MaterialRelationEffectData_H
