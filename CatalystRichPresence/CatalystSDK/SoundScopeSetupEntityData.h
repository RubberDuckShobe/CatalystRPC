//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundScopeSetupEntityData.h
// Created: Wed Mar 10 19:01:10 2021
//

#ifndef FBGEN_SoundScopeSetupEntityData_H
#define FBGEN_SoundScopeSetupEntityData_H

#include "SoundScopeSetupData.h"
#include "EntityData.h"

class SoundScopeSetupEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7B60;
	}
	SoundScopeSetupData* m_Setup; // 0x18
}; // size = 0x20

#endif // FBGEN_SoundScopeSetupEntityData_H
