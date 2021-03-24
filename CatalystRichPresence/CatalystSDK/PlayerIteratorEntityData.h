//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerIteratorEntityData.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PlayerIteratorEntityData_H
#define FBGEN_PlayerIteratorEntityData_H

#include "Realm.h"
#include "TeamId.h"
#include "EntityData.h"

class PlayerIteratorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AA30;
	}
	Realm m_Realm; // 0x18
	TeamId m_Team; // 0x1c
	bool m_Alive; // 0x20
	bool m_RandomizeFromStart; // 0x21
	unsigned char _0x22[0x6];
}; // size = 0x28

#endif // FBGEN_PlayerIteratorEntityData_H
