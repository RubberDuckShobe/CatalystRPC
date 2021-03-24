//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReward.h
// Created: Wed Mar 10 19:04:05 2021
//

#ifndef FBGEN_PamReward_H
#define FBGEN_PamReward_H

#include "PamAchievementData.h"
#include "Guid.h"
#include "Array.h"
#include "RewardCompareConditionsType.h"
#include "DataContainer.h"

class PamReward :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878D80;
	}
	PamAchievementData* m_AchievementData; // 0x10
	Guid m_RunnerKitGuid; // 0x18
	Array<PamRewardCondition*> m_RewardConditions; // 0x28
	RewardCompareConditionsType m_CompareConditionsType; // 0x30
	unsigned int m_ConditionsCountThreshold; // 0x34
	unsigned int m_NameHash; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_PamReward_H
