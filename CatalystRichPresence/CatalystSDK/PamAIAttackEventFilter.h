//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIAttackEventFilter.h
// Created: Wed Mar 10 19:05:21 2021
//

#ifndef FBGEN_PamAIAttackEventFilter_H
#define FBGEN_PamAIAttackEventFilter_H

#include "FatalFilter.h"
#include "FromBehindFilter.h"
struct PamAIAttackEventFilter
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AA88;
	}
	int m_AttackType; // 0x0
	int m_AttackDirection; // 0x4
	int m_AttackMove; // 0x8
	FatalFilter m_AttackIsFatal; // 0xc
	FromBehindFilter m_AttackIsFromBehind; // 0x10
}; // size = 0x14

#endif // FBGEN_PamAIAttackEventFilter_H
