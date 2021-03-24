//
// Generated with FrostbiteGen by Chod
// File: SDK\MovementActionRandomizerData.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MovementActionRandomizerData_H
#define FBGEN_MovementActionRandomizerData_H

#include "Array.h"
#include "MovementActionData.h"

class MovementActionRandomizerData :
	public MovementActionData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FFB0;
	}
	Array<MovementActionData*> m_Actions; // 0x10
	bool m_ReinsertIntoRandomizedListAfterUse; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_MovementActionRandomizerData_H
