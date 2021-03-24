//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterSoundData.h
// Created: Wed Mar 10 19:08:15 2021
//

#ifndef FBGEN_CharacterSoundData_H
#define FBGEN_CharacterSoundData_H

#include "SoundAsset.h"
#include "DataContainer.h"

class CharacterSoundData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816F20;
	}
	SoundAsset* m_Movement; // 0x10
}; // size = 0x18

#endif // FBGEN_CharacterSoundData_H
