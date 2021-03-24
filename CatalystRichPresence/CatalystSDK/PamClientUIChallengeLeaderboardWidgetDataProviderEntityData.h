//
// Generated with FrostbiteGen by Chod
// File: SDK\PamClientUIChallengeLeaderboardWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:04:50 2021
//

#ifndef FBGEN_PamClientUIChallengeLeaderboardWidgetDataProviderEntityData_H
#define FBGEN_PamClientUIChallengeLeaderboardWidgetDataProviderEntityData_H

#include "PamSharedContentId.h"
#include "PamClientUILeaderboardWidgetDataProviderEntityData.h"

class PamClientUIChallengeLeaderboardWidgetDataProviderEntityData :
	public PamClientUILeaderboardWidgetDataProviderEntityData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889F80;
	}
	PamSharedContentId m_SharedContentId; // 0x38
	unsigned int m_ContentKey; // 0x50
	unsigned char _0x54[0x4];
}; // size = 0x58

#endif // FBGEN_PamClientUIChallengeLeaderboardWidgetDataProviderEntityData_H
