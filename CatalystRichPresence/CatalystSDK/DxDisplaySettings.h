//
// Generated with FrostbiteGen by Chod
// File: SDK\DxDisplaySettings.h
// Created: Wed Mar 10 19:07:06 2021
//

#ifndef FBGEN_DxDisplaySettings_H
#define FBGEN_DxDisplaySettings_H

#include "Array.h"
#include "BaseDisplaySettings.h"

class DxDisplaySettings :
	public BaseDisplaySettings // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142835440;
	}
	Array<int> m_DebugBreakIgnoredIDs; // 0x80
	unsigned int m_NvidiaMinDriverVersion; // 0x88
	unsigned char _0x8c[0x4];
	const char* m_AmdMinDriverVersion; // 0x90
	const char* m_AmdMinDriverPackagingVersion; // 0x98
	const char* m_IntelMinDriverVersion; // 0xa0
	bool m_WarpDriverEnable; // 0xa8
	bool m_DebugInfoEnable; // 0xa9
	bool m_DebugInfoOutputEnable; // 0xaa
	bool m_DebugBreakOnErrorEnable; // 0xab
	bool m_DebugBreakOnWarningEnable; // 0xac
	bool m_DebugBreakOnInfoEnable; // 0xad
	bool m_MultiGpuValidationEnable; // 0xae
	bool m_DxDiagDriverDetectionEnable; // 0xaf
	bool m_NvApiEnable; // 0xb0
	bool m_MinDriverRequired; // 0xb1
	bool m_DriverWarningPopupEnable; // 0xb2
	bool m_PixProfilingEnable; // 0xb3
	bool m_RenderDocProfilingEnable; // 0xb4
	unsigned char _0xb5[0x3];
}; // size = 0xb8

#endif // FBGEN_DxDisplaySettings_H
