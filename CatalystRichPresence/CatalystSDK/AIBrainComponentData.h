//
// Generated with FrostbiteGen by Chod
// File: SDK\AIBrainComponentData.h
// Created: Wed Mar 10 19:09:00 2021
//

#ifndef FBGEN_AIBrainComponentData_H
#define FBGEN_AIBrainComponentData_H

#include "AISpecialization.h"
#include "GameComponentData.h"

class AIBrainComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B77B0;
	}
	AISpecialization* m_OverrideSpecialization; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_AIBrainComponentData_H
