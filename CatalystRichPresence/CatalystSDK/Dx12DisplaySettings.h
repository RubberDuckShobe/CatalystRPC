//
// Generated with FrostbiteGen by Chod
// File: SDK\Dx12DisplaySettings.h
// Created: Wed Mar 10 19:07:07 2021
//

#ifndef FBGEN_Dx12DisplaySettings_H
#define FBGEN_Dx12DisplaySettings_H

#include "DxDisplaySettings.h"

class Dx12DisplaySettings :
	public DxDisplaySettings // size = 0xb8
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142835380;
	}
	int m_ComputeQueueEnable; // 0xb8
	int m_CopyQueueEnable; // 0xbc
	unsigned int m_MaxMultisampleCount; // 0xc0
	int m_TriggerGpuHangFrame; // 0xc4
	unsigned int m_MemoryManagerShrink; // 0xc8
	unsigned int m_MemoryManagerPoolSizeMb; // 0xcc
	unsigned int m_CBVSRVUAVDescriptorAllocatorSize; // 0xd0
	unsigned int m_TransientResourceAllocatorSize; // 0xd4
	bool m_DebugReportLeakSummaryEnable; // 0xd8
	bool m_DebugReportLeakDetailsEnable; // 0xd9
	bool m_CheckDeviceRemovedEnable; // 0xda
	bool m_MemoryPoolsEnable; // 0xdb
	bool m_StablePowerStateEnable; // 0xdc
	bool m_GpuProfilerEnable; // 0xdd
	bool m_DrawStats; // 0xde
	bool m_DrawMemoryStats; // 0xdf
	bool m_DrawMemoryGraph; // 0xe0
	bool m_DepthBoundsExtensionEnable; // 0xe1
	bool m_ResetJobEnable; // 0xe2
	bool m_ParallelResetJobEnable; // 0xe3
	bool m_SubmitJobEnable; // 0xe4
	bool m_PresentJoinJobsEnable; // 0xe5
	bool m_ValidateStateCausesResourceTransition; // 0xe6
	bool m_PixMarkersEnable; // 0xe7
	bool m_BatchBarriersEnable; // 0xe8
	bool m_PipelineCachingEnable; // 0xe9
	bool m_OptimizedComputeSyncEnable; // 0xea
	bool m_MemoryManagerEnable; // 0xeb
	bool m_MemoryManagerSubscribe; // 0xec
	bool m_MemoryManagerReserve; // 0xed
	bool m_MemoryManagerVerbose; // 0xee
	bool m_UseReservedJobThreads; // 0xef
	bool m_ClearUnusedDescriptorsToNull; // 0xf0
	unsigned char _0xf1[0x7];
}; // size = 0xf8

#endif // FBGEN_Dx12DisplaySettings_H
