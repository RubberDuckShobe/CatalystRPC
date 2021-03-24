//
// Generated with FrostbiteGen by Chod
// File: SDK\GameSettings.h
// Created: Wed Mar 10 19:06:40 2021
//

#ifndef FBGEN_GameSettings_H
#define FBGEN_GameSettings_H

#include "LogFileCollisionMode.h"
#include "TeamId.h"
#include "VersionData.h"
#include "SubWorldInclusion.h"
#include "PlayerData.h"
#include "DifficultyDatas.h"
#include "SKU.h"
#include "Array.h"
#include "SystemSettings.h"

class GameSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428109E0;
	}
	unsigned int m_MaxPlayerCount; // 0x20
	unsigned int m_MaxSpectatorCount; // 0x24
	unsigned int m_MinPlayerCountElimination; // 0x28
	LogFileCollisionMode m_LogFileCollisionMode; // 0x2c
	unsigned int m_LogFileRotationHistoryLength; // 0x30
	unsigned char _0x34[0x4];
	const char* m_Level; // 0x38
	const char* m_StartPoint; // 0x40
	const char* m_InstallationLevel; // 0x48
	const char* m_InstallationStartPoint; // 0x50
	Array<InputConfigurationAsset*> m_InputConfiguration; // 0x58
	const char* m_ActiveGameModeViewDefinition; // 0x60
	Array<GameModeViewDefinition*> m_GameModeViewDefinitions; // 0x68
	TeamId m_DefaultTeamId; // 0x70
	unsigned int m_PS3ContentRatingAge; // 0x74
	unsigned int m_LogHistory; // 0x78
	unsigned char _0x7c[0x4];
	VersionData* m_Version; // 0x80
	SubWorldInclusion* m_LayerInclusionTable; // 0x88
	const char* m_DefaultLayerInclusion; // 0x90
	float m_TimeBeforeSpawnIsAllowed; // 0x98
	float m_LevelWarmUpTime; // 0x9c
	float m_TimeToWaitForQuitTaskCompletion; // 0xa0
	unsigned char _0xa4[0x4];
	PlayerData* m_Player; // 0xa8
	DifficultyDatas* m_DifficultySettings; // 0xb0
	int m_DifficultyIndex; // 0xb8
	SKU m_CurrentSKU; // 0xbc
	float m_ServerFpsLowThreshold; // 0xc0
	unsigned char _0xc4[0x4];
	Array<GameSettingsComponent*> m_GameSettingsComponents; // 0xc8
	bool m_LogFileEnable; // 0xd0
	bool m_ResourceRefreshAlwaysAllowed; // 0xd1
	bool m_SpawnMaxLocalPlayersOnStartup; // 0xd2
	bool m_UseSpeedBasedDetailedCollision; // 0xd3
	bool m_UseSingleWeaponSelector; // 0xd4
	bool m_AutoAimEnabled; // 0xd5
	bool m_HasUnlimitedAmmo; // 0xd6
	bool m_HasUnlimitedMags; // 0xd7
	bool m_RotateLogs; // 0xd8
	bool m_AdjustVehicleCenterOfMass; // 0xd9
	bool m_AimAssistEnabled; // 0xda
	bool m_AimAssistUsePolynomials; // 0xdb
	bool m_ForceFreeStreaming; // 0xdc
	bool m_ForceDisableFreeStreaming; // 0xdd
	bool m_IsGodMode; // 0xde
	bool m_IsJesusMode; // 0xdf
	bool m_IsJesusModeAi; // 0xe0
	bool m_CoreParallelDispatchJobsEnabled; // 0xe1
	bool m_GameAdministrationEnabled; // 0xe2
	bool m_AllowDestructionOutsideCombatArea; // 0xe3
	bool m_EnableServerFpsTracking; // 0xe4
	unsigned char _0xe5[0x3];
}; // size = 0xe8

#endif // FBGEN_GameSettings_H
