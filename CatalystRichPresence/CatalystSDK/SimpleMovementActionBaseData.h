//
// Generated with FrostbiteGen by Chod
// File: SDK\SimpleMovementActionBaseData.h
// Created: Wed Mar 10 19:01:26 2021
//

#ifndef FBGEN_SimpleMovementActionBaseData_H
#define FBGEN_SimpleMovementActionBaseData_H

#include "SimpleMovementActionTimeData.h"
#include "MovementActionData.h"

class SimpleMovementActionBaseData :
	public MovementActionData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FF50;
	}
	SimpleMovementActionTimeData m_StartTimeInfo; // 0x10
	SimpleMovementActionTimeData m_RunTimeInfo; // 0x18
}; // size = 0x20

#endif // FBGEN_SimpleMovementActionBaseData_H
