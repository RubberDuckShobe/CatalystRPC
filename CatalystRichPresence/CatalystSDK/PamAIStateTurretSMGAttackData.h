//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateTurretSMGAttackData.h
// Created: Wed Mar 10 19:05:09 2021
//

#ifndef FBGEN_PamAIStateTurretSMGAttackData_H
#define FBGEN_PamAIStateTurretSMGAttackData_H

#include "LinearTransform.h"
#include "PamAIStateBaseData.h"

class PamAIStateTurretSMGAttackData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C9D0;
	}
	float m_DetectionPause; // 0x28
	float m_MaximumRange; // 0x2c
	float m_WarmupTime; // 0x30
	unsigned char _0x34[0xc];
	LinearTransform m_MuzzleExitTransform; // 0x40
	LinearTransform m_WeaponRootTransform; // 0x80
	float m_PostBurstShotDelay; // 0xc0
	bool m_CheckDistanceAndAngle; // 0xc4
	unsigned char _0xc5[0xb];
}; // size = 0xd0

#endif // FBGEN_PamAIStateTurretSMGAttackData_H
