//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateMeleeFromIdleData.h
// Created: Wed Mar 10 19:05:12 2021
//

#ifndef FBGEN_PamAIStateMeleeFromIdleData_H
#define FBGEN_PamAIStateMeleeFromIdleData_H

#include "PamAIStateBaseData.h"

class PamAIStateMeleeFromIdleData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C8B0;
	}
	float m_AttackRange; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamAIStateMeleeFromIdleData_H
