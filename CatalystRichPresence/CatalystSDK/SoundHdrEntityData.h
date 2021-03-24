//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundHdrEntityData.h
// Created: Wed Mar 10 19:01:12 2021
//

#ifndef FBGEN_SoundHdrEntityData_H
#define FBGEN_SoundHdrEntityData_H

#include "HdrSetting.h"
#include "EntityData.h"

class SoundHdrEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7A40;
	}
	HdrSetting* m_HdrSetting; // 0x18
	bool m_ApplySettingOnCreation; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_SoundHdrEntityData_H
