//
// Generated with FrostbiteGen by Chod
// File: SDK\CompareIntRangeEntityData.h
// Created: Wed Mar 10 19:07:37 2021
//

#ifndef FBGEN_CompareIntRangeEntityData_H
#define FBGEN_CompareIntRangeEntityData_H

#include "Realm.h"
#include "EntityData.h"

class CompareIntRangeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E8150;
	}
	Realm m_Realm; // 0x18
	int m_Value; // 0x1c
	int m_Min; // 0x20
	int m_Max; // 0x24
	bool m_TriggerOnPropertyChange; // 0x28
	bool m_TriggerOnStart; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_CompareIntRangeEntityData_H
