//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterHealthComponentData.h
// Created: Wed Mar 10 19:08:17 2021
//

#ifndef FBGEN_CharacterHealthComponentData_H
#define FBGEN_CharacterHealthComponentData_H

#include "ControllableHealthComponentData.h"

class CharacterHealthComponentData :
	public ControllableHealthComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817040;
	}
	float m_MaxHealth; // 0x70
	float m_TimeForCorpse; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_CharacterHealthComponentData_H
