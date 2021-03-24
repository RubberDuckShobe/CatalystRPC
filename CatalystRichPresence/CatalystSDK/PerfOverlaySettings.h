//
// Generated with FrostbiteGen by Chod
// File: SDK\PerfOverlaySettings.h
// Created: Wed Mar 10 19:03:14 2021
//

#ifndef FBGEN_PerfOverlaySettings_H
#define FBGEN_PerfOverlaySettings_H

#include "DataContainer.h"

class PerfOverlaySettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837CA0;
	}
	unsigned int m_DrawGraphMethod; // 0x10
	unsigned int m_DrawFpsMethod; // 0x14
	float m_FcatWidth; // 0x18
	unsigned int m_LegendDisplayFormat; // 0x1c
	float m_FpsTimePeriod; // 0x20
	int m_FpsDisplayFormat; // 0x24
	float m_FpsDisplayScale; // 0x28
	int m_FpsDisplayOffsetX; // 0x2c
	int m_FpsDisplayOffsetY; // 0x30
	bool m_Enable; // 0x34
	bool m_DrawGraph; // 0x35
	bool m_DrawCpuGraph; // 0x36
	bool m_DrawGpuGraph; // 0x37
	bool m_DrawFrameGraph; // 0x38
	bool m_DrawVblankGraph; // 0x39
	bool m_DrawFps; // 0x3a
	bool m_DrawFcat; // 0x3b
	unsigned char m_FpsDisplayAlpha; // 0x3c
	bool m_TargetFpsIs60; // 0x3d
	bool m_GpuProfilerEnable; // 0x3e
	bool m_FrameFileLogEnable; // 0x3f
}; // size = 0x40

#endif // FBGEN_PerfOverlaySettings_H
