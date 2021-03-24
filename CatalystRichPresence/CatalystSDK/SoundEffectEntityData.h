//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundEffectEntityData.h
// Created: Wed Mar 10 19:01:16 2021
//

#ifndef FBGEN_SoundEffectEntityData_H
#define FBGEN_SoundEffectEntityData_H

#include "SoundAsset.h"
#include "ChildEffectEntityData.h"

class SoundEffectEntityData :
	public ChildEffectEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7CE0;
	}
	SoundAsset* m_Sound; // 0xa0
	bool m_UseDefaultStopEvent; // 0xa8
	unsigned char _0xa9[0x7];
}; // size = 0xb0

#endif // FBGEN_SoundEffectEntityData_H
