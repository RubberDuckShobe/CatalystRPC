//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingRuleString.h
// Created: Wed Mar 10 19:06:02 2021
//

#ifndef FBGEN_MatchmakingRuleString_H
#define FBGEN_MatchmakingRuleString_H

#include "MatchmakingPlatform.h"
#include "Array.h"
struct MatchmakingRuleString
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DDF0;
	}
	const char* m_Value; // 0x0
	MatchmakingPlatform m_Platform; // 0x8
	unsigned char _0xc[0x4];
	Array<const char*> m_Licenses; // 0x10
	bool m_UseOnlyIfEmpty; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_MatchmakingRuleString_H
