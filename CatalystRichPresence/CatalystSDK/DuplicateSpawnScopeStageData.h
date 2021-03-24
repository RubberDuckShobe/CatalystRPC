//
// Generated with FrostbiteGen by Chod
// File: SDK\DuplicateSpawnScopeStageData.h
// Created: Wed Mar 10 19:07:07 2021
//

#ifndef FBGEN_DuplicateSpawnScopeStageData_H
#define FBGEN_DuplicateSpawnScopeStageData_H

#include "SoundScopeStageData.h"

class DuplicateSpawnScopeStageData :
	public SoundScopeStageData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C81C0;
	}
	float m_Time; // 0x10
	float m_Distance; // 0x14
	unsigned int m_ClosestCount; // 0x18
	bool m_GroupTypes; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_DuplicateSpawnScopeStageData_H
