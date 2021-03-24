//
// Generated with FrostbiteGen by Chod
// File: SDK\SpeedEventGateEntityData.h
// Created: Wed Mar 10 19:01:02 2021
//

#ifndef FBGEN_SpeedEventGateEntityData_H
#define FBGEN_SpeedEventGateEntityData_H

#include "EntityData.h"

class SpeedEventGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B0F0;
	}
	float m_MinSpeed; // 0x18
	float m_MaxSpeed; // 0x1c
}; // size = 0x20

#endif // FBGEN_SpeedEventGateEntityData_H
