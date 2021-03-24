//
// Generated with FrostbiteGen by Chod
// File: SDK\LevelData.h
// Created: Wed Mar 10 19:06:19 2021
//

#ifndef FBGEN_LevelData_H
#define FBGEN_LevelData_H

#include "PathfindingBlobAsset.h"
#include "GameAISystem.h"
#include "LevelDescription.h"
#include "StreamPoolPreset.h"
#include "VoiceOverSystemAsset.h"
#include "EnlightenShaderDatabaseAsset.h"
#include "AntProjectAsset.h"
#include "LevelPreloadInfo.h"
#include "FaceAnimationWaveMappings.h"
#include "Array.h"
#include "UnlockIdTable.h"
#include "WorldData.h"

class LevelData :
	public WorldData // size = 0x88
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BC30;
	}
	PathfindingBlobAsset* m_PathfindingBlobs; // 0x88
	GameAISystem* m_AISystem; // 0x90
	GameAISystem* m_AI2System; // 0x98
	float m_WorldSizeXZ; // 0xa0
	unsigned char _0xa4[0x4];
	LevelDescription m_LevelDescription; // 0xa8
	const char* m_GameConfigurationName; // 0xc8
	float m_DefaultFOV; // 0xd0
	float m_InfantryFOVMultiplier; // 0xd4
	StreamPoolPreset* m_StreamPoolPreset; // 0xd8
	VoiceOverSystemAsset* m_VoiceOverSystem; // 0xe0
	Array<VoiceOverLogicAsset*> m_VoiceOverLogic; // 0xe8
	float m_MaxVehicleHeight; // 0xf0
	unsigned char _0xf4[0x4];
	EnlightenShaderDatabaseAsset* m_EnlightenShaderDatabase; // 0xf8
	AntProjectAsset* m_AntProjectAsset; // 0x100
	const char* m_AerialHeightmapData; // 0x108
	Array<CameraModeAsset*> m_CameraModes; // 0x110
	Array<CameraTransition*> m_CameraTransitions; // 0x118
	LevelPreloadInfo m_PreloadInfo; // 0x120
	FaceAnimationWaveMappings* m_FaceAnimationWaveMappings; // 0x130
	Array<const char*> m_AutoLoadBundles; // 0x138
	UnlockIdTable m_UnlockIdTable; // 0x140
	bool m_HugeBroadPhase; // 0x148
	bool m_FreeStreamingEnable; // 0x149
	unsigned char _0x14a[0x6];
}; // size = 0x150

#endif // FBGEN_LevelData_H
