//
// Generated with FrostbiteGen by Chod
// File: SDK\DamageMap.h
// Created: Wed Mar 10 19:07:20 2021
//

#ifndef FBGEN_DamageMap_H
#define FBGEN_DamageMap_H

#include "DamageEffect.h"
#include "AttackCategories.h"
#include "DataContainer.h"

class DamageMap :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E5F0;
	}
	int m_Value; // 0x10
	DamageEffect m_DamageFlowAttack; // 0x14
	DamageEffect m_DamageMoveEnemyAttack; // 0x18
	DamageEffect m_DamageComboAttack; // 0x1c
	AttackCategories m_Category; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_DamageMap_H
