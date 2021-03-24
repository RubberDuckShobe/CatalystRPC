//
// Generated with FrostbiteGen by Chod
// File: SDK\TeamData.h
// Created: Wed Mar 10 19:00:34 2021
//

#ifndef FBGEN_TeamData_H
#define FBGEN_TeamData_H

#include "CharacterBlueprint.h"
#include "FactionId.h"
#include "Array.h"
#include "TeamAsset.h"

class TeamData :
	public TeamAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BB70;
	}
	CharacterBlueprint* m_Soldier; // 0x18
	FactionId m_Faction; // 0x20
	unsigned char _0x24[0x4];
	Array<CharacterCustomizationAsset*> m_SoldierCustomization; // 0x28
	Array<VehicleCustomizationAsset*> m_VehicleCustomization; // 0x30
}; // size = 0x38

#endif // FBGEN_TeamData_H
