//
// Generated with FrostbiteGen by Chod
// File: SDK\BaseAppearanceEventHelperEntityData.h
// Created: Wed Mar 10 19:08:32 2021
//

#ifndef FBGEN_BaseAppearanceEventHelperEntityData_H
#define FBGEN_BaseAppearanceEventHelperEntityData_H

#include "AppearanceItemData.h"
#include "EntityData.h"

class BaseAppearanceEventHelperEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B53D0;
	}
	AppearanceItemData* m_ItemAsset; // 0x18
	const char* m_ItemName; // 0x20
}; // size = 0x28

#endif // FBGEN_BaseAppearanceEventHelperEntityData_H
