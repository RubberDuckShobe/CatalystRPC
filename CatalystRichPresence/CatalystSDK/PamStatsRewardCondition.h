//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStatsRewardCondition.h
// Created: Wed Mar 10 19:03:45 2021
//

#ifndef FBGEN_PamStatsRewardCondition_H
#define FBGEN_PamStatsRewardCondition_H

#include "PamStatsCompareType.h"
#include "Array.h"
#include "PamRewardCondition.h"

class PamStatsRewardCondition :
	public PamRewardCondition // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142879020;
	}
	PamStatsCompareType m_StatCompareType; // 0x10
	float m_Threshold; // 0x14
	Array<const char*> m_Stats; // 0x18
	bool m_ReportStatValuesAsCount; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_PamStatsRewardCondition_H
