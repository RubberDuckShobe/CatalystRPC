//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingSession.h
// Created: Wed Mar 10 19:06:02 2021
//

#ifndef FBGEN_MatchmakingSession_H
#define FBGEN_MatchmakingSession_H

#include "MatchmakingSessionMode.h"
#include "MatchmakingCriteria.h"
#include "GameParametersData.h"
#include "MatchmakingSession.h"
#include "Array.h"
#include "DataContainer.h"

class MatchmakingSession :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284ECD0;
	}
	MatchmakingSessionMode m_Mode; // 0x10
	unsigned int m_DurationMs; // 0x14
	MatchmakingCriteria m_Criteria; // 0x18
	GameParametersData* m_CreateGameParams; // 0x88
	MatchmakingSession* m_OnNotFound; // 0x90
	Array<MatchmakingModifier*> m_Modifiers; // 0x98
}; // size = 0xa0

#endif // FBGEN_MatchmakingSession_H
