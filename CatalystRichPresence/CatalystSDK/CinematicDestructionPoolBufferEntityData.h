//
// Generated with FrostbiteGen by Chod
// File: SDK\CinematicDestructionPoolBufferEntityData.h
// Created: Wed Mar 10 19:08:12 2021
//

#ifndef FBGEN_CinematicDestructionPoolBufferEntityData_H
#define FBGEN_CinematicDestructionPoolBufferEntityData_H

#include "EntityData.h"

class CinematicDestructionPoolBufferEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142848730;
	}
	int m_CpuPoolAdjustment; // 0x18
	int m_GpuPoolAdjustment; // 0x1c
	bool m_Enabled; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_CinematicDestructionPoolBufferEntityData_H
