//
// Generated with FrostbiteGen by Chod
// File: SDK\WriteBoolGameState.h
// Created: Wed Mar 10 18:58:43 2021
//

#ifndef FBGEN_WriteBoolGameState_H
#define FBGEN_WriteBoolGameState_H

#include "AntRef.h"
#include "WriteAntGameStateData.h"

class WriteBoolGameState :
	public WriteAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818180;
	}
	AntRef m_GameState; // 0x18
	bool m_Value; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_WriteBoolGameState_H
