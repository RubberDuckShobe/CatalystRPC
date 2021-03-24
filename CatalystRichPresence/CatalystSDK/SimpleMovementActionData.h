//
// Generated with FrostbiteGen by Chod
// File: SDK\SimpleMovementActionData.h
// Created: Wed Mar 10 19:01:26 2021
//

#ifndef FBGEN_SimpleMovementActionData_H
#define FBGEN_SimpleMovementActionData_H

#include "SimpleMovementActionBaseData.h"

class SimpleMovementActionData :
	public SimpleMovementActionBaseData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FE90;
	}
	float m_Level; // 0x20
	int m_Action; // 0x24
	int m_SpecialAnimationIndex; // 0x28
	bool m_Teleport; // 0x2c
	bool m_Respawn; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_SimpleMovementActionData_H
