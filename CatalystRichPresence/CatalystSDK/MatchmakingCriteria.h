//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingCriteria.h
// Created: Wed Mar 10 19:06:03 2021
//

#ifndef FBGEN_MatchmakingCriteria_H
#define FBGEN_MatchmakingCriteria_H

#include "MatchmakingSizeRule.h"
#include "MatchmakingPingSiteRule.h"
#include "MatchmakingRankedRule.h"
#include "MatchmakingVirtualizedRule.h"
#include "Array.h"
#include "MatchmakingModRule.h"
#include "MatchmakingSlotUtilizationRule.h"
#include "MatchmakingHostViabilityRule.h"
struct MatchmakingCriteria
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284D870;
	}
	MatchmakingSizeRule m_SizeRule; // 0x0
	MatchmakingPingSiteRule m_PingSiteRule; // 0x10
	MatchmakingRankedRule m_RankedRule; // 0x18
	Array<MatchmakingGenericRule> m_GenericRules; // 0x20
	MatchmakingVirtualizedRule m_VirtualizedRule; // 0x28
	Array<MatchmakingUserExtendedDataRule> m_UEDRules; // 0x38
	MatchmakingModRule m_ModRule; // 0x40
	MatchmakingSlotUtilizationRule m_SlotUtilizationRule; // 0x50
	MatchmakingHostViabilityRule m_HostViabilityRule; // 0x68
}; // size = 0x70

#endif // FBGEN_MatchmakingCriteria_H
