//
// Generated with FrostbiteGen by Chod
// File: SDK\NPSEntityData.h
// Created: Wed Mar 10 19:05:39 2021
//

#ifndef FBGEN_NPSEntityData_H
#define FBGEN_NPSEntityData_H

#include "Realm.h"
#include "EntityData.h"

class NPSEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872880;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_NPSEntityData_H
