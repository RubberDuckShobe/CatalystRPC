//
// Generated with FrostbiteGen by Chod
// File: SDK\MaxInstancesScopeStageData.h
// Created: Wed Mar 10 19:05:58 2021
//

#ifndef FBGEN_MaxInstancesScopeStageData_H
#define FBGEN_MaxInstancesScopeStageData_H

#include "SoundScopeStageData.h"

class MaxInstancesScopeStageData :
	public SoundScopeStageData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8220;
	}
	unsigned int m_Count; // 0x10
	bool m_KeepOldest; // 0x14
	unsigned char _0x15[0x3];
}; // size = 0x18

#endif // FBGEN_MaxInstancesScopeStageData_H
