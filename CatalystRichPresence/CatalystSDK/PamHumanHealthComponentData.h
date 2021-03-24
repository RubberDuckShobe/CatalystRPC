//
// Generated with FrostbiteGen by Chod
// File: SDK\PamHumanHealthComponentData.h
// Created: Wed Mar 10 19:04:27 2021
//

#ifndef FBGEN_PamHumanHealthComponentData_H
#define FBGEN_PamHumanHealthComponentData_H

#include "PamHealthComponentData.h"

class PamHumanHealthComponentData :
	public PamHealthComponentData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B0B0;
	}
	float m_Health; // 0x90
	float m_MaximumHealth; // 0x94
	float m_CurrentShield; // 0x98
	float m_DamageDirUpdateTime; // 0x9c
	float m_RegenerationSpeed; // 0xa0
	float m_DamageMultiplier; // 0xa4
	float m_LastChanceShieldBoost; // 0xa8
	float m_LastChanceRegenerationSpeed; // 0xac
	int m_LastChanceHealthRecovered; // 0xb0
	bool m_RegenerationEnabled; // 0xb4
	bool m_LastChanceIsPossible; // 0xb5
	bool m_IsInFlow; // 0xb6
	bool m_InDamageGracePeriod; // 0xb7
	unsigned char _0xb8[0x8];
}; // size = 0xc0

#endif // FBGEN_PamHumanHealthComponentData_H
