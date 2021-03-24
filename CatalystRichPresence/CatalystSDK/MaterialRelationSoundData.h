//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationSoundData.h
// Created: Wed Mar 10 19:06:00 2021
//

#ifndef FBGEN_MaterialRelationSoundData_H
#define FBGEN_MaterialRelationSoundData_H

#include "SoundAsset.h"
#include "AudioGraphEvent.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialRelationSoundData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A610;
	}
	SoundAsset* m_ImpactSound; // 0x10
	AudioGraphEvent* m_ImpactSoundEvent; // 0x18
	SoundAsset* m_ScrapeSound; // 0x20
	float m_ScrapeLength; // 0x28
	unsigned char _0x2c[0x4];
	AudioGraphEvent* m_ScrapeImpactSoundEvent; // 0x30
}; // size = 0x38

#endif // FBGEN_MaterialRelationSoundData_H
