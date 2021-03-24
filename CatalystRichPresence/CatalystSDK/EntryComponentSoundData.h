//
// Generated with FrostbiteGen by Chod
// File: SDK\EntryComponentSoundData.h
// Created: Wed Mar 10 19:06:56 2021
//

#ifndef FBGEN_EntryComponentSoundData_H
#define FBGEN_EntryComponentSoundData_H

#include "Array.h"
#include "SoundAsset.h"
#include "DataContainer.h"

class EntryComponentSoundData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E750;
	}
	Array<StanceSwitchSoundData> m_StanceSounds; // 0x10
	SoundAsset* m_StanceSwitchSound; // 0x18
}; // size = 0x20

#endif // FBGEN_EntryComponentSoundData_H
