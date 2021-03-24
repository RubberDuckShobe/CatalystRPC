//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationDamageData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialRelationDamageData_H
#define FBGEN_MaterialRelationDamageData_H

#include "PhysicsPropertyRelationPropertyData.h"

class MaterialRelationDamageData :
	public PhysicsPropertyRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A550;
	}
	float m_CollisionDamageMultiplier; // 0x10
	float m_CollisionDamageThreshold; // 0x14
	float m_DamageProtectionMultiplier; // 0x18
	float m_DamagePenetrationMultiplier; // 0x1c
	float m_DamageProtectionThreshold; // 0x20
	float m_ExplosionCoverDamageModifier; // 0x24
	bool m_InflictsDemolitionDamage; // 0x28
	bool m_AllowClientDestruction; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_MaterialRelationDamageData_H
