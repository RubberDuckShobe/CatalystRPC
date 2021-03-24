//
// Generated with FrostbiteGen by Chod
// File: SDK\LevelControlEntityData.h
// Created: Wed Mar 10 19:06:19 2021
//

#ifndef FBGEN_LevelControlEntityData_H
#define FBGEN_LevelControlEntityData_H

#include "EntityData.h"

class LevelControlEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B4B0;
	}
	const char* m_LevelToLoad; // 0x18
	const char* m_InclusionOptions; // 0x20
	const char* m_StartPoint; // 0x28
	bool m_RollCredits; // 0x30
	bool m_DoPersistentSave; // 0x31
	bool m_CheckSinglePlayerLevelInstalled; // 0x32
	bool m_ForceReloadResources; // 0x33
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_LevelControlEntityData_H
