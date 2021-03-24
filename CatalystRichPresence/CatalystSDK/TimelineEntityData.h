//
// Generated with FrostbiteGen by Chod
// File: SDK\TimelineEntityData.h
// Created: Wed Mar 10 19:00:15 2021
//

#ifndef FBGEN_TimelineEntityData_H
#define FBGEN_TimelineEntityData_H

#include "Realm.h"
#include "TimelineData.h"
#include "EntityData.h"

class TimelineEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283C5C0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	TimelineData* m_TimelineData; // 0x20
	float m_BlendInTime; // 0x28
	float m_BlendOutTime; // 0x2c
	float m_InitTime; // 0x30
	float m_StartTime; // 0x34
	float m_EndTime; // 0x38
	float m_JumpTime; // 0x3c
	float m_PlaybackRate; // 0x40
	float m_ExternalTime; // 0x44
	unsigned short m_UpdatePassFlags; // 0x48
	bool m_AutoPlay; // 0x4a
	bool m_UseRealTimeClock; // 0x4b
	bool m_AutoInitConnectedProperties; // 0x4c
	bool m_ResetTimeOnStarted; // 0x4d
	bool m_AllowAnimationCarryForward; // 0x4e
	bool m_SyncTimelines; // 0x4f
	unsigned char m_RuntimeFramerate; // 0x50
	bool m_Looping; // 0x51
	bool m_Infinite; // 0x52
	unsigned char _0x53[0x5];
}; // size = 0x58

#endif // FBGEN_TimelineEntityData_H
