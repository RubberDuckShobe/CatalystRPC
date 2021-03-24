//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateMeleeDefense.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAIStateMeleeDefense_H
#define FBGEN_AISettings_PamAIStateMeleeDefense_H

#include "AISettings_PamAIStateMeleeAttack.h"

class AISettings_PamAIStateMeleeDefense :
	public AISettings_PamAIStateMeleeAttack // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286DDB0;
	}
	float m_InitialWaitTime; // 0x48
	float m_DefenseTime; // 0x4c
	float m_Cooldown; // 0x50
	unsigned char _0x54[0x4];
}; // size = 0x58

#endif // FBGEN_AISettings_PamAIStateMeleeDefense_H
