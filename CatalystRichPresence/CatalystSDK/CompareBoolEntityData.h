//
// Generated with FrostbiteGen by Chod
// File: SDK\CompareBoolEntityData.h
// Created: Wed Mar 10 19:07:38 2021
//

#ifndef FBGEN_CompareBoolEntityData_H
#define FBGEN_CompareBoolEntityData_H

#include "Realm.h"
#include "EntityData.h"

class CompareBoolEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E8330;
	}
	Realm m_Realm; // 0x18
	bool m_Bool; // 0x1c
	bool m_TriggerOnPropertyChange; // 0x1d
	bool m_TriggerOnStart; // 0x1e
	bool m_AlwaysSend; // 0x1f
}; // size = 0x20

#endif // FBGEN_CompareBoolEntityData_H
