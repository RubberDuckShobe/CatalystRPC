//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagGroupEntityData.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionFlagGroupEntityData_H
#define FBGEN_PamProgressionFlagGroupEntityData_H

#include "PamProgressionFlagGroup.h"
#include "EntityData.h"

class PamProgressionFlagGroupEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873420;
	}
	PamProgressionFlagGroup* m_FlagGroup; // 0x18
}; // size = 0x20

#endif // FBGEN_PamProgressionFlagGroupEntityData_H
