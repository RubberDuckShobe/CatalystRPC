//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterInVehicleScenarioEntityData.h
// Created: Wed Mar 10 19:08:17 2021
//

#ifndef FBGEN_CharacterInVehicleScenarioEntityData_H
#define FBGEN_CharacterInVehicleScenarioEntityData_H

#include "Realm.h"
#include "AntRef.h"
#include "EntityData.h"

class CharacterInVehicleScenarioEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A250;
	}
	Realm m_Realm; // 0x18
	AntRef m_ScenarioAntRef; // 0x1c
	int m_LevelId; // 0x30
	int m_ScenarioId; // 0x34
	int m_ActorId; // 0x38
	int m_PartId; // 0x3c
	bool m_Enabled; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_CharacterInVehicleScenarioEntityData_H
