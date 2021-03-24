//
// Generated with FrostbiteGen by Chod
// File: SDK\RandomDelayEntityData.h
// Created: Wed Mar 10 19:02:45 2021
//

#ifndef FBGEN_RandomDelayEntityData_H
#define FBGEN_RandomDelayEntityData_H

#include "Realm.h"
#include "TimeDeltaType.h"
#include "EntityData.h"

class RandomDelayEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6D70;
	}
	float m_MinDelay; // 0x18
	float m_MaxDelay; // 0x1c
	Realm m_Realm; // 0x20
	TimeDeltaType m_TimeDeltaType; // 0x24
	bool m_AutoStart; // 0x28
	bool m_RunOnce; // 0x29
	bool m_TrueRandom; // 0x2a
	unsigned char _0x2b[0x5];
}; // size = 0x30

#endif // FBGEN_RandomDelayEntityData_H
