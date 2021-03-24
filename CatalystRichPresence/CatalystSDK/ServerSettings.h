//
// Generated with FrostbiteGen by Chod
// File: SDK\ServerSettings.h
// Created: Wed Mar 10 19:01:51 2021
//

#ifndef FBGEN_ServerSettings_H
#define FBGEN_ServerSettings_H

#include "SystemSettings.h"

class ServerSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820EB0;
	}
	const char* m_InstancePath; // 0x20
	unsigned int m_RemoteControlPort; // 0x28
	unsigned int m_MaxQueriesPerSecond; // 0x2c
	const char* m_SavePoint; // 0x30
	float m_TimeoutTime; // 0x38
	unsigned int m_PlayerCountNeededForMultiplayer; // 0x3c
	const char* m_DebugMenuClick; // 0x40
	float m_JuiceTimeThreshold; // 0x48
	unsigned char _0x4c[0x4];
	const char* m_JuiceReportPerformanceCategory; // 0x50
	float m_LoadingTimeout; // 0x58
	float m_IngameTimeout; // 0x5c
	float m_OutgoingFrequency; // 0x60
	float m_OutgoingHighFrequency; // 0x64
	unsigned int m_IncomingRate; // 0x68
	unsigned int m_OutgoingRate; // 0x6c
	unsigned int m_OutgoingHighFrequencyRate; // 0x70
	unsigned char _0x74[0x4];
	const char* m_Playlist; // 0x78
	int m_DedicatedServerCpu; // 0x80
	unsigned int m_SaveGameVersion; // 0x84
	const char* m_ServerName; // 0x88
	const char* m_ServerPassword; // 0x90
	float m_VehicleSpawnDelayModifier; // 0x98
	float m_HumanHealthMultiplier; // 0x9c
	float m_RespawnTimeModifier; // 0xa0
	unsigned char _0xa4[0x4];
	const char* m_AdministrationPassword; // 0xa8
	const char* m_RemoteAdministrationPort; // 0xb0
	bool m_QueryProviderEnabled; // 0xb8
	bool m_DebrisClusterEnabled; // 0xb9
	bool m_VegetationEnabled; // 0xba
	bool m_WaterPhysicsEnabled; // 0xbb
	bool m_IsDesertingAllowed; // 0xbc
	bool m_IsRenderDamageEvents; // 0xbd
	bool m_RespawnOnDeathPosition; // 0xbe
	bool m_IsStatsEnabled; // 0xbf
	bool m_IsNetworkStatsEnabled; // 0xc0
	bool m_IsAiEnabled; // 0xc1
	bool m_IsDestructionEnabled; // 0xc2
	bool m_IsSoldierAnimationEnabled; // 0xc3
	bool m_IsSoldierDetailedCollisionEnabled; // 0xc4
	bool m_LoadSavePoint; // 0xc5
	bool m_DisableCutscenes; // 0xc6
	bool m_HavokVisualDebugger; // 0xc7
	bool m_HavokCaptureToFile; // 0xc8
	bool m_ShowTriggerDebugText; // 0xc9
	bool m_TimeoutGame; // 0xca
	bool m_AILooksIntoCamera; // 0xcb
	bool m_DeathmatchDebugInfo; // 0xcc
	bool m_JuiceReportPerformanceEnabled; // 0xcd
	bool m_JuiceReportMemoryEnabled; // 0xce
	bool m_JobEnable; // 0xcf
	bool m_ThreadingEnable; // 0xd0
	bool m_DrawActivePhysicsObjects; // 0xd1
	bool m_IsRanked; // 0xd2
	bool m_UnlockResolver; // 0xd3
	bool m_ScoringLogEnabled; // 0xd4
	bool m_HighFrequencyUpdateEnabled; // 0xd5
	bool m_ForcePlaylist; // 0xd6
	bool m_AutoUnspawnBangers; // 0xd7
	bool m_RegulatedAIThrottle; // 0xd8
	bool m_EnableAnimationCulling; // 0xd9
	bool m_FallBackToSquadSpawn; // 0xda
	bool m_SaveGameUseProfileSaves; // 0xdb
	bool m_VehicleSpawnAllowed; // 0xdc
	bool m_AdministrationEnabled; // 0xdd
	bool m_AdministrationLogEnabled; // 0xde
	bool m_AdministrationTimeStampLogNames; // 0xdf
	bool m_AdministrationEventsEnabled; // 0xe0
	bool m_AdministrationServerNameRestricted; // 0xe1
	bool m_ExtendedJuiceLoggingEnabled; // 0xe2
	unsigned char _0xe3[0x5];
}; // size = 0xe8

#endif // FBGEN_ServerSettings_H
