//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionDebugFlagEntityData.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionDebugFlagEntityData_H
#define FBGEN_PamProgressionDebugFlagEntityData_H

#include "EntityData.h"

class PamProgressionDebugFlagEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873540;
	}
	const char* m_FlagName; // 0x18
	int m_ValueToSet; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamProgressionDebugFlagEntityData_H
