//
// Generated with FrostbiteGen by Chod
// File: SDK\LoadingMusicEntityData.h
// Created: Wed Mar 10 19:06:12 2021
//

#ifndef FBGEN_LoadingMusicEntityData_H
#define FBGEN_LoadingMusicEntityData_H

#include "Guid.h"
#include "EntityData.h"

class LoadingMusicEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7980;
	}
	Guid m_SoundGuid; // 0x18
	const char* m_BundleUniqueId; // 0x28
	bool m_LoadOnCreation; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_LoadingMusicEntityData_H
