//
// Generated with FrostbiteGen by Chod
// File: SDK\InclusionSettingEntityData.h
// Created: Wed Mar 10 19:06:31 2021
//

#ifndef FBGEN_InclusionSettingEntityData_H
#define FBGEN_InclusionSettingEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class InclusionSettingEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AA90;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_Setting; // 0x20
	Array<const char*> m_Settings; // 0x28
}; // size = 0x30

#endif // FBGEN_InclusionSettingEntityData_H
