//
// Generated with FrostbiteGen by Chod
// File: SDK\AINavPowerPathfinderData.h
// Created: Wed Mar 10 19:08:58 2021
//

#ifndef FBGEN_AINavPowerPathfinderData_H
#define FBGEN_AINavPowerPathfinderData_H

#include "AIPathfinderData.h"

class AINavPowerPathfinderData :
	public AIPathfinderData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B8410;
	}
	unsigned int m_PreferredPathfindingIndex; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_AINavPowerPathfinderData_H
