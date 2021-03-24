//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDelayEntityData.h
// Created: Wed Mar 10 19:04:42 2021
//

#ifndef FBGEN_PamDelayEntityData_H
#define FBGEN_PamDelayEntityData_H

#include "Realm.h"
#include "TimeDeltaType.h"
#include "EntityData.h"

class PamDelayEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D560;
	}
	float m_Delay; // 0x18
	Realm m_Realm; // 0x1c
	TimeDeltaType m_TimeDeltaType; // 0x20
	bool m_UseRealTimeClock; // 0x24
	bool m_AutoStart; // 0x25
	bool m_RunOnce; // 0x26
	bool m_RemoveDuplicateEvents; // 0x27
}; // size = 0x28

#endif // FBGEN_PamDelayEntityData_H
