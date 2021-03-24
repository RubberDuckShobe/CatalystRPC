//
// Generated with FrostbiteGen by Chod
// File: SDK\CountDownEntityData.h
// Created: Wed Mar 10 19:07:30 2021
//

#ifndef FBGEN_CountDownEntityData_H
#define FBGEN_CountDownEntityData_H

#include "Realm.h"
#include "EntityData.h"

class CountDownEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7250;
	}
	int m_StartValue; // 0x18
	Realm m_Realm; // 0x1c
	bool m_RunOnce; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_CountDownEntityData_H
