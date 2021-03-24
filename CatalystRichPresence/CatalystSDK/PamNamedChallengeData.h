//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeData.h
// Created: Wed Mar 10 19:04:20 2021
//

#ifndef FBGEN_PamNamedChallengeData_H
#define FBGEN_PamNamedChallengeData_H

#include "PamNamedChallengeTypeData.h"
#include "PamProgressionFlag.h"
#include "Array.h"
#include "PamNamedChallengeStatsData.h"
#include "DataContainer.h"

class PamNamedChallengeData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877D60;
	}
	const char* m_Sid; // 0x10
	int m_InternalThreshold1Star; // 0x18
	int m_InternalThreshold2Star; // 0x1c
	int m_InternalThreshold3Star; // 0x20
	int m_InternalThresholdCancel; // 0x24
	PamNamedChallengeTypeData* m_ChallengeType; // 0x28
	const char* m_StatsCode; // 0x30
	const char* m_PreviewTextureId; // 0x38
	PamProgressionFlag* m_UnlockFlag; // 0x40
	unsigned int m_GeneratedFlagNameHash; // 0x48
	unsigned char _0x4c[0x4];
	Array<PamNamedChallengeNPCStats> m_NPCStats; // 0x50
	PamNamedChallengeStatsData m_StatsData; // 0x58
	int m_ContentId; // 0x98
	bool m_HideInMap; // 0x9c
	bool m_ExcludeFromFlagGroup; // 0x9d
	unsigned char _0x9e[0x2];
}; // size = 0xa0

#endif // FBGEN_PamNamedChallengeData_H
