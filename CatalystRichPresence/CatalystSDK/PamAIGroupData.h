//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIGroupData.h
// Created: Wed Mar 10 19:05:19 2021
//

#ifndef FBGEN_PamAIGroupData_H
#define FBGEN_PamAIGroupData_H

#include "PamAIGroupType.h"
#include "SpeedDistribution.h"
#include "AIGroupData.h"

class PamAIGroupData :
	public AIGroupData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C5B0;
	}
	PamAIGroupType m_AIGroupType; // 0x38
	int m_DamageType; // 0x3c
	float m_SixthSenseRadiusOverride; // 0x40
	float m_SixthSenseHeightOverride; // 0x44
	SpeedDistribution m_CombatSpeedDistribution; // 0x48
	int m_FireTokensCount; // 0x54
	float m_InitialAttackDelay; // 0x58
	bool m_PlayFinishingAnimation; // 0x5c
	bool m_PlayFastDeploy; // 0x5d
	bool m_DieOfInactivity; // 0x5e
	unsigned char _0x5f[0x1];
}; // size = 0x60

#endif // FBGEN_PamAIGroupData_H
