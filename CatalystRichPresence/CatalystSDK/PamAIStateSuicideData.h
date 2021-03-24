//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateSuicideData.h
// Created: Wed Mar 10 19:05:10 2021
//

#ifndef FBGEN_PamAIStateSuicideData_H
#define FBGEN_PamAIStateSuicideData_H

#include "PamAIStateBaseData.h"

class PamAIStateSuicideData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D1B0;
	}
	float m_FastFallingSpeed; // 0x28
	float m_InactiveTimer; // 0x2c
	bool m_UnconditionalSuicide; // 0x30
	bool m_KillOnFastFalling; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_PamAIStateSuicideData_H
