//
// Generated with FrostbiteGen by Chod
// File: SDK\WriteIntGameState.h
// Created: Wed Mar 10 18:58:42 2021
//

#ifndef FBGEN_WriteIntGameState_H
#define FBGEN_WriteIntGameState_H

#include "AntRef.h"
#include "WriteAntGameStateData.h"

class WriteIntGameState :
	public WriteAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428181E0;
	}
	AntRef m_GameState; // 0x18
	int m_Value; // 0x2c
}; // size = 0x30

#endif // FBGEN_WriteIntGameState_H
