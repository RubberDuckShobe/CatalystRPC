//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRandomActionSelectorEntityData.h
// Created: Wed Mar 10 19:04:07 2021
//

#ifndef FBGEN_PamRandomActionSelectorEntityData_H
#define FBGEN_PamRandomActionSelectorEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamRandomActionSelectorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D980;
	}
	Realm m_Realm; // 0x18
	bool m_SelectActionsDeterministically; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_PamRandomActionSelectorEntityData_H
