//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerEntityData.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerEntityData_H
#define FBGEN_MixerEntityData_H

#include "MixerAsset.h"
#include "EntityData.h"

class MixerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D13D0;
	}
	MixerAsset* m_Mixer; // 0x18
	bool m_ActivateOnCreation; // 0x20
	bool m_AccumulatedInputs; // 0x21
	unsigned char _0x22[0x6];
}; // size = 0x28

#endif // FBGEN_MixerEntityData_H
