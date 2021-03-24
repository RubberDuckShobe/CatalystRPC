//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateParalyzedData.h
// Created: Wed Mar 10 19:05:11 2021
//

#ifndef FBGEN_PamAIStateParalyzedData_H
#define FBGEN_PamAIStateParalyzedData_H

#include "PamAIStateBaseData.h"

class PamAIStateParalyzedData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286CC70;
	}
	float m_ParalyzedTime; // 0x28
	float m_GetParalyzedRadius; // 0x2c
}; // size = 0x30

#endif // FBGEN_PamAIStateParalyzedData_H
