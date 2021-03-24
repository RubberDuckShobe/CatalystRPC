//
// Generated with FrostbiteGen by Chod
// File: SDK\MovementActionGroupData.h
// Created: Wed Mar 10 19:05:45 2021
//

#ifndef FBGEN_MovementActionGroupData_H
#define FBGEN_MovementActionGroupData_H

#include "Array.h"
#include "MovementActionData.h"

class MovementActionGroupData :
	public MovementActionData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820010;
	}
	Array<MovementActionData*> m_Actions; // 0x10
	bool m_RunSimultaneously; // 0x18
	bool m_RestartChildren; // 0x19
	unsigned char _0x1a[0x6];
}; // size = 0x20

#endif // FBGEN_MovementActionGroupData_H
