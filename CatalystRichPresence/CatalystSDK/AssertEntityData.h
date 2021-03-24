//
// Generated with FrostbiteGen by Chod
// File: SDK\AssertEntityData.h
// Created: Wed Mar 10 19:08:39 2021
//

#ifndef FBGEN_AssertEntityData_H
#define FBGEN_AssertEntityData_H

#include "Realm.h"
#include "EntityData.h"

class AssertEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820130;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_Text; // 0x20
	bool m_Pass; // 0x28
	bool m_TriggerOnce; // 0x29
	bool m_TriggerOnPassChanged; // 0x2a
	bool m_EnabledInGameview; // 0x2b
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_AssertEntityData_H
