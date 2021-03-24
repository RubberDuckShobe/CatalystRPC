//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagEntityData.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionFlagEntityData_H
#define FBGEN_PamProgressionFlagEntityData_H

#include "Realm.h"
#include "PamProgressionFlagGroup.h"
#include "PamProgressionFlag.h"
#include "EntityData.h"

class PamProgressionFlagEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428734E0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	PamProgressionFlagGroup* m_FlagGroup; // 0x20
	PamProgressionFlag* m_Flag; // 0x28
	int m_Value; // 0x30
	unsigned int m_GeneratedFlagNameHash; // 0x34
	bool m_ValueAsBool; // 0x38
	bool m_OnlySetValueOnEvent; // 0x39
	bool m_OnlyReadValueOnEvent; // 0x3a
	unsigned char _0x3b[0x5];
}; // size = 0x40

#endif // FBGEN_PamProgressionFlagEntityData_H
