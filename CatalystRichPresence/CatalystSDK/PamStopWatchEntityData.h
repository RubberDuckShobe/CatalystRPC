//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStopWatchEntityData.h
// Created: Wed Mar 10 19:03:45 2021
//

#ifndef FBGEN_PamStopWatchEntityData_H
#define FBGEN_PamStopWatchEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamStopWatchEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DB00;
	}
	Realm m_Realm; // 0x18
	bool m_PauseWhenPaused; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_PamStopWatchEntityData_H
