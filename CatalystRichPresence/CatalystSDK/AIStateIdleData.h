//
// Generated with FrostbiteGen by Chod
// File: SDK\AIStateIdleData.h
// Created: Wed Mar 10 19:08:54 2021
//

#ifndef FBGEN_AIStateIdleData_H
#define FBGEN_AIStateIdleData_H

#include "AIStateData.h"

class AIStateIdleData :
	public AIStateData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B8050;
	}
	float m_IdleTime; // 0x28
	bool m_FocusOnEnemy; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_AIStateIdleData_H
