//
// Generated with FrostbiteGen by Chod
// File: SDK\DelayEntityData.h
// Created: Wed Mar 10 19:07:15 2021
//

#ifndef FBGEN_DelayEntityData_H
#define FBGEN_DelayEntityData_H

#include "Realm.h"
#include "TimeDeltaType.h"
#include "EntityData.h"

class DelayEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6DD0;
	}
	float m_Delay; // 0x18
	Realm m_Realm; // 0x1c
	TimeDeltaType m_TimeDeltaType; // 0x20
	bool m_AutoStart; // 0x24
	bool m_RunOnce; // 0x25
	bool m_RemoveDuplicateEvents; // 0x26
	unsigned char _0x27[0x1];
}; // size = 0x28

#endif // FBGEN_DelayEntityData_H
