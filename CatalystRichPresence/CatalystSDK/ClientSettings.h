//
// Generated with FrostbiteGen by Chod
// File: SDK\ClientSettings.h
// Created: Wed Mar 10 19:07:50 2021
//

#ifndef FBGEN_ClientSettings_H
#define FBGEN_ClientSettings_H

#include "Array.h"
#include "SystemSettings.h"

class ClientSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816E60;
	}
	Array<bool> m_PadsRumbleEnabled; // 0x20
	Array<unsigned int> m_PadsIndex; // 0x28
	unsigned int m_VrDeviceType; // 0x30
	float m_JuiceDistanceThreshold; // 0x34
	float m_JuiceTimeThreshold; // 0x38
	float m_JuiceVehicleDistanceThreshold; // 0x3c
	float m_JuiceVehicleTimeThreshold; // 0x40
	unsigned char _0x44[0x4];
	const char* m_JuiceReportPerformanceCategory; // 0x48
	float m_JuicePerformanceFpsHistogramTimeThreshold; // 0x50
	unsigned char _0x54[0x4];
	const char* m_ScreenshotFilename; // 0x58
	const char* m_ScreenshotSuffix; // 0x60
	unsigned int m_Team; // 0x68
	int m_SpawnPointIndex; // 0x6c
	const char* m_ServerIp; // 0x70
	const char* m_SecondaryServerIp; // 0x78
	float m_AimScale; // 0x80
	float m_MouseSensitivityMin; // 0x84
	float m_MouseSensitivitySliderRange; // 0x88
	float m_MouseSensitivityFactor; // 0x8c
	float m_MouseSensitivityPower; // 0x90
	float m_XenonGamepadDeadZoneCenter; // 0x94
	float m_XenonGamepadDeadZoneAxis; // 0x98
	float m_XenonGamepadDeadZoneOffsetAxis; // 0x9c
	float m_PS3GamepadDeadZoneCenter; // 0xa0
	float m_PS3GamepadDeadZoneAxis; // 0xa4
	float m_PS3GamepadDeadZoneOffsetAxis; // 0xa8
	float m_PCGamepadDeadZoneCenter; // 0xac
	float m_PCGamepadDeadZoneAxis; // 0xb0
	float m_PCGamepadDeadZoneOffsetAxis; // 0xb4
	float m_Gen4aGamepadDeadZoneCenter; // 0xb8
	float m_Gen4aGamepadDeadZoneAxis; // 0xbc
	float m_Gen4aGamepadDeadZoneOffsetAxis; // 0xc0
	float m_Gen4bGamepadDeadZoneCenter; // 0xc4
	float m_Gen4bGamepadDeadZoneAxis; // 0xc8
	float m_Gen4bGamepadDeadZoneOffsetAxis; // 0xcc
	const char* m_GamepadGuid; // 0xd0
	float m_IncomingFrequency; // 0xd8
	float m_IncomingHighFrequency; // 0xdc
	unsigned int m_IncomingRate; // 0xe0
	unsigned int m_OutgoingRate; // 0xe4
	unsigned int m_IncomingHighFrequencyRate; // 0xe8
	float m_LoadingTimeout; // 0xec
	float m_LoadedTimeout; // 0xf0
	float m_IngameTimeout; // 0xf4
	const char* m_InstancePath; // 0xf8
	bool m_IsSpectator; // 0x100
	bool m_VsyncDuringLoadingScreenEnable; // 0x101
	bool m_VisualFrameInterpolation; // 0x102
	bool m_DisableVideoRecording; // 0x103
	bool m_DebrisClusterEnabled; // 0x104
	bool m_VegetationEnabled; // 0x105
	bool m_ForceEnabled; // 0x106
	bool m_WorldRenderEnabled; // 0x107
	bool m_TerrainEnabled; // 0x108
	bool m_WaterPhysicsEnabled; // 0x109
	bool m_OvergrowthEnabled; // 0x10a
	bool m_EffectsEnabled; // 0x10b
	bool m_EmittersEnabled; // 0x10c
	bool m_AutoIncrementPadIndex; // 0x10d
	bool m_JuicePlayerReportPositionEnabled; // 0x10e
	bool m_JuiceReportPerformanceEnabled; // 0x10f
	bool m_JuiceReportMemoryEnabled; // 0x110
	bool m_JuiceReportPerformanceFpsHistogramEnabled; // 0x111
	bool m_JuiceReportPerformanceOnlyOnSimFrames; // 0x112
	bool m_ExtendedJuiceLoggingEnabled; // 0x113
	bool m_LipSyncEnabled; // 0x114
	bool m_OnDamageSpottingEnabled; // 0x115
	bool m_IgnoreClientFireRateMultiplier; // 0x116
	bool m_PauseGameOnStartUp; // 0x117
	bool m_SkipFastLevelLoad; // 0x118
	bool m_InputEnable; // 0x119
	bool m_ScreenshotToFile; // 0x11a
	bool m_LoadMenu; // 0x11b
	bool m_DebugMenuOnLThumb; // 0x11c
	bool m_InvertFreeCamera; // 0x11d
	bool m_ScreenshotComparisonsEnable; // 0x11e
	bool m_RenderTags; // 0x11f
	bool m_InvertPitch; // 0x120
	bool m_InvertPadPcRightStick; // 0x121
	bool m_Scheme0FlipY; // 0x122
	bool m_Scheme1FlipY; // 0x123
	bool m_Scheme2FlipY; // 0x124
	bool m_InvertYaw; // 0x125
	bool m_ConsoleInputEmulation; // 0x126
	bool m_SampleInputEveryVisualFrame; // 0x127
	bool m_HavokVisualDebugger; // 0x128
	bool m_HavokCaptureToFile; // 0x129
	bool m_UseMouseAndKeyboardSystem; // 0x12a
	bool m_UseGlobalGamePadInput; // 0x12b
	bool m_UsePcGamePadInput; // 0x12c
	bool m_ShowBuildId; // 0x12d
	bool m_ExtractPersistenceInformation; // 0x12e
	bool m_EnableRestTool; // 0x12f
	bool m_LocalVehicleSimulationEnabled; // 0x130
	bool m_AsyncClientBulletEntity; // 0x131
	bool m_AutoUnspawnDynamicObjects; // 0x132
	bool m_QuitGameOnServerDisconnect; // 0x133
	bool m_DebugTrackAllPlayersInSpawnScreen; // 0x134
	bool m_UseOldKillerCamera; // 0x135
	bool m_LuaOptionSetEnable; // 0x136
	unsigned char _0x137[0x1];
}; // size = 0x138

#endif // FBGEN_ClientSettings_H
