//
// Generated with FrostbiteGen by Chod
// File: SDK\BoolEntityData.h
// Created: Wed Mar 10 19:08:26 2021
//

#ifndef FBGEN_BoolEntityData_H
#define FBGEN_BoolEntityData_H

#include "Realm.h"
#include "EntityData.h"

class BoolEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5510;
	}
	Realm m_Realm; // 0x18
	bool m_DefaultValue; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_BoolEntityData_H
