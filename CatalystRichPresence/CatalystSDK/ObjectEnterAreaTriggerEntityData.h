//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectEnterAreaTriggerEntityData.h
// Created: Wed Mar 10 19:05:31 2021
//

#ifndef FBGEN_ObjectEnterAreaTriggerEntityData_H
#define FBGEN_ObjectEnterAreaTriggerEntityData_H

#include "Realm.h"
#include "UpdatePass.h"
#include "EntityData.h"

class ObjectEnterAreaTriggerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F590;
	}
	Realm m_Realm; // 0x18
	UpdatePass m_UpdatePass; // 0x1c
	bool m_AutoStart; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_ObjectEnterAreaTriggerEntityData_H
