//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSubLevelLoadTriggersComponent.h
// Created: Wed Mar 10 19:03:45 2021
//

#ifndef FBGEN_PamSubLevelLoadTriggersComponent_H
#define FBGEN_PamSubLevelLoadTriggersComponent_H

#include "Array.h"
#include "LevelDescriptionComponent.h"

class PamSubLevelLoadTriggersComponent :
	public LevelDescriptionComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428817F0;
	}
	Array<PamSubLevelLoadTrigger> m_LoadTriggers; // 0x10
}; // size = 0x18

#endif // FBGEN_PamSubLevelLoadTriggersComponent_H
