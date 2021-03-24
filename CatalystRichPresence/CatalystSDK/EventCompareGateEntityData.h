//
// Generated with FrostbiteGen by Chod
// File: SDK\EventCompareGateEntityData.h
// Created: Wed Mar 10 19:06:54 2021
//

#ifndef FBGEN_EventCompareGateEntityData_H
#define FBGEN_EventCompareGateEntityData_H

#include "EventCompareGateType.h"
#include "Realm.h"
#include "EntityData.h"

class EventCompareGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B150;
	}
	int m_Value; // 0x18
	EventCompareGateType m_CompareType; // 0x1c
	Realm m_Realm; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_EventCompareGateEntityData_H
