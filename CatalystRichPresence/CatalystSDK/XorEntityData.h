//
// Generated with FrostbiteGen by Chod
// File: SDK\XorEntityData.h
// Created: Wed Mar 10 18:58:42 2021
//

#ifndef FBGEN_XorEntityData_H
#define FBGEN_XorEntityData_H

#include "Realm.h"
#include "EntityData.h"

class XorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7370;
	}
	Realm m_Realm; // 0x18
	bool m_In1; // 0x1c
	bool m_In2; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_XorEntityData_H
