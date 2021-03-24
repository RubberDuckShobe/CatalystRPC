//
// Generated with FrostbiteGen by Chod
// File: SDK\TimingViewSettings.h
// Created: Wed Mar 10 19:00:13 2021
//

#ifndef FBGEN_TimingViewSettings_H
#define FBGEN_TimingViewSettings_H

#include "DataContainer.h"

class TimingViewSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B23A0;
	}
	unsigned int m_FrameCount; // 0x10
	unsigned int m_FrameDelayCount; // 0x14
	unsigned int m_FrameCountToReport; // 0x18
	float m_TimeRange; // 0x1c
	float m_TimeOffset; // 0x20
	float m_LogThreshold; // 0x24
	float m_AutolockThreshold; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_AutolockNameFilter; // 0x30
	int m_LegendScreenOffset; // 0x38
	int m_LegendColumnWidth; // 0x3c
	int m_LegendDisplayMode; // 0x40
	int m_AverageFrameCount; // 0x44
	const char* m_SnoopEventName; // 0x48
	const char* m_FilterEventName; // 0x50
	double m_BarMinTime; // 0x58
	unsigned int m_BarHeight; // 0x60
	unsigned int m_BarPad; // 0x64
	int m_BarSyncProcessor; // 0x68
	int m_MaxCpuLegendColumnCount; // 0x6c
	int m_MaxGpuLegendColumnCount; // 0x70
	int m_MaxSpuLegendColumnCount; // 0x74
	unsigned int m_MaxFrameEventCount; // 0x78
	bool m_Enable; // 0x7c
	bool m_DrawEnable; // 0x7d
	bool m_DrawBarsEnable; // 0x7e
	bool m_DrawLegendEnable; // 0x7f
	bool m_DrawCpuLegendEnable; // 0x80
	bool m_DrawGpuLegendEnable; // 0x81
	bool m_DrawSpuLegendEnable; // 0x82
	bool m_SnoopEnable; // 0x83
	bool m_SnoopOnly; // 0x84
	bool m_SortByTime; // 0x85
	bool m_FilterEnable; // 0x86
	unsigned char _0x87[0x1];
}; // size = 0x88

#endif // FBGEN_TimingViewSettings_H
