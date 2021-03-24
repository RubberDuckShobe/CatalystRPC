//
// Generated with FrostbiteGen by Chod
// File: SDK\BaseDisplaySettings.h
// Created: Wed Mar 10 19:08:32 2021
//

#ifndef FBGEN_BaseDisplaySettings_H
#define FBGEN_BaseDisplaySettings_H

#include "SystemSettings.h"

class BaseDisplaySettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834D90;
	}
	unsigned int m_FullscreenHeight; // 0x20
	unsigned int m_FullscreenWidth; // 0x24
	float m_FullscreenRefreshRate; // 0x28
	int m_FullscreenOutputIndex; // 0x2c
	int m_PresentInterval; // 0x30
	unsigned int m_PresentImmediateThreshold; // 0x34
	int m_RenderAheadLimit; // 0x38
	float m_GpuTimeoutTime; // 0x3c
	float m_LatencyLimitMs; // 0x40
	float m_RecoveryTimeMaxMs; // 0x44
	float m_RecoveryTimeRampMs; // 0x48
	unsigned int m_FrameResourceSegmentSize; // 0x4c
	unsigned int m_FrameResourceNonSegmentSize; // 0x50
	unsigned int m_FrameResourceFreeFrameCount; // 0x54
	float m_FrameResourceFreeFactor; // 0x58
	float m_StereoDepth; // 0x5c
	float m_StereoConvergenceScale; // 0x60
	float m_StereoSeparationScale; // 0x64
	float m_StereoSoldierZoomConvergenceScale; // 0x68
	bool m_NullDriverEnable; // 0x6c
	bool m_CreateMinimalWindow; // 0x6d
	bool m_FullscreenModeEnable; // 0x6e
	bool m_Fullscreen; // 0x6f
	bool m_PresentEnable; // 0x70
	bool m_WindowBordersEnable; // 0x71
	bool m_VSyncEnable; // 0x72
	bool m_TripleBufferingEnable; // 0x73
	bool m_AutomaticComputeSyncEnable; // 0x74
	bool m_LockRenderDispatchToPresent; // 0x75
	bool m_FrameResourceFreeEnable; // 0x76
	bool m_StereoEnable; // 0x77
	bool m_StereoSplitScreenEnable; // 0x78
	bool m_StereoVrEnable; // 0x79
	unsigned char _0x7a[0x6];
}; // size = 0x80

#endif // FBGEN_BaseDisplaySettings_H
