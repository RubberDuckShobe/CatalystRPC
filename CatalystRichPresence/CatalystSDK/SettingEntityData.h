//
// Generated with FrostbiteGen by Chod
// File: SDK\SettingEntityData.h
// Created: Wed Mar 10 19:01:36 2021
//

#ifndef FBGEN_SettingEntityData_H
#define FBGEN_SettingEntityData_H

#include "Realm.h"
#include "EntityData.h"

class SettingEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5CF0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_BoolSettingName; // 0x20
	const char* m_IntSettingName; // 0x28
	const char* m_FloatSettingName; // 0x30
}; // size = 0x38

#endif // FBGEN_SettingEntityData_H
