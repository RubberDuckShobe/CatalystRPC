//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSelectableActionEntityData.h
// Created: Wed Mar 10 19:04:02 2021
//

#ifndef FBGEN_PamSelectableActionEntityData_H
#define FBGEN_PamSelectableActionEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamSelectableActionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D9E0;
	}
	Realm m_Realm; // 0x18
	unsigned int m_Priority; // 0x1c
	bool m_Enabled; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_PamSelectableActionEntityData_H
