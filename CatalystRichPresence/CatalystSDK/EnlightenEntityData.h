//
// Generated with FrostbiteGen by Chod
// File: SDK\EnlightenEntityData.h
// Created: Wed Mar 10 19:06:59 2021
//

#ifndef FBGEN_EnlightenEntityData_H
#define FBGEN_EnlightenEntityData_H

#include "Realm.h"
#include "EntityData.h"

class EnlightenEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842550;
	}
	int m_Priority; // 0x18
	Realm m_Realm; // 0x1c
	bool m_Enable; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_EnlightenEntityData_H
