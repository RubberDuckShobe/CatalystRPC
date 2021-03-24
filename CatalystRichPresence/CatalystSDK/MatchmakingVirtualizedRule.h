//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingVirtualizedRule.h
// Created: Wed Mar 10 19:06:01 2021
//

#ifndef FBGEN_MatchmakingVirtualizedRule_H
#define FBGEN_MatchmakingVirtualizedRule_H

#include "MatchmakingVirtualizationMode.h"
struct MatchmakingVirtualizedRule
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284D970;
	}
	const char* m_MinFitThreshold; // 0x0
	MatchmakingVirtualizationMode m_VirtualizationMode; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_MatchmakingVirtualizedRule_H
