//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionCommandEntityData.h
// Created: Wed Mar 10 19:07:14 2021
//

#ifndef FBGEN_DestructionCommandEntityData_H
#define FBGEN_DestructionCommandEntityData_H

#include "EntityData.h"

class DestructionCommandEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FCB0;
	}
	unsigned int m_InstanceCountDestroyedPerFrame; // 0x18
	unsigned int m_InstanceCountDestroyedPerType; // 0x1c
}; // size = 0x20

#endif // FBGEN_DestructionCommandEntityData_H
