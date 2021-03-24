//
// Generated with FrostbiteGen by Chod
// File: SDK\HumanPlayerEntityData.h
// Created: Wed Mar 10 19:06:33 2021
//

#ifndef FBGEN_HumanPlayerEntityData_H
#define FBGEN_HumanPlayerEntityData_H

#include "HumanPlayerProxyEntityData.h"

class HumanPlayerEntityData :
	public HumanPlayerProxyEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BA50;
	}
	float m_PlayerKilledDelay; // 0x20
	float m_PostReviveShortRespawnTime; // 0x24
	int m_MaxReviveCount; // 0x28
	float m_GlobalRespawnTime; // 0x2c
	float m_GlobalRespawnTimeThreshold; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_HumanPlayerEntityData_H
