//
// Generated with FrostbiteGen by Chod
// File: SDK\JumpStateData.h
// Created: Wed Mar 10 19:06:24 2021
//

#ifndef FBGEN_JumpStateData_H
#define FBGEN_JumpStateData_H

#include "CharacterStateData.h"

class JumpStateData :
	public CharacterStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C200;
	}
	float m_JumpHeight; // 0x18
	float m_JumpEffectSize; // 0x1c
}; // size = 0x20

#endif // FBGEN_JumpStateData_H
