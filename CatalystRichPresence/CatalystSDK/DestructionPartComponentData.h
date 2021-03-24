//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionPartComponentData.h
// Created: Wed Mar 10 19:07:14 2021
//

#ifndef FBGEN_DestructionPartComponentData_H
#define FBGEN_DestructionPartComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class DestructionPartComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282D100;
	}
	Array<GameObjectData*> m_Objects; // 0x70
	unsigned int m_PartIndex; // 0x78
	bool m_Fixed; // 0x7c
	bool m_Fragile; // 0x7d
	unsigned char _0x7e[0x2];
}; // size = 0x80

#endif // FBGEN_DestructionPartComponentData_H
