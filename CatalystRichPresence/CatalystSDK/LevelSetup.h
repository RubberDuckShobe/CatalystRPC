//
// Generated with FrostbiteGen by Chod
// File: SDK\LevelSetup.h
// Created: Wed Mar 10 19:06:18 2021
//

#ifndef FBGEN_LevelSetup_H
#define FBGEN_LevelSetup_H

#include "Array.h"
struct LevelSetup
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EBF30;
	}
	const char* m_Name; // 0x0
	Array<LevelSetupOption> m_InclusionOptions; // 0x8
	unsigned int m_DifficultyIndex; // 0x10
	unsigned char _0x14[0x4];
	const char* m_StartPoint; // 0x18
	bool m_IsSaveGame; // 0x20
	bool m_HasPersistentSave; // 0x21
	bool m_ForceReloadResources; // 0x22
	unsigned char _0x23[0x5];
}; // size = 0x28

#endif // FBGEN_LevelSetup_H
