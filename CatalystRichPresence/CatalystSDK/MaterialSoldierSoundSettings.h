//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialSoldierSoundSettings.h
// Created: Wed Mar 10 19:05:59 2021
//

#ifndef FBGEN_MaterialSoldierSoundSettings_H
#define FBGEN_MaterialSoldierSoundSettings_H

#include "SoundAsset.h"
#include "DataContainer.h"

class MaterialSoldierSoundSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A910;
	}
	SoundAsset* m_FootStepSound; // 0x10
	SoundAsset* m_ProneSound; // 0x18
	SoundAsset* m_LandSound; // 0x20
}; // size = 0x28

#endif // FBGEN_MaterialSoldierSoundSettings_H
