//
// Generated with FrostbiteGen by Chod
// File: SDK\ReadEnumerationGameState.h
// Created: Wed Mar 10 19:02:41 2021
//

#ifndef FBGEN_ReadEnumerationGameState_H
#define FBGEN_ReadEnumerationGameState_H

#include "AntRef.h"
#include "ReadAntGameStateData.h"

class ReadEnumerationGameState :
	public ReadAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428185A0;
	}
	AntRef m_GameState; // 0x18
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ReadEnumerationGameState_H
