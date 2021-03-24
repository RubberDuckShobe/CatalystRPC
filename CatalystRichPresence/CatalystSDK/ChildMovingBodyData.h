//
// Generated with FrostbiteGen by Chod
// File: SDK\ChildMovingBodyData.h
// Created: Wed Mar 10 19:08:13 2021
//

#ifndef FBGEN_ChildMovingBodyData_H
#define FBGEN_ChildMovingBodyData_H

#include "LinearMovingBodyData.h"

class ChildMovingBodyData :
	public LinearMovingBodyData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816740;
	}
	float m_InputDelay; // 0x60
	float m_Speed; // 0x64
	int m_InputAction; // 0x68
	float m_TriggerImpulse; // 0x6c
	bool m_IsOneShotInput; // 0x70
	unsigned char _0x71[0xf];
}; // size = 0x80

#endif // FBGEN_ChildMovingBodyData_H
