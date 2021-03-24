//
// Generated with FrostbiteGen by Chod
// File: SDK\BreakablePartComponentData.h
// Created: Wed Mar 10 19:08:23 2021
//

#ifndef FBGEN_BreakablePartComponentData_H
#define FBGEN_BreakablePartComponentData_H

#include "DestructionPartComponentData.h"

class BreakablePartComponentData :
	public DestructionPartComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D71A0;
	}
	unsigned int m_HealthPercentage; // 0x80
	bool m_Collapsable; // 0x84
	bool m_DestroyNearbyStaticEntities; // 0x85
	unsigned char _0x86[0xa];
}; // size = 0x90

#endif // FBGEN_BreakablePartComponentData_H
