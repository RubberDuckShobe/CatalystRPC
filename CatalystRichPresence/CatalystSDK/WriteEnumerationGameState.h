//
// Generated with FrostbiteGen by Chod
// File: SDK\WriteEnumerationGameState.h
// Created: Wed Mar 10 18:58:43 2021
//

#ifndef FBGEN_WriteEnumerationGameState_H
#define FBGEN_WriteEnumerationGameState_H

#include "AntRef.h"
#include "WriteAntGameStateData.h"

class WriteEnumerationGameState :
	public WriteAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428182A0;
	}
	AntRef m_GameState; // 0x18
	int m_Value; // 0x2c
}; // size = 0x30

#endif // FBGEN_WriteEnumerationGameState_H
