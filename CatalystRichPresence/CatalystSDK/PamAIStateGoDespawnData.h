//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateGoDespawnData.h
// Created: Wed Mar 10 19:05:13 2021
//

#ifndef FBGEN_PamAIStateGoDespawnData_H
#define FBGEN_PamAIStateGoDespawnData_H

#include "PamAIStateBaseData.h"

class PamAIStateGoDespawnData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D9F0;
	}
	float m_MinPlayerDistance; // 0x28
	float m_MinPlayerAngle; // 0x2c
	bool m_LookForDespawnAS; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_PamAIStateGoDespawnData_H
