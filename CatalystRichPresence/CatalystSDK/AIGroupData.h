//
// Generated with FrostbiteGen by Chod
// File: SDK\AIGroupData.h
// Created: Wed Mar 10 19:08:59 2021
//

#ifndef FBGEN_AIGroupData_H
#define FBGEN_AIGroupData_H

#include "GroupSensingSharing.h"
#include "AIDifficultySetting.h"
#include "Array.h"
#include "EntityData.h"

class AIGroupData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B74A0;
	}
	GroupSensingSharing m_SensesSharing; // 0x18
	float m_DelaySharedSensingTime; // 0x1c
	float m_KeepSensingTime; // 0x20
	AIDifficultySetting m_DifficultyOverride; // 0x24
	Array<TicketSettingList> m_TicketSettings; // 0x28
	bool m_AlertGroupOnMemberKilled; // 0x30
	bool m_StartInStasis; // 0x31
	bool m_StartInCombatRediness; // 0x32
	bool m_RequireAllChildGroupsSpawned; // 0x33
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_AIGroupData_H
