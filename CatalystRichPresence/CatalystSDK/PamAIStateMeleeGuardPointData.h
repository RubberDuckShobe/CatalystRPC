//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateMeleeGuardPointData.h
// Created: Wed Mar 10 19:05:12 2021
//

#ifndef FBGEN_PamAIStateMeleeGuardPointData_H
#define FBGEN_PamAIStateMeleeGuardPointData_H

#include "Array.h"
#include "PamAIStateBaseData.h"

class PamAIStateMeleeGuardPointData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D0F0;
	}
	float m_GuardRadius; // 0x28
	float m_MeleeRangeStart_InsideGuardRadius; // 0x2c
	float m_MeleeRangeStop_InsideGuardRadius; // 0x30
	float m_MeleeRangeStart_OutsideGuardRadius; // 0x34
	float m_MeleeRangeStop_OutsideGuardRadius; // 0x38
	float m_TimeBeforeReturning; // 0x3c
	float m_MaxDistFromGuardPoint; // 0x40
	float m_ReturnToPosDistFromEnemy; // 0x44
	float m_BackUpToGuardPosDist; // 0x48
	unsigned char _0x4c[0x4];
	Array<AISettingsBase*> m_Settings; // 0x50
}; // size = 0x58

#endif // FBGEN_PamAIStateMeleeGuardPointData_H
