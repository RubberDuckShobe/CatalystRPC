//
// Generated with FrostbiteGen by Chod
// File: SDK\Or4EntityData.h
// Created: Wed Mar 10 19:05:26 2021
//

#ifndef FBGEN_Or4EntityData_H
#define FBGEN_Or4EntityData_H

#include "Realm.h"
#include "EntityData.h"

class Or4EntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7310;
	}
	Realm m_Realm; // 0x18
	bool m_In1; // 0x1c
	bool m_In2; // 0x1d
	bool m_In3; // 0x1e
	bool m_In4; // 0x1f
}; // size = 0x20

#endif // FBGEN_Or4EntityData_H
