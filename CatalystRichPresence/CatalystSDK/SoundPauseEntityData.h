//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundPauseEntityData.h
// Created: Wed Mar 10 19:01:11 2021
//

#ifndef FBGEN_SoundPauseEntityData_H
#define FBGEN_SoundPauseEntityData_H

#include "Array.h"
#include "EntityData.h"

class SoundPauseEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C79E0;
	}
	Array<MixGroup*> m_ExclusionList; // 0x18
}; // size = 0x20

#endif // FBGEN_SoundPauseEntityData_H
