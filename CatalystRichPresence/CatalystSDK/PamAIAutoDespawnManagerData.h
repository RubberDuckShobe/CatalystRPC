//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIAutoDespawnManagerData.h
// Created: Wed Mar 10 19:05:21 2021
//

#ifndef FBGEN_PamAIAutoDespawnManagerData_H
#define FBGEN_PamAIAutoDespawnManagerData_H

#include "AIAutoDespawnManagerData.h"

class PamAIAutoDespawnManagerData :
	public AIAutoDespawnManagerData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286ED70;
	}
	float m_MinPlayerDistance; // 0x28
	float m_MinPlayerAngle; // 0x2c
	float m_MaxTimeOutsideCombatArea; // 0x30
	float m_MaxDistanceFromCombatArea; // 0x34
	bool m_CheckOutsideCombatArea; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_PamAIAutoDespawnManagerData_H
