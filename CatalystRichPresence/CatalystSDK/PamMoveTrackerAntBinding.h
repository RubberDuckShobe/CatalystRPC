//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMoveTrackerAntBinding.h
// Created: Wed Mar 10 19:04:22 2021
//

#ifndef FBGEN_PamMoveTrackerAntBinding_H
#define FBGEN_PamMoveTrackerAntBinding_H

#include "AntRef.h"
struct PamMoveTrackerAntBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884938;
	}
	AntRef m_CurrentMove; // 0x0
	AntRef m_DamageType; // 0x14
	AntRef m_MovePosition; // 0x28
	AntRef m_MoveNormal; // 0x3c
	AntRef m_MovingSpeedXZ; // 0x50
	AntRef m_IsInJumpState; // 0x64
}; // size = 0x78

#endif // FBGEN_PamMoveTrackerAntBinding_H
