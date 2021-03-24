//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGameStateAreaTriggerEntityData.h
// Created: Wed Mar 10 19:04:37 2021
//

#ifndef FBGEN_PamGameStateAreaTriggerEntityData_H
#define FBGEN_PamGameStateAreaTriggerEntityData_H

#include "AntRef.h"
#include "EntityData.h"

class PamGameStateAreaTriggerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D440;
	}
	AntRef m_GameState; // 0x18
	bool m_AutoStart; // 0x2c
	bool m_TriggerValue; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_PamGameStateAreaTriggerEntityData_H
