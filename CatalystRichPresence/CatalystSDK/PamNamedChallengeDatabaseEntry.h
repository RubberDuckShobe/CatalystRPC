//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeDatabaseEntry.h
// Created: Wed Mar 10 19:04:20 2021
//

#ifndef FBGEN_PamNamedChallengeDatabaseEntry_H
#define FBGEN_PamNamedChallengeDatabaseEntry_H

#include "LinearTransform.h"
#include "Guid.h"
#include "PamNamedChallengeStatsData.h"
struct PamNamedChallengeDatabaseEntry
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877760;
	}
	LinearTransform m_Transform; // 0x0
	Guid m_ChallengeDataGuid; // 0x40
	int m_ContentId; // 0x50
	unsigned char _0x54[0x4];
	const char* m_Sid; // 0x58
	const char* m_ChallengeTypeName; // 0x60
	float m_Threshold1Star; // 0x68
	float m_Threshold2Star; // 0x6c
	float m_Threshold3Star; // 0x70
	float m_ThresholdCheater; // 0x74
	PamNamedChallengeStatsData m_StatsData; // 0x78
	bool m_HideInMap; // 0xb8
	unsigned char _0xb9[0x7];
}; // size = 0xc0

#endif // FBGEN_PamNamedChallengeDatabaseEntry_H
