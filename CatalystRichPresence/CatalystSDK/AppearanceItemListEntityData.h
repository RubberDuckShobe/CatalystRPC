//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceItemListEntityData.h
// Created: Wed Mar 10 19:08:40 2021
//

#ifndef FBGEN_AppearanceItemListEntityData_H
#define FBGEN_AppearanceItemListEntityData_H

#include "Realm.h"
#include "AppearanceItemList.h"
#include "EntityData.h"

class AppearanceItemListEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B4EF0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	AppearanceItemList* m_ItemList; // 0x20
	int m_Start; // 0x28
	int m_ItemIndex; // 0x2c
	bool m_RandomlySelect; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_AppearanceItemListEntityData_H
