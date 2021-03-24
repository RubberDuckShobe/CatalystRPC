//
// Generated with FrostbiteGen by Chod
// File: SDK\NotEntityData.h
// Created: Wed Mar 10 19:05:32 2021
//

#ifndef FBGEN_NotEntityData_H
#define FBGEN_NotEntityData_H

#include "Realm.h"
#include "EntityData.h"

class NotEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7490;
	}
	Realm m_Realm; // 0x18
	bool m_In; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_NotEntityData_H
