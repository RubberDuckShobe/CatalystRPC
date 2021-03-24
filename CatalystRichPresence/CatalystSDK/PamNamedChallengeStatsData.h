//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeStatsData.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNamedChallengeStatsData_H
#define FBGEN_PamNamedChallengeStatsData_H

#include "PamStat.h"
#include "Array.h"
struct PamNamedChallengeStatsData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428771E0;
	}
	PamStat m_Main; // 0x0
	PamStat m_TotalStars; // 0x18
	Array<PamStat> m_AdditionalStats; // 0x30
	bool m_HasStars; // 0x38
	bool m_MainStatHigherIsBetter; // 0x39
	unsigned char _0x3a[0x6];
}; // size = 0x40

#endif // FBGEN_PamNamedChallengeStatsData_H
