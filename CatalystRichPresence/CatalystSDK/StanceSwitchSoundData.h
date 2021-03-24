//
// Generated with FrostbiteGen by Chod
// File: SDK\StanceSwitchSoundData.h
// Created: Wed Mar 10 19:00:58 2021
//

#ifndef FBGEN_StanceSwitchSoundData_H
#define FBGEN_StanceSwitchSoundData_H

#include "SoundAsset.h"
#include "Array.h"
struct StanceSwitchSoundData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816040;
	}
	SoundAsset* m_StanceSwitchSound; // 0x0
	Array<int> m_ValidStances; // 0x8
}; // size = 0x10

#endif // FBGEN_StanceSwitchSoundData_H
