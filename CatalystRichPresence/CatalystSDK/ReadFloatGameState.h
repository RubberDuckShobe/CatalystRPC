//
// Generated with FrostbiteGen by Chod
// File: SDK\ReadFloatGameState.h
// Created: Wed Mar 10 19:02:41 2021
//

#ifndef FBGEN_ReadFloatGameState_H
#define FBGEN_ReadFloatGameState_H

#include "AntRef.h"
#include "ReadAntGameStateData.h"

class ReadFloatGameState :
	public ReadAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818540;
	}
	AntRef m_GameState; // 0x18
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ReadFloatGameState_H
