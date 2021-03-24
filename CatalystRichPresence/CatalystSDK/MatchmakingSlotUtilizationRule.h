//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingSlotUtilizationRule.h
// Created: Wed Mar 10 19:06:02 2021
//

#ifndef FBGEN_MatchmakingSlotUtilizationRule_H
#define FBGEN_MatchmakingSlotUtilizationRule_H

struct MatchmakingSlotUtilizationRule
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284D8B0;
	}
	unsigned int m_PreferredPercentage; // 0x0
	unsigned int m_MinPercentage; // 0x4
	unsigned int m_MaxPercentage; // 0x8
	unsigned char _0xc[0x4];
	const char* m_RangeOffsetListName; // 0x10
}; // size = 0x18

#endif // FBGEN_MatchmakingSlotUtilizationRule_H
