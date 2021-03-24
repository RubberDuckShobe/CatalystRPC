//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCreatureMeleeBinding.h
// Created: Wed Mar 10 19:04:44 2021
//

#ifndef FBGEN_PamCreatureMeleeBinding_H
#define FBGEN_PamCreatureMeleeBinding_H

#include "AntRef.h"
struct PamCreatureMeleeBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C0D8;
	}
	AntRef m_AntInMelee; // 0x0
	AntRef m_MeleePermitted; // 0x14
	AntRef m_MeleeReach; // 0x28
	AntRef m_MeleeTrigger; // 0x3c
	AntRef m_MeleeAngle; // 0x50
	AntRef m_MeleePhase; // 0x64
}; // size = 0x78

#endif // FBGEN_PamCreatureMeleeBinding_H
