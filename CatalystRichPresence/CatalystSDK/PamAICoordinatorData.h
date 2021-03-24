//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAICoordinatorData.h
// Created: Wed Mar 10 19:05:21 2021
//

#ifndef FBGEN_PamAICoordinatorData_H
#define FBGEN_PamAICoordinatorData_H

#include "Array.h"
#include "TicketSettingList.h"
#include "AICoordinatorData.h"

class PamAICoordinatorData :
	public AICoordinatorData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C670;
	}
	Array<AimingPenalty> m_AimingPenalties; // 0x28
	float m_TimePenaltyMultiplier; // 0x30
	unsigned char _0x34[0x4];
	TicketSettingList m_PrepareAttackSettings; // 0x38
	TicketSettingList m_MeleeAttackSettings; // 0x40
}; // size = 0x48

#endif // FBGEN_PamAICoordinatorData_H
