//
// Generated with FrostbiteGen by Chod
// File: SDK\StopWatchEntityData.h
// Created: Wed Mar 10 19:00:52 2021
//

#ifndef FBGEN_StopWatchEntityData_H
#define FBGEN_StopWatchEntityData_H

#include "Realm.h"
#include "UpdatePass.h"
#include "EntityData.h"

class StopWatchEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E61D0;
	}
	Realm m_Realm; // 0x18
	UpdatePass m_UpdatePass; // 0x1c
	float m_Multiplier; // 0x20
	float m_TriggerOnTime; // 0x24
}; // size = 0x28

#endif // FBGEN_StopWatchEntityData_H
