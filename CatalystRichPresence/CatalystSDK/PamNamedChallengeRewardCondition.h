//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeRewardCondition.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNamedChallengeRewardCondition_H
#define FBGEN_PamNamedChallengeRewardCondition_H

#include "Array.h"
#include "PamStatsRewardCondition.h"

class PamNamedChallengeRewardCondition :
	public PamStatsRewardCondition // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878FC0;
	}
	Array<PamNamedChallengeData*> m_NamedChallenges; // 0x28
}; // size = 0x30

#endif // FBGEN_PamNamedChallengeRewardCondition_H
