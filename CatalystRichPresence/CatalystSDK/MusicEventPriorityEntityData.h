//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicEventPriorityEntityData.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MusicEventPriorityEntityData_H
#define FBGEN_MusicEventPriorityEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class MusicEventPriorityEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C0A50;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<const char*> m_MusicEventNames; // 0x20
}; // size = 0x28

#endif // FBGEN_MusicEventPriorityEntityData_H
