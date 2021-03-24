//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagInfoEntityData.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionFlagInfoEntityData_H
#define FBGEN_PamProgressionFlagInfoEntityData_H

#include "PamProgressionFlagGroup.h"
#include "PamProgressionFlag.h"
#include "EntityData.h"

class PamProgressionFlagInfoEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873480;
	}
	PamProgressionFlagGroup* m_FlagGroup; // 0x18
	PamProgressionFlag* m_Flag; // 0x20
}; // size = 0x28

#endif // FBGEN_PamProgressionFlagInfoEntityData_H
