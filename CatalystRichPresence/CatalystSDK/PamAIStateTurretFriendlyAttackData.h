//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateTurretFriendlyAttackData.h
// Created: Wed Mar 10 19:05:10 2021
//

#ifndef FBGEN_PamAIStateTurretFriendlyAttackData_H
#define FBGEN_PamAIStateTurretFriendlyAttackData_H

#include "LinearTransform.h"
#include "PamAIStateBaseData.h"

class PamAIStateTurretFriendlyAttackData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286CA30;
	}
	float m_MaximumRange; // 0x28
	unsigned char _0x2c[0x4];
	LinearTransform m_MuzzleExitTransform; // 0x30
	LinearTransform m_WeaponRootTransform; // 0x70
}; // size = 0xb0

#endif // FBGEN_PamAIStateTurretFriendlyAttackData_H
