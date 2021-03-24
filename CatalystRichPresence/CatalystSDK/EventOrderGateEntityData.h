//
// Generated with FrostbiteGen by Chod
// File: SDK\EventOrderGateEntityData.h
// Created: Wed Mar 10 19:06:53 2021
//

#ifndef FBGEN_EventOrderGateEntityData_H
#define FBGEN_EventOrderGateEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class EventOrderGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6E30;
	}
	Realm m_Realm; // 0x18
	unsigned int m_EventCount; // 0x1c
	Array<unsigned int> m_EventCountdowns; // 0x20
	Array<int> m_SourceHashes; // 0x28
	bool m_Enabled; // 0x30
	bool m_DisableOnOpen; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_EventOrderGateEntityData_H
