//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerTakeOverTriggerEntityData.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PlayerTakeOverTriggerEntityData_H
#define FBGEN_PlayerTakeOverTriggerEntityData_H

#include "TeamId.h"
#include "SpatialEntityData.h"

class PlayerTakeOverTriggerEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F5F0;
	}
	TeamId m_TeamId; // 0x60
	float m_TimeToLoseControl; // 0x64
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_PlayerTakeOverTriggerEntityData_H
