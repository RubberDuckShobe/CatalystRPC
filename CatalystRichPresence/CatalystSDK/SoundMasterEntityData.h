//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundMasterEntityData.h
// Created: Wed Mar 10 19:01:12 2021
//

#ifndef FBGEN_SoundMasterEntityData_H
#define FBGEN_SoundMasterEntityData_H

#include "SoundMasterPatchAsset.h"
#include "EntityData.h"

class SoundMasterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7C20;
	}
	SoundMasterPatchAsset* m_Master; // 0x18
	bool m_SupportDynamicPropeties; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_SoundMasterEntityData_H
