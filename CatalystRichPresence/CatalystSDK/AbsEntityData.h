//
// Generated with FrostbiteGen by Chod
// File: SDK\AbsEntityData.h
// Created: Wed Mar 10 19:08:49 2021
//

#ifndef FBGEN_AbsEntityData_H
#define FBGEN_AbsEntityData_H

#include "Realm.h"
#include "EntityData.h"

class AbsEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5ED0;
	}
	Realm m_Realm; // 0x18
	float m_In; // 0x1c
}; // size = 0x20

#endif // FBGEN_AbsEntityData_H
