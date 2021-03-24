//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateRangedAttack.h
// Created: Wed Mar 10 19:08:55 2021
//

#ifndef FBGEN_AISettings_PamAIStateRangedAttack_H
#define FBGEN_AISettings_PamAIStateRangedAttack_H

#include "AISettingsBase.h"

class AISettings_PamAIStateRangedAttack :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D930;
	}
	float m_MaxAllowedTimeWithoutVision; // 0x20
	float m_MaxAllowedAttackDist; // 0x24
	float m_PreferredAttackDist; // 0x28
	float m_PreferredAttackDistMargin; // 0x2c
	float m_TooCloseDistance; // 0x30
	float m_BackAwayDistance; // 0x34
}; // size = 0x38

#endif // FBGEN_AISettings_PamAIStateRangedAttack_H
