//
// Generated with FrostbiteGen by Chod
// File: SDK\PerformanceTrackerSettings.h
// Created: Wed Mar 10 19:03:13 2021
//

#ifndef FBGEN_PerformanceTrackerSettings_H
#define FBGEN_PerformanceTrackerSettings_H

#include "SystemSettings.h"

class PerformanceTrackerSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428108C0;
	}
	float m_Interval; // 0x20
	bool m_Enabled; // 0x24
	bool m_SupressPerformanceStatsOnIdle; // 0x25
	bool m_SupressPerformanceStatsUntilSpawned; // 0x26
	bool m_JuiceLogPerformance; // 0x27
}; // size = 0x28

#endif // FBGEN_PerformanceTrackerSettings_H
