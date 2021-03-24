//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertyStatusEntityData.h
// Created: Wed Mar 10 19:02:49 2021
//

#ifndef FBGEN_PropertyStatusEntityData_H
#define FBGEN_PropertyStatusEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PropertyStatusEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1F60;
	}
	Realm m_Realm; // 0x18
	int m_TypeHash; // 0x1c
	int m_InHash; // 0x20
	int m_OutHash; // 0x24
	bool m_AlwaysSendEvents; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_PropertyStatusEntityData_H
