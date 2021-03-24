//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterSpawnReferenceObjectData.h
// Created: Wed Mar 10 19:08:15 2021
//

#ifndef FBGEN_CharacterSpawnReferenceObjectData_H
#define FBGEN_CharacterSpawnReferenceObjectData_H

#include "CharacterSpawnTemplateData.h"
#include "SpawnReferenceObjectData.h"

class CharacterSpawnReferenceObjectData :
	public SpawnReferenceObjectData // size = 0x190
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820B50;
	}
	unsigned int m_VehicleEntryIndex; // 0x190
	unsigned char _0x194[0x4];
	CharacterSpawnTemplateData* m_Template; // 0x198
	CharacterSpawnTemplateData* m_Template2; // 0x1a0
	CharacterSpawnTemplateData* m_Template3; // 0x1a8
	int m_SpawnTemplateIndex; // 0x1b0
	float m_HumanTargetPreference; // 0x1b4
	int m_MenuShowOrder; // 0x1b8
	bool m_AllowFallbackOnNextAvailabeVehicleEntry; // 0x1bc
	bool m_SpawnVisible; // 0x1bd
	bool m_IsTarget; // 0x1be
	bool m_AffectMinimapPosition; // 0x1bf
	bool m_ShowAsLabelOnly; // 0x1c0
	bool m_ShowInMenu; // 0x1c1
	unsigned char _0x1c2[0xe];
}; // size = 0x1d0

#endif // FBGEN_CharacterSpawnReferenceObjectData_H
