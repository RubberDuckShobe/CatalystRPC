//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerFilterEntityData.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PlayerFilterEntityData_H
#define FBGEN_PlayerFilterEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PlayerFilterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AD30;
	}
	Realm m_Realm; // 0x18
	bool m_InvertFilter; // 0x1c
	bool m_ForwardToSpectators; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_PlayerFilterEntityData_H
