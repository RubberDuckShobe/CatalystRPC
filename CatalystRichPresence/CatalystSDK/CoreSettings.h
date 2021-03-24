//
// Generated with FrostbiteGen by Chod
// File: SDK\CoreSettings.h
// Created: Wed Mar 10 19:07:31 2021
//

#ifndef FBGEN_CoreSettings_H
#define FBGEN_CoreSettings_H

#include "CoreLogLevel.h"
#include "LocalPlayerId.h"
#include "HardwareProfile.h"
struct CoreSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B30C8;
	}
	const char* m_Host; // 0x0
	const char* m_HostUser; // 0x8
	const char* m_HostUserDomain; // 0x10
	const char* m_InitSeed; // 0x18
	CoreLogLevel m_LogLevel; // 0x20
	CoreLogLevel m_DialogLevel; // 0x24
	unsigned int m_DebugOutputMode; // 0x28
	unsigned int m_BreakpadMode; // 0x2c
	int m_RandomTimeSeed; // 0x30
	int m_RandomTickSeed; // 0x34
	int m_RandomSessionId; // 0x38
	LocalPlayerId m_LocalPlayerIdToCommand; // 0x3c
	const char* m_GameConfigurationName; // 0x40
	HardwareProfile m_HardwareProfile; // 0x48
	float m_HardwareCpuBias; // 0x4c
	float m_HardwareGpuBias; // 0x50
	unsigned char _0x54[0x4];
	const char* m_ProfileDirectoryName; // 0x58
	float m_ScatterJobYieldGranularity; // 0x60
	unsigned char _0x64[0x4];
	const char* m_AvailableLanguages; // 0x68
	float m_WorldSize; // 0x70
	bool m_LiveEditingEnable; // 0x74
	bool m_UserLogEnabled; // 0x75
	bool m_DisplayAsserts; // 0x76
	bool m_CrashOnFatalErrors; // 0x77
	bool m_AsyncCallstackResolution; // 0x78
	bool m_UseStorageServer; // 0x79
	bool m_EnableLocalization; // 0x7a
	bool m_EnableSpikePacketBuffering; // 0x7b
	bool m_StreamInstallAllowPlayFromBluray; // 0x7c
	bool m_StreamInstallMaintainGroupOrder; // 0x7d
	unsigned char _0x7e[0x2];
}; // size = 0x80

#endif // FBGEN_CoreSettings_H
