//
// Generated with FrostbiteGen by Chod
// File: SDK\CompareFloatRangeEntityData.h
// Created: Wed Mar 10 19:07:38 2021
//

#ifndef FBGEN_CompareFloatRangeEntityData_H
#define FBGEN_CompareFloatRangeEntityData_H

#include "Realm.h"
#include "EntityData.h"

class CompareFloatRangeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E81B0;
	}
	Realm m_Realm; // 0x18
	float m_Value; // 0x1c
	float m_Min; // 0x20
	float m_Max; // 0x24
	bool m_TriggerOnPropertyChange; // 0x28
	bool m_TriggerOnStart; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_CompareFloatRangeEntityData_H
