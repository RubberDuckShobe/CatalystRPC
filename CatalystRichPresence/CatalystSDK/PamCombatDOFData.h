//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCombatDOFData.h
// Created: Wed Mar 10 19:04:45 2021
//

#ifndef FBGEN_PamCombatDOFData_H
#define FBGEN_PamCombatDOFData_H

#include "EntityData.h"

class PamCombatDOFData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428812B0;
	}
	int m_CurrentTargetAnimatableID; // 0x18
	float m_CurrentTargetDistance; // 0x1c
	float m_FadeTime; // 0x20
	float m_SwitchSpeed; // 0x24
	float m_MaxBlurScale; // 0x28
	float m_FarStart; // 0x2c
	float m_FarInterval; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_PamCombatDOFData_H
