//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingGenericRule.h
// Created: Wed Mar 10 19:06:03 2021
//

#ifndef FBGEN_MatchmakingGenericRule_H
#define FBGEN_MatchmakingGenericRule_H

#include "GenericRuleType.h"
#include "Array.h"
struct MatchmakingGenericRule
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DDD0;
	}
	const char* m_Rule; // 0x0
	const char* m_MinFitThresHold; // 0x8
	const char* m_Setting; // 0x10
	GenericRuleType m_GenericRuleType; // 0x18
	unsigned char _0x1c[0x4];
	Array<MatchmakingRuleString> m_DesiredValues; // 0x20
	bool m_IgnoreIfDefault; // 0x28
	bool m_MergeValues; // 0x29
	bool m_SortValues; // 0x2a
	unsigned char _0x2b[0x5];
}; // size = 0x30

#endif // FBGEN_MatchmakingGenericRule_H
