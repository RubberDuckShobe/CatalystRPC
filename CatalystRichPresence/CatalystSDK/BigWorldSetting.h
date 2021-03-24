//
// Generated with FrostbiteGen by Chod
// File: SDK\BigWorldSetting.h
// Created: Wed Mar 10 19:08:31 2021
//

#ifndef FBGEN_BigWorldSetting_H
#define FBGEN_BigWorldSetting_H

#include "SoundAsset.h"
#include "DataContainer.h"

class BigWorldSetting :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BFF0;
	}
	SoundAsset* m_Sound; // 0x10
	int m_MinDistance; // 0x18
	int m_MaxDistance; // 0x1c
	float m_MinDelayTimeInMinutes; // 0x20
	float m_MaxDelayTimeInMinutes; // 0x24
}; // size = 0x28

#endif // FBGEN_BigWorldSetting_H
