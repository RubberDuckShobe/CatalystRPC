//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettingsBase.h
// Created: Wed Mar 10 19:08:57 2021
//

#ifndef FBGEN_AISettingsBase_H
#define FBGEN_AISettingsBase_H

#include "AIDifficultySetting.h"
#include "AISpecialization.h"
#include "DataContainer.h"

class AISettingsBase :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7D50;
	}
	AIDifficultySetting m_DifficultySetting; // 0x10
	unsigned char _0x14[0x4];
	AISpecialization* m_AISpecialization; // 0x18
}; // size = 0x20

#endif // FBGEN_AISettingsBase_H
