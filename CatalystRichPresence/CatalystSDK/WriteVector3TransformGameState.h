//
// Generated with FrostbiteGen by Chod
// File: SDK\WriteVector3TransformGameState.h
// Created: Wed Mar 10 18:58:42 2021
//

#ifndef FBGEN_WriteVector3TransformGameState_H
#define FBGEN_WriteVector3TransformGameState_H

#include "AntRef.h"
#include "LinearTransform.h"
#include "WriteAntGameStateData.h"

class WriteVector3TransformGameState :
	public WriteAntGameStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818060;
	}
	AntRef m_GameState; // 0x18
	unsigned char _0x2c[0x4];
	LinearTransform m_Value; // 0x30
}; // size = 0x70

#endif // FBGEN_WriteVector3TransformGameState_H
