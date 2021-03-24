//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCharacterSpawnTemplateData.h
// Created: Wed Mar 10 19:05:03 2021
//

#ifndef FBGEN_PamCharacterSpawnTemplateData_H
#define FBGEN_PamCharacterSpawnTemplateData_H

#include "AISpecialization.h"
#include "PamMeleeParameters.h"
#include "PamCharacterWeaponBlueprint.h"
#include "CharacterSpawnTemplateData.h"

class PamCharacterSpawnTemplateData :
	public CharacterSpawnTemplateData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B650;
	}
	AISpecialization* m_AISpecialization; // 0x40
	float m_HealthOverride; // 0x48
	int m_VoiceOverIndexStart; // 0x4c
	int m_VoiceOverIndexStop; // 0x50
	float m_CombatDropChanceOverride; // 0x54
	PamMeleeParameters m_MeleeParameters; // 0x58
	PamCharacterWeaponBlueprint* m_WeaponBlueprint; // 0x68
	bool m_IsNetworkedResource; // 0x70
	unsigned char _0x71[0x7];
}; // size = 0x78

#endif // FBGEN_PamCharacterSpawnTemplateData_H
