//
// Generated with FrostbiteGen by Chod
// File: SDK\WriteVector3AndQuaternionGameState.h
// Created: Wed Mar 10 18:58:42 2021
//

#ifndef FBGEN_WriteVector3AndQuaternionGameState_H
#define FBGEN_WriteVector3AndQuaternionGameState_H

#include "LinearTransform.h"
#include "AntRef.h"
#include "WriteAntGameStateData.h"

class WriteVector3AndQuaternionGameState :
	public WriteAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818000;
	}
	AntRef m_GameStateVec; // 0x18
	unsigned char _0x2c[0x4];
	LinearTransform m_Value; // 0x30
	AntRef m_GameStateQuat; // 0x70
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_WriteVector3AndQuaternionGameState_H
