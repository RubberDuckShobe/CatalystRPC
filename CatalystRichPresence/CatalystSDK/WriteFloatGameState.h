//
// Generated with FrostbiteGen by Chod
// File: SDK\WriteFloatGameState.h
// Created: Wed Mar 10 18:58:42 2021
//

#ifndef FBGEN_WriteFloatGameState_H
#define FBGEN_WriteFloatGameState_H

#include "AntRef.h"
#include "WriteAntGameStateData.h"

class WriteFloatGameState :
	public WriteAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818240;
	}
	AntRef m_GameState; // 0x18
	float m_Value; // 0x2c
}; // size = 0x30

#endif // FBGEN_WriteFloatGameState_H
