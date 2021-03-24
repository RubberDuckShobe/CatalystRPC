//
// Generated with FrostbiteGen by Chod
// File: SDK\SelectEventEntityData.h
// Created: Wed Mar 10 19:02:29 2021
//

#ifndef FBGEN_SelectEventEntityData_H
#define FBGEN_SelectEventEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class SelectEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6EF0;
	}
	Realm m_Realm; // 0x18
	int m_Selected; // 0x1c
	Array<const char*> m_Events; // 0x20
}; // size = 0x28

#endif // FBGEN_SelectEventEntityData_H
