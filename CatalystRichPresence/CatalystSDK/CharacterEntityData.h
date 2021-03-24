//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterEntityData.h
// Created: Wed Mar 10 19:08:17 2021
//

#ifndef FBGEN_CharacterEntityData_H
#define FBGEN_CharacterEntityData_H

#include "PersonViewMode.h"
#include "PlayerSpawnType.h"
#include "EntityVoiceOverInfo.h"
#include "CharacterSoundData.h"
#include "ControllableEntityData.h"

class CharacterEntityData :
	public ControllableEntityData // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816EC0;
	}
	float m_MaxHealth; // 0xb0
	PersonViewMode m_DefaultViewMode; // 0xb4
	PlayerSpawnType m_PlayerSpawnType; // 0xb8
	unsigned char _0xbc[0x4];
	EntityVoiceOverInfo* m_VoiceOverInfo; // 0xc0
	CharacterSoundData* m_Sound; // 0xc8
	bool m_CharacterLightingEnable; // 0xd0
	unsigned char _0xd1[0xf];
}; // size = 0xe0

#endif // FBGEN_CharacterEntityData_H
