//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeTypeData.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNamedChallengeTypeData_H
#define FBGEN_PamNamedChallengeTypeData_H

#include "PamNamedChallengeStat.h"
#include "UIWidgetBlueprint.h"
#include "PamUIMapMarkerDefinition.h"
#include "PamProgressionFlagGroup.h"
#include "DiceUIVectorShapeAsset.h"
#include "Array.h"
#include "DataContainer.h"

class PamNamedChallengeTypeData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877E80;
	}
	const char* m_Sid; // 0x10
	const char* m_TypeName; // 0x18
	const char* m_StatsCode; // 0x20
	int m_ChallengeTypeHash; // 0x28
	unsigned char _0x2c[0x4];
	PamNamedChallengeStat m_MainStat; // 0x30
	const char* m_TotalStarsStat; // 0x40
	Array<PamNamedChallengeStat> m_AdditionalStats; // 0x48
	int m_UnlockedPropertyHash; // 0x50
	unsigned char _0x54[0x4];
	const char* m_BeatYourRecordNewsSid; // 0x58
	UIWidgetBlueprint* m_MapMarkerIconWidget; // 0x60
	PamUIMapMarkerDefinition* m_MapMarkerDefinition; // 0x68
	DiceUIVectorShapeAsset* m_CompletedIconShape; // 0x70
	PamProgressionFlagGroup* m_FlagGroup; // 0x78
	DiceUIVectorShapeAsset* m_Icon; // 0x80
	Array<PamNamedChallengeProperty> m_InProperties; // 0x88
	Array<PamNamedChallengeProperty> m_OutProperties; // 0x90
	bool m_MainStatHigherIsBetter; // 0x98
	bool m_HasStars; // 0x99
	bool m_RequiresOnline; // 0x9a
	bool m_AllowTeleport; // 0x9b
	bool m_UpdateEventFeedOnNewRecord; // 0x9c
	bool m_HasDuration; // 0x9d
	bool m_HasUnlock; // 0x9e
	bool m_SendRefreshLeaderboardMessage; // 0x9f
}; // size = 0xa0

#endif // FBGEN_PamNamedChallengeTypeData_H
