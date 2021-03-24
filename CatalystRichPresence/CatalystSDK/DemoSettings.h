//
// Generated with FrostbiteGen by Chod
// File: SDK\DemoSettings.h
// Created: Wed Mar 10 19:07:15 2021
//

#ifndef FBGEN_DemoSettings_H
#define FBGEN_DemoSettings_H

#include "DataContainer.h"

class DemoSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810800;
	}
	const char* m_RecordDemoFileName; // 0x10
	const char* m_PlaybackDemoFileName; // 0x18
	const char* m_TimeDemo; // 0x20
	const char* m_LockToPlayerName; // 0x28
	unsigned int m_ChangePlayerInterval; // 0x30
	unsigned int m_ForcedDeltaTickCount; // 0x34
	unsigned int m_StartProfilingOnFrame; // 0x38
	unsigned int m_StopProfilingOnFrame; // 0x3c
	unsigned int m_TakeScreenshotOnFrame; // 0x40
	bool m_PauseOnStartup; // 0x44
	bool m_AllowOverwrite; // 0x45
	bool m_LogPerformance; // 0x46
	bool m_SuppressDebugLog; // 0x47
	bool m_ShutdownOnDemoComplete; // 0x48
	bool m_LoopingDemo; // 0x49
	bool m_LockToRandomPlayer; // 0x4a
	unsigned char _0x4b[0x5];
}; // size = 0x50

#endif // FBGEN_DemoSettings_H
