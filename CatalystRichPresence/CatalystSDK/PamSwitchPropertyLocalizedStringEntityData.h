//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSwitchPropertyLocalizedStringEntityData.h
// Created: Wed Mar 10 19:03:44 2021
//

#ifndef FBGEN_PamSwitchPropertyLocalizedStringEntityData_H
#define FBGEN_PamSwitchPropertyLocalizedStringEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamSwitchPropertyLocalizedStringEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D4A0;
	}
	unsigned int m_InputCount; // 0x18
	int m_SelectIndex; // 0x1c
	Realm m_Realm; // 0x20
	bool m_UpdateOnPropertyChange; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PamSwitchPropertyLocalizedStringEntityData_H
