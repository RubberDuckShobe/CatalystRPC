//
// Generated with FrostbiteGen by Chod
// File: SDK\ReadVector3AndQuaternionGameState.h
// Created: Wed Mar 10 19:02:41 2021
//

#ifndef FBGEN_ReadVector3AndQuaternionGameState_H
#define FBGEN_ReadVector3AndQuaternionGameState_H

#include "AntRef.h"
#include "ReadAntGameStateData.h"

class ReadVector3AndQuaternionGameState :
	public ReadAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818300;
	}
	AntRef m_GameStateVec; // 0x18
	AntRef m_GameStateQuat; // 0x2c
}; // size = 0x40

#endif // FBGEN_ReadVector3AndQuaternionGameState_H
