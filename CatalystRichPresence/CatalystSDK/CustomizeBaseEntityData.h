//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomizeBaseEntityData.h
// Created: Wed Mar 10 19:07:21 2021
//

#ifndef FBGEN_CustomizeBaseEntityData_H
#define FBGEN_CustomizeBaseEntityData_H

#include "Realm.h"
#include "EntityData.h"

class CustomizeBaseEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AC70;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_CustomizeBaseEntityData_H
