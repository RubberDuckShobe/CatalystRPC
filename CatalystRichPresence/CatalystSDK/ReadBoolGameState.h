//
// Generated with FrostbiteGen by Chod
// File: SDK\ReadBoolGameState.h
// Created: Wed Mar 10 19:02:41 2021
//

#ifndef FBGEN_ReadBoolGameState_H
#define FBGEN_ReadBoolGameState_H

#include "AntRef.h"
#include "ReadAntGameStateData.h"

class ReadBoolGameState :
	public ReadAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818480;
	}
	AntRef m_GameState; // 0x18
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ReadBoolGameState_H
