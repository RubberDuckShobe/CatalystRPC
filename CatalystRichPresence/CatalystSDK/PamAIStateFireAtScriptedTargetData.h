//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateFireAtScriptedTargetData.h
// Created: Wed Mar 10 19:05:14 2021
//

#ifndef FBGEN_PamAIStateFireAtScriptedTargetData_H
#define FBGEN_PamAIStateFireAtScriptedTargetData_H

#include "PamAIStateBaseData.h"

class PamAIStateFireAtScriptedTargetData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D990;
	}
	float m_TargetDuration; // 0x28
	bool m_CycleTargets; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_PamAIStateFireAtScriptedTargetData_H
