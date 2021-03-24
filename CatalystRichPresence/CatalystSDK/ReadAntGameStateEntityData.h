//
// Generated with FrostbiteGen by Chod
// File: SDK\ReadAntGameStateEntityData.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_ReadAntGameStateEntityData_H
#define FBGEN_ReadAntGameStateEntityData_H

#include "Array.h"
#include "EntityData.h"

class ReadAntGameStateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817FA0;
	}
	Array<ReadAntGameStateData*> m_AntGameStates; // 0x18
	int m_NumProperties; // 0x20
	int m_NumAntAssets; // 0x24
	bool m_StartReadingContinouslyOnSpawn; // 0x28
	bool m_ReadOnceOnSpawn; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_ReadAntGameStateEntityData_H
