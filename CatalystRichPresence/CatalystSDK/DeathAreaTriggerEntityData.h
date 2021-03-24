//
// Generated with FrostbiteGen by Chod
// File: SDK\DeathAreaTriggerEntityData.h
// Created: Wed Mar 10 19:07:18 2021
//

#ifndef FBGEN_DeathAreaTriggerEntityData_H
#define FBGEN_DeathAreaTriggerEntityData_H

#include "TriggerEntityData.h"

class DeathAreaTriggerEntityData :
	public TriggerEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B9F0;
	}
	float m_Damage; // 0x70
	float m_TimeToReturn; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_DeathAreaTriggerEntityData_H
