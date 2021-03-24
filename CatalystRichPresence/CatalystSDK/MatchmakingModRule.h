//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingModRule.h
// Created: Wed Mar 10 19:06:03 2021
//

#ifndef FBGEN_MatchmakingModRule_H
#define FBGEN_MatchmakingModRule_H

#include "Array.h"
struct MatchmakingModRule
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284D8D0;
	}
	Array<MatchmakingMod> m_Mods; // 0x0
	const char* m_MinFitThresholdListName; // 0x8
}; // size = 0x10

#endif // FBGEN_MatchmakingModRule_H
