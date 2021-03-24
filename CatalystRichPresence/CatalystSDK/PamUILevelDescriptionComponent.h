//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUILevelDescriptionComponent.h
// Created: Wed Mar 10 19:03:30 2021
//

#ifndef FBGEN_PamUILevelDescriptionComponent_H
#define FBGEN_PamUILevelDescriptionComponent_H

#include "PamUILevelLoadData.h"
#include "LevelDescriptionComponent.h"

class PamUILevelDescriptionComponent :
	public LevelDescriptionComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881970;
	}
	PamUILevelLoadData* m_LevelLoadData; // 0x10
}; // size = 0x18

#endif // FBGEN_PamUILevelDescriptionComponent_H
