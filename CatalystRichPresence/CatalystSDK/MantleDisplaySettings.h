//
// Generated with FrostbiteGen by Chod
// File: SDK\MantleDisplaySettings.h
// Created: Wed Mar 10 19:06:04 2021
//

#ifndef FBGEN_MantleDisplaySettings_H
#define FBGEN_MantleDisplaySettings_H

#include "BaseDisplaySettings.h"

class MantleDisplaySettings :
	public BaseDisplaySettings // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428352C0;
	}
	unsigned int m_MaxValidationLevel; // 0x80
	unsigned int m_ValidationLevel; // 0x84
	float m_TimestampCalibrationFrequency; // 0x88
	int m_GpuIndex; // 0x8c
	unsigned int m_MultiGpuMaxCount; // 0x90
	int m_CrossDisplayPresent; // 0x94
	unsigned int m_SimulateMultiGpuCount; // 0x98
	unsigned int m_FramePacingMethod; // 0x9c
	float m_FramePacingDampeningFactor; // 0xa0
	float m_FramePacingSpikeFilterThreshold; // 0xa4
	unsigned int m_FramePacingHistorySize; // 0xa8
	unsigned int m_MaxFrameDescriptorSetSlotCount; // 0xac
	const char* m_AppName; // 0xb0
	unsigned int m_AppVersion; // 0xb8
	unsigned char _0xbc[0x4];
	const char* m_AmdMinCatalystVersion; // 0xc0
	const char* m_AmdMinDriverPackagingVersion; // 0xc8
	bool m_BreakOnError; // 0xd0
	bool m_BreakOnWarning; // 0xd1
	bool m_MemoryPoolingEnable; // 0xd2
	bool m_GpuProfilerEnable; // 0xd3
	bool m_TimestampCalibrationEnable; // 0xd4
	bool m_MultiGpuEnable; // 0xd5
	bool m_CommandBuffersEnable; // 0xd6
	bool m_ComputeQueueEnable; // 0xd7
	bool m_DmaQueueEnable; // 0xd8
	bool m_TimerQueueEnable; // 0xd9
	bool m_AdvancedMsaaEnable; // 0xda
	bool m_FmaskEnable; // 0xdb
	bool m_OcclusionQueryCopyEnable; // 0xdc
	bool m_TimestampQueriesEnable; // 0xdd
	bool m_DepthBoundsEnable; // 0xde
	bool m_QuadListEnable; // 0xdf
	bool m_RectListEnable; // 0xe0
	bool m_CmdBufferOptimizePipelineSwitch; // 0xe1
	bool m_CmdBufferOptimizeDescriptorSetSwitch; // 0xe2
	bool m_CmdBufferOptimizeGpuSmallBatch; // 0xe3
	bool m_CmdBufferOptimizeOneTimeEnable; // 0xe4
	bool m_RenderAccessOptimalEnable; // 0xe5
	bool m_UseReservedJobThreads; // 0xe6
	bool m_ForceDriverPreferredMemoryLocations; // 0xe7
	bool m_VideoSharedAsSystemSharedOnIntegrated; // 0xe8
	bool m_SubmitJobEnable; // 0xe9
	bool m_DrawStats; // 0xea
	bool m_AsyncResourceManagerEnable; // 0xeb
	bool m_MinDriverRequired; // 0xec
	unsigned char _0xed[0x3];
}; // size = 0xf0

#endif // FBGEN_MantleDisplaySettings_H
