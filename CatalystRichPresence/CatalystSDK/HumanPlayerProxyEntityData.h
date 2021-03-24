//
// Generated with FrostbiteGen by Chod
// File: SDK\HumanPlayerProxyEntityData.h
// Created: Wed Mar 10 19:06:33 2021
//

#ifndef FBGEN_HumanPlayerProxyEntityData_H
#define FBGEN_HumanPlayerProxyEntityData_H

#include "EntityData.h"

class HumanPlayerProxyEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BAB0;
	}
	bool m_EnableOnDiedOnMeleeEvent; // 0x18
	bool m_EnableOnDiedInWaterEvent; // 0x19
	unsigned char _0x1a[0x6];
}; // size = 0x20

#endif // FBGEN_HumanPlayerProxyEntityData_H
