//
// Generated with FrostbiteGen by Chod
// File: SDK\WriteAntGameStateEntityData.h
// Created: Wed Mar 10 18:58:43 2021
//

#ifndef FBGEN_WriteAntGameStateEntityData_H
#define FBGEN_WriteAntGameStateEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class WriteAntGameStateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817F40;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<WriteAntGameStateData*> m_AntGameStates; // 0x20
	int m_NumProperties; // 0x28
	int m_NumAntAssets; // 0x2c
	bool m_StartWritingContinouslyOnSpawn; // 0x30
	bool m_WriteOnceOnSpawn; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_WriteAntGameStateEntityData_H
