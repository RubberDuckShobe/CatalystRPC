//
// Generated with FrostbiteGen by Chod
// File: SDK\SwitchPropertyStringEntityData.h
// Created: Wed Mar 10 19:00:37 2021
//

#ifndef FBGEN_SwitchPropertyStringEntityData_H
#define FBGEN_SwitchPropertyStringEntityData_H

#include "Array.h"
#include "Realm.h"
#include "EntityData.h"

class SwitchPropertyStringEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E60B0;
	}
	Array<const char*> m_StringProperties; // 0x18
	Realm m_Realm; // 0x20
	bool m_RestrictToSelected; // 0x24
	bool m_UpdateOnPropertyChange; // 0x25
	unsigned char _0x26[0x2];
}; // size = 0x28

#endif // FBGEN_SwitchPropertyStringEntityData_H
