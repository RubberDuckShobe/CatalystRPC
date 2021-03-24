//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateFireFromPositionData.h
// Created: Wed Mar 10 19:05:14 2021
//

#ifndef FBGEN_PamAIStateFireFromPositionData_H
#define FBGEN_PamAIStateFireFromPositionData_H

#include "PamFirePatternOverride.h"
#include "PamAIStateBaseData.h"

class PamAIStateFireFromPositionData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286DFF0;
	}
	float m_LineOfFireTimeout; // 0x28
	PamFirePatternOverride m_OverrideFirePattern; // 0x2c
}; // size = 0x30

#endif // FBGEN_PamAIStateFireFromPositionData_H
