//
// Generated with FrostbiteGen by Chod
// File: SDK\PerfHudSettings.h
// Created: Wed Mar 10 19:03:14 2021
//

#ifndef FBGEN_PerfHudSettings_H
#define FBGEN_PerfHudSettings_H

#include "DataContainer.h"

class PerfHudSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2460;
	}
	const char* m_TimerCategorySetName; // 0x10
	int m_HudRightMargin; // 0x18
	int m_HudTopMargin; // 0x1c
	bool m_Enable; // 0x20
	bool m_DrawCpuEnable; // 0x21
	bool m_DrawGpuEnable; // 0x22
	bool m_DrawSpuEnable; // 0x23
	bool m_SimpleSummaryMode; // 0x24
	bool m_TimerCategorySetsEnable; // 0x25
	bool m_DrawUngroupedTimings; // 0x26
	bool m_DrawConfigFile; // 0x27
	unsigned char m_HudAlpha; // 0x28
	bool m_HudCompact; // 0x29
	bool m_DrawOverBudgetOnly; // 0x2a
	bool m_SimFramesOnly; // 0x2b
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PerfHudSettings_H
