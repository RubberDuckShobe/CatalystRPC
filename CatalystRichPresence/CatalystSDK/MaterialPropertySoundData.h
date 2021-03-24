//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialPropertySoundData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialPropertySoundData_H
#define FBGEN_MaterialPropertySoundData_H

#include "SoundAsset.h"
#include "MaterialSoldierSoundSettings.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialPropertySoundData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A8B0;
	}
	SoundAsset* m_ImpactSound; // 0x10
	SoundAsset* m_ScrapeSound; // 0x18
	float m_ScrapeLength; // 0x20
	unsigned char _0x24[0x4];
	MaterialSoldierSoundSettings* m_SoldierSettings; // 0x28
	float m_Softness; // 0x30
	float m_MaterialSoundId; // 0x34
}; // size = 0x38

#endif // FBGEN_MaterialPropertySoundData_H
