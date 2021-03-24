//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothStatesSetup.h
// Created: Wed Mar 10 19:07:41 2021
//

#ifndef FBGEN_ClothStatesSetup_H
#define FBGEN_ClothStatesSetup_H

#include "Array.h"
struct ClothStatesSetup
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BE00;
	}
	Array<unsigned int> m_States; // 0x0
	Array<ClothStateSetupTransitionLookup> m_StatesTransitionLookups; // 0x8
	Array<ClothStateSetupTransition> m_StatesTransitions; // 0x10
	unsigned int m_EmptyState; // 0x18
	unsigned char _0x1c[0x4];
	Array<unsigned int> m_FullSkinStates; // 0x20
}; // size = 0x28

#endif // FBGEN_ClothStatesSetup_H
