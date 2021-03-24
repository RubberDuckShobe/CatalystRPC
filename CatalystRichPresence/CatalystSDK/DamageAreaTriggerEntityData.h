//
// Generated with FrostbiteGen by Chod
// File: SDK\DamageAreaTriggerEntityData.h
// Created: Wed Mar 10 19:07:20 2021
//

#ifndef FBGEN_DamageAreaTriggerEntityData_H
#define FBGEN_DamageAreaTriggerEntityData_H

#include "Array.h"
#include "MaterialDecl.h"
#include "TeamId.h"
#include "TriggerEntityData.h"

class DamageAreaTriggerEntityData :
	public TriggerEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F650;
	}
	Array<DamageAreaCharacterPoseOverride*> m_CharacterPoseOverrides; // 0x70
	MaterialDecl m_DamageMaterial; // 0x78
	float m_DamagePerSecond; // 0x7c
	float m_DamageTime; // 0x80
	TeamId m_TeamOfImmortalCharacters; // 0x84
	bool m_DamageCharacters; // 0x88
	bool m_DamageVehicles; // 0x89
	bool m_DamageBangers; // 0x8a
	bool m_ExcludeImmortalCharactersInTeam; // 0x8b
	bool m_ExcludeShieldedSoldiers; // 0x8c
	bool m_IsNeverTriggeredByPlayer; // 0x8d
	unsigned char _0x8e[0x2];
}; // size = 0x90

#endif // FBGEN_DamageAreaTriggerEntityData_H
