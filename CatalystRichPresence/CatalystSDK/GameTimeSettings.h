//
// Generated with FrostbiteGen by Chod
// File: SDK\GameTimeSettings.h
// Created: Wed Mar 10 19:06:39 2021
//

#ifndef FBGEN_GameTimeSettings_H
#define FBGEN_GameTimeSettings_H

#include "SystemSettings.h"

class GameTimeSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810920;
	}
	float m_JoinJobsTimeLimit; // 0x20
	float m_YieldTimeLimit; // 0x24
	int m_YieldTime; // 0x28
	float m_MaxSimFps; // 0x2c
	unsigned int m_ForceSimRate; // 0x30
	float m_MaxVariableFps; // 0x34
	float m_MaxInactiveVariableFps; // 0x38
	float m_ForceDeltaTime; // 0x3c
	int m_ForceDeltaTickCount; // 0x40
	int m_ClampTicks; // 0x44
	float m_TimeScale; // 0x48
	float m_DebugFrameDelay; // 0x4c
	int m_FixedSleepTime; // 0x50
	bool m_UseWaitableTimers; // 0x54
	bool m_DoubleNoTickWait; // 0x55
	bool m_VariableSimTickTimeEnable; // 0x56
	bool m_ForceUseSleepTimer; // 0x57
	bool m_ForceSinglePlayerFixedTick; // 0x58
	bool m_ForceMultiplayerOneTickMin; // 0x59
	bool m_EnableSinglePlayerFixedTick; // 0x5a
	bool m_AlternatingFramesSleepModeEnable; // 0x5b
	bool m_EnableServerJobInterpolation; // 0x5c
	unsigned char _0x5d[0x3];
}; // size = 0x60

#endif // FBGEN_GameTimeSettings_H
