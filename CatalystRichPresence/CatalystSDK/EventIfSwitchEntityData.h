//
// Generated with FrostbiteGen by Chod
// File: SDK\EventIfSwitchEntityData.h
// Created: Wed Mar 10 19:06:53 2021
//

#ifndef FBGEN_EventIfSwitchEntityData_H
#define FBGEN_EventIfSwitchEntityData_H

#include "EntityData.h"

class EventIfSwitchEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AF10;
	}
	bool m_StartState; // 0x18
	bool m_RunOnce; // 0x19
	unsigned char _0x1a[0x6];
}; // size = 0x20

#endif // FBGEN_EventIfSwitchEntityData_H
