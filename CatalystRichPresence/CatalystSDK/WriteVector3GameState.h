//
// Generated with FrostbiteGen by Chod
// File: SDK\WriteVector3GameState.h
// Created: Wed Mar 10 18:58:42 2021
//

#ifndef FBGEN_WriteVector3GameState_H
#define FBGEN_WriteVector3GameState_H

#include "AntRef.h"
#include "Vec3.h"
#include "WriteAntGameStateData.h"

class WriteVector3GameState :
	public WriteAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428180C0;
	}
	AntRef m_GameState; // 0x18
	unsigned char _0x2c[0x4];
	Vec3 m_Value; // 0x30
}; // size = 0x40

#endif // FBGEN_WriteVector3GameState_H
