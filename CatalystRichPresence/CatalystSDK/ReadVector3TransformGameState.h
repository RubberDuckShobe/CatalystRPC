//
// Generated with FrostbiteGen by Chod
// File: SDK\ReadVector3TransformGameState.h
// Created: Wed Mar 10 19:02:41 2021
//

#ifndef FBGEN_ReadVector3TransformGameState_H
#define FBGEN_ReadVector3TransformGameState_H

#include "AntRef.h"
#include "ReadAntGameStateData.h"

class ReadVector3TransformGameState :
	public ReadAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428183C0;
	}
	AntRef m_GameState; // 0x18
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ReadVector3TransformGameState_H
